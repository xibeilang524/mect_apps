#include "app_logprint.h"
#include "atcmplugin.h"
#include "main.h"
#include "pagebrowser.h"
#include "crosstable.h"
#include "automation.h"

// OCTOPUS STATUS
#define STATUS_IDLE       0
#define STATUS_STARTING   1
#define STATUS_READY      2
#define STATUS_TESTING    3
#define STATUS_DONE       4
#define STATUS_RESETTING  5
#define STATUS_STOPPING   6
#define STATUS_ERROR      7

// TEST_STATUS
#define TEST_STATUS_LOCAL  0x0000
#define TEST_STATUS_REMOTE 0x00D8
#define TEST_STATUS_DONE   0x002A

// RESULT VALUES
#define RESULT_UNKNOWN  -1
#define RESULT_NG       0
#define RESULT_OK       1

// LOCAL DIGITAL INPUTS
#define PLC_PWR_SWITCH PLC_DigIn_1
#define PLC_GO_BUTTON PLC_DigIn_4

// PRODUCT_NAMES <-- PRODUCT_ID
#define PRODUCT_MAX 21
static char product_name[][15] = {
    /*00*/ "-",
    /*01*/ "TP1043_01_A",
    /*02*/ "TP1043_01_B",
    /*03*/ "TP1043_01_C",
    /*04*/ "TP1057_01_A",
    /*05*/ "TP1057_01_B",
    /*06*/ "TP1070_01_A",
    /*07*/ "TP1070_01_B",
    /*08*/ "TP1070_01_C",
    /*09*/ "TP1070_01_D",
    /*10*/ "TPAC1006",
    /*11*/ "TPAC1007_03",
    /*12*/ "TPAC1007_04_AA",
    /*13*/ "TPAC1007_04_AB",
    /*14*/ "TPAC1007_04_AC",
    /*15*/ "TPAC1007_LV",
    /*16*/ "TPAC1008_01",
    /*17*/ "TPAC1008_02_AA",
    /*18*/ "TPAC1008_02_AB",
    /*19*/ "TPAC1008_02_AC",
    /*20*/ "TPAC1008_02_AD",
    /*21*/ "TPAC1008_02_AE",
    /*22*/ "TPAC1008_02_AF"
};
#define RECIPE_MAX 2
static char recipe_name[][3] = {"-", "1", "2"};

#define abs(v) (((v) > 0)? (v):-(v))
#define MAX_STEP 64
// TST_...
QList<u_int16_t> testsIndexes;
QList<u_int32_t> testsTable[MAX_STEP];
// VAL_...
QList<u_int16_t> valuesIndexes;
QList<u_int32_t> valuesTable[MAX_STEP];

static void clearAllTST(void);
static void doReload();

static u_int16_t previous_PLC_Heartbeat;
static float previous_PLC_time;
static float last_PLC_time;

void setup(void)
{
    doWrite_RESULT(RESULT_UNKNOWN);
    previous_PLC_Heartbeat = PLC_Heartbeat;
    previous_PLC_time = PLC_time;
    last_PLC_time = PLC_time;
}

void loop(void)
{
    if (previous_PLC_Heartbeat == PLC_Heartbeat) {
        if ((PLC_time - last_PLC_time) > 1.0) {
            QMessageBox box;
            box.setWindowTitle("RTU3 hangup :(");
            box.setText("What happened?");
            box.exec();
        }
    } else {
        previous_PLC_Heartbeat = PLC_Heartbeat;
        last_PLC_time = PLC_time;
        if (previous_PLC_time == PLC_time) {
            QMessageBox box;
            box.setWindowTitle("PLC_time hangup :(");
            box.setText("What happened?");
            box.exec();
        } else {
            previous_PLC_time = PLC_time;
        }
    }


    switch (STATUS) {   // OCTOPUS STATE MACHINE

    case STATUS_IDLE:
        /* this state is managed in PLC */
        logStop();
        if (DO_RELOAD) {
            doReload();
            doWrite_DO_RELOAD(0);
            sleep(1); // just for viewing the led change
        }
        break;

    case STATUS_STARTING:
        /* this state is managed in PLC */
        logStop();
        break;

    case STATUS_READY:
        if (!PLC_PWR_SWITCH) {
            doWrite_STATUS(STATUS_STOPPING);
            return;
        }
        if (DO_RELOAD) {
            doReload();
            doWrite_DO_RELOAD(0);
        }
        if (TEST2_STATUS != TEST_STATUS_REMOTE || TESTx_STATUS != TEST_STATUS_REMOTE) {
            doWrite_STATUS(STATUS_STARTING);
            return;
        }
        if (AUTOMATIC || PLC_GO_BUTTON) {
            int next_step;
            if (TEST_STEP_MAX == 0) {
                return;
            }
            // next step
            next_step = TEST_STEP;
            if (next_step >= TEST_STEP_MAX) {
                if (DO_REPEAT) {
                    next_step = 1;
                } else {
                    logStop();
                    if (RESULTS_OK == TEST_STEP_MAX && RESULTS_NG == 0) {
                        QMessageBox box;
                        box.setWindowTitle("TEST RESULT");
                        box.setText("RESULT = OK\n\nnow PWR_OFF then touch OK");
                        box.exec();
                    }
                    return;
                }
            } else {
                ++next_step;
            }
            logStart();
            doWrite_TEST_STEP(next_step);
            clearAllTST();
            if (writeRecipe(next_step - 1, &testsIndexes, testsTable) != 0) {
                doWrite_STATUS(STATUS_ERROR);
                return;
            }
            if (writeRecipe(next_step - 1, &valuesIndexes, valuesTable) != 0) {
                doWrite_STATUS(STATUS_ERROR);
                return;
            }
            doWrite_STATUS(STATUS_TESTING);
            sleep(1);
            return;
        }
        break;

    case STATUS_ERROR:
        if (!PLC_PWR_SWITCH) {
            doWrite_STATUS(STATUS_STOPPING);
            return;
        }
        if (PLC_GO_BUTTON) {
            doWrite_TEST2_COMMAND(TEST_STATUS_LOCAL);
            doWrite_TESTx_COMMAND(TEST_STATUS_LOCAL);
            doWrite_RESULT(RESULT_UNKNOWN);
            doWrite_STATUS(STATUS_RESETTING);
            return;
        }
        break;

    case STATUS_TESTING:
        /* this state is managed in PLC */
        break;

    case STATUS_DONE:
        /* this state is managed in PLC */
        break;

    case STATUS_RESETTING:
        /* this state is managed in PLC */
        break;

    case STATUS_STOPPING:
        /* this state is managed in PLC */
        logStop();
        break;

    default:
        ;
    }
}

static void doReload()
{
    char filename[256];
    int t, v;

    // file: /local/data/recipe/TPAC1007_4AA/2.csv
    snprintf(filename, 256, "%s/%s/%s.csv", RECIPE_DIR, product_name[PRODUCT_ID], recipe_name[TEST_ID]);
    t = loadRecipe(filename, &testsIndexes, testsTable);

    // file: /local/data/recipe/Values/2.csv
    snprintf(filename, 256, "%s/Values/%s.csv", RECIPE_DIR, recipe_name[TEST_ID]);
    v = loadRecipe(filename, &valuesIndexes, valuesTable);

    if (t == v && t > 0 && v > 0) {
        doWrite_TEST_STEP_MAX(t);
    } else {
        doWrite_TEST_STEP_MAX(0);
    }
}

char *strtok_csv(char *string, const char *separators, char **savedptr)
{
    char *p, *s;

    if (separators == NULL || savedptr == NULL) {
        return NULL;
    }
    if (string == NULL) {
        p = *savedptr;
        if (p == NULL) {
            return NULL;
        }
    } else {
        p = string;
    }

    s = strstr(p, separators);
    if (s == NULL) {
        *savedptr = NULL;
        return p;
    }
    *s = 0;
    *savedptr = s + 1;

    // remove spaces at head
    while (p < s && isspace(*p)) {
        ++p;
    }
    // remove spaces at tail
    --s;
    while (s > p && isspace(*s)) {
        *s = 0;
        --s;
    }
    return p;
}

static void clearAllTST(void)
{
    beginWrite();

    addWrite_TST_DigIn_1(0);
    addWrite_TST_DigIn_2(0);
    addWrite_TST_DigIn_3(0);
    addWrite_TST_DigIn_4(0);
    addWrite_TST_DigIn_5(0);
    addWrite_TST_DigIn_6(0);
    addWrite_TST_DigIn_7(0);
    addWrite_TST_DigIn_8(0);
    addWrite_TST_DigIn_9(0);
    addWrite_TST_DigIn_10(0);
    addWrite_TST_DigIn_11(0);
    addWrite_TST_DigIn_12(0);
    addWrite_TST_DigIn_13(0);
    addWrite_TST_DigIn_14(0);
    addWrite_TST_DigIn_15(0);
    addWrite_TST_DigIn_16(0);

    addWrite_TST_DigOut_1(0);
    addWrite_TST_DigOut_2(0);
    addWrite_TST_DigOut_3(0);
    addWrite_TST_DigOut_4(0);
    addWrite_TST_DigOut_5(0);
    addWrite_TST_DigOut_6(0);
    addWrite_TST_DigOut_7(0);
    addWrite_TST_DigOut_8(0);
    addWrite_TST_DigOut_9(0);
    addWrite_TST_DigOut_10(0);
    addWrite_TST_DigOut_11(0);
    addWrite_TST_DigOut_12(0);
    addWrite_TST_DigOut_13(0);
    addWrite_TST_DigOut_14(0);
    addWrite_TST_DigOut_15(0);
    addWrite_TST_DigOut_16(0);

    addWrite_TST_AnIn_1(0);
    addWrite_TST_AnIn_2(0);
    addWrite_TST_AnIn_3(0);
    addWrite_TST_AnIn_4(0);
    addWrite_TST_AnIn_5(0);
    addWrite_TST_AnIn_6(0);
    addWrite_TST_AnIn_7(0);
    addWrite_TST_AnIn_8(0);
    addWrite_TST_AnIn_9(0);
    addWrite_TST_AnIn_10(0);
    addWrite_TST_AnIn_11(0);
    addWrite_TST_AnIn_12(0);

    addWrite_TST_AnOut_1(0);
    addWrite_TST_AnOut_2(0);
    addWrite_TST_AnOut_3(0);
    addWrite_TST_AnOut_4(0);

    addWrite_TST_Tamb(0);
    addWrite_TST_RPM(0);
    addWrite_TST_VCC_set(0);
    addWrite_TST_mA_max(0);
    addWrite_TST_VCC_fbk(0);
    addWrite_TST_mA_fbk(0);
    addWrite_TST_FWrevision(0);
    addWrite_TST_HWconfig(0);

    addWrite_TST_RTUS_WR(0);
    addWrite_TST_RTUS_RD(0);
    addWrite_TST_RTU1_WR(0);
    addWrite_TST_RTU1_RD(0);
    addWrite_TST_RTU3_WR(0);
    addWrite_TST_RTU3_RD(0);
    addWrite_TST_CAN1_WR(0);
    addWrite_TST_CAN1_RD(0);

    endWrite();
}
