/*Created by MectConfigurator v2.x
INT       <-> int16_t
UINT      <-> u_int16_t
DINT      <-> int32_t
UDINT     <-> u_int32_t
REAL      <-> float
BIT       <-> int
BYTE      <-> u_int8_t
BYTE_BIT  <-> int
WORD_BIT  <-> int
DWORD_BIT <-> int
*/ 
#include "crosstable.h"
 
u_int32_t PRODUCT_ID = 0;
u_int32_t SERIAL_NUMBER = 0;
u_int16_t TEST_ID = 0;
u_int16_t TEST_STEP = 0;
u_int16_t TEST_STEP_MAX = 0;
u_int32_t TEST_DATE = 0;
u_int32_t TEST_TIME = 0;
u_int32_t TEST_DURATION = 0;
int AUTOMATIC = 0;
int DO_REPEAT = 0;
int DO_RELOAD = 0;
u_int16_t STATUS = 0;
int16_t RESULT = 0;
u_int16_t RESULTS_OK = 0;
u_int16_t RESULTS_NG = 0;
u_int32_t RTU_HeartBeat = 0;
int RTU_DigOut_1 = 0;
int RTU_DigOut_2 = 0;
int RTU_DigOut_3 = 0;
int RTU_DigOut_4 = 0;
int RTU_DigOut_5 = 0;
int RTU_DigOut_6 = 0;
int RTU_DigOut_7 = 0;
int RTU_DigOut_8 = 0;
int RTU_DigOut_9 = 0;
int RTU_DigOut_10 = 0;
int RTU_DigOut_11 = 0;
int RTU_DigOut_12 = 0;
int RTU_DigOut_13 = 0;
int RTU_DigOut_14 = 0;
int RTU_DigOut_15 = 0;
int RTU_DigOut_16 = 0;
int RTU_DigIn_1 = 0;
int RTU_DigIn_2 = 0;
int RTU_DigIn_3 = 0;
int RTU_DigIn_4 = 0;
int RTU_DigIn_5 = 0;
int RTU_DigIn_6 = 0;
int RTU_DigIn_7 = 0;
int RTU_DigIn_8 = 0;
int RTU_DigIn_9 = 0;
int RTU_DigIn_10 = 0;
int RTU_DigIn_11 = 0;
int RTU_DigIn_12 = 0;
int RTU_DigIn_13 = 0;
int RTU_DigIn_14 = 0;
int RTU_DigIn_15 = 0;
int RTU_DigIn_16 = 0;
int16_t RTU_Tamb = 0;
u_int16_t RTU_AnInConf_1 = 0;
u_int16_t RTU_AnInConf_2 = 0;
int16_t RTU_AnIn_1 = 0;
int16_t RTU_AnIn_2 = 0;
int RTU_LocDigDir_1 = 0;
int RTU_LocDigDir_2 = 0;
int RTU_LocDigDir_3 = 0;
int RTU_LocDigDir_4 = 0;
int RTU_LocDigDir_5 = 0;
int RTU_LocDigDir_6 = 0;
int RTU_LocDigDir_7 = 0;
int RTU_LocDigDir_8 = 0;
int RTU_LocDigIn_1 = 0;
int RTU_LocDigIn_2 = 0;
int RTU_LocDigIn_3 = 0;
int RTU_LocDigIn_4 = 0;
int RTU_LocDigIn_5 = 0;
int RTU_LocDigIn_6 = 0;
int RTU_LocDigIn_7 = 0;
int RTU_LocDigIn_8 = 0;
int RTU_LocDigOut_1 = 0;
int RTU_LocDigOut_2 = 0;
int RTU_LocDigOut_3 = 0;
int RTU_LocDigOut_4 = 0;
int RTU_LocDigOut_5 = 0;
int RTU_LocDigOut_6 = 0;
int RTU_LocDigOut_7 = 0;
int RTU_LocDigOut_8 = 0;
int TST_DigIn_1 = 0;
int TST_DigIn_2 = 0;
int TST_DigIn_3 = 0;
int TST_DigIn_4 = 0;
int TST_DigIn_5 = 0;
int TST_DigIn_6 = 0;
int TST_DigIn_7 = 0;
int TST_DigIn_8 = 0;
int TST_DigIn_9 = 0;
int TST_DigIn_10 = 0;
int TST_DigIn_11 = 0;
int TST_DigIn_12 = 0;
int TST_DigIn_13 = 0;
int TST_DigIn_14 = 0;
int TST_DigIn_15 = 0;
int TST_DigIn_16 = 0;
int VAL_DigIn_1 = 0;
int VAL_DigIn_2 = 0;
int VAL_DigIn_3 = 0;
int VAL_DigIn_4 = 0;
int VAL_DigIn_5 = 0;
int VAL_DigIn_6 = 0;
int VAL_DigIn_7 = 0;
int VAL_DigIn_8 = 0;
int VAL_DigIn_9 = 0;
int VAL_DigIn_10 = 0;
int VAL_DigIn_11 = 0;
int VAL_DigIn_12 = 0;
int VAL_DigIn_13 = 0;
int VAL_DigIn_14 = 0;
int VAL_DigIn_15 = 0;
int VAL_DigIn_16 = 0;
int RES_DigIn_1 = 0;
int RES_DigIn_2 = 0;
int RES_DigIn_3 = 0;
int RES_DigIn_4 = 0;
int RES_DigIn_5 = 0;
int RES_DigIn_6 = 0;
int RES_DigIn_7 = 0;
int RES_DigIn_8 = 0;
int RES_DigIn_9 = 0;
int RES_DigIn_10 = 0;
int RES_DigIn_11 = 0;
int RES_DigIn_12 = 0;
int RES_DigIn_13 = 0;
int RES_DigIn_14 = 0;
int RES_DigIn_15 = 0;
int RES_DigIn_16 = 0;
int OK_DigIn_1 = 0;
int OK_DigIn_2 = 0;
int OK_DigIn_3 = 0;
int OK_DigIn_4 = 0;
int OK_DigIn_5 = 0;
int OK_DigIn_6 = 0;
int OK_DigIn_7 = 0;
int OK_DigIn_8 = 0;
int OK_DigIn_9 = 0;
int OK_DigIn_10 = 0;
int OK_DigIn_11 = 0;
int OK_DigIn_12 = 0;
int OK_DigIn_13 = 0;
int OK_DigIn_14 = 0;
int OK_DigIn_15 = 0;
int OK_DigIn_16 = 0;
int TST_DigOut_1 = 0;
int TST_DigOut_2 = 0;
int TST_DigOut_3 = 0;
int TST_DigOut_4 = 0;
int TST_DigOut_5 = 0;
int TST_DigOut_6 = 0;
int TST_DigOut_7 = 0;
int TST_DigOut_8 = 0;
int TST_DigOut_9 = 0;
int TST_DigOut_10 = 0;
int TST_DigOut_11 = 0;
int TST_DigOut_12 = 0;
int TST_DigOut_13 = 0;
int TST_DigOut_14 = 0;
int TST_DigOut_15 = 0;
int TST_DigOut_16 = 0;
int VAL_DigOut_1 = 0;
int VAL_DigOut_2 = 0;
int VAL_DigOut_3 = 0;
int VAL_DigOut_4 = 0;
int VAL_DigOut_5 = 0;
int VAL_DigOut_6 = 0;
int VAL_DigOut_7 = 0;
int VAL_DigOut_8 = 0;
int VAL_DigOut_9 = 0;
int VAL_DigOut_10 = 0;
int VAL_DigOut_11 = 0;
int VAL_DigOut_12 = 0;
int VAL_DigOut_13 = 0;
int VAL_DigOut_14 = 0;
int VAL_DigOut_15 = 0;
int VAL_DigOut_16 = 0;
int RES_DigOut_1 = 0;
int RES_DigOut_2 = 0;
int RES_DigOut_3 = 0;
int RES_DigOut_4 = 0;
int RES_DigOut_5 = 0;
int RES_DigOut_6 = 0;
int RES_DigOut_7 = 0;
int RES_DigOut_8 = 0;
int RES_DigOut_9 = 0;
int RES_DigOut_10 = 0;
int RES_DigOut_11 = 0;
int RES_DigOut_12 = 0;
int RES_DigOut_13 = 0;
int RES_DigOut_14 = 0;
int RES_DigOut_15 = 0;
int RES_DigOut_16 = 0;
int OK_DigOut_1 = 0;
int OK_DigOut_2 = 0;
int OK_DigOut_3 = 0;
int OK_DigOut_4 = 0;
int OK_DigOut_5 = 0;
int OK_DigOut_6 = 0;
int OK_DigOut_7 = 0;
int OK_DigOut_8 = 0;
int OK_DigOut_9 = 0;
int OK_DigOut_10 = 0;
int OK_DigOut_11 = 0;
int OK_DigOut_12 = 0;
int OK_DigOut_13 = 0;
int OK_DigOut_14 = 0;
int OK_DigOut_15 = 0;
int OK_DigOut_16 = 0;
int TST_AnIn_1 = 0;
int TST_AnIn_2 = 0;
int TST_AnIn_3 = 0;
int TST_AnIn_4 = 0;
int TST_AnIn_5 = 0;
int TST_AnIn_6 = 0;
int TST_AnIn_7 = 0;
int TST_AnIn_8 = 0;
int TST_AnIn_9 = 0;
int TST_AnIn_10 = 0;
int TST_AnIn_11 = 0;
int TST_AnIn_12 = 0;
int16_t VAL_AnIn_1 = 0;
int16_t VAL_AnIn_2 = 0;
int16_t VAL_AnIn_3 = 0;
int16_t VAL_AnIn_4 = 0;
int16_t VAL_AnIn_5 = 0;
int16_t VAL_AnIn_6 = 0;
int16_t VAL_AnIn_7 = 0;
int16_t VAL_AnIn_8 = 0;
int16_t VAL_AnIn_9 = 0;
int16_t VAL_AnIn_10 = 0;
int16_t VAL_AnIn_11 = 0;
int16_t VAL_AnIn_12 = 0;
u_int16_t VAL_AnInConf_1 = 0;
u_int16_t VAL_AnInConf_2 = 0;
u_int16_t VAL_AnInConf_3 = 0;
u_int16_t VAL_AnInConf_4 = 0;
u_int16_t VAL_AnInConf_5 = 0;
u_int16_t VAL_AnInConf_6 = 0;
u_int16_t VAL_AnInConf_7 = 0;
u_int16_t VAL_AnInConf_8 = 0;
u_int16_t VAL_AnInConf_9 = 0;
u_int16_t VAL_AnInConf_10 = 0;
u_int16_t VAL_AnInConf_11 = 0;
u_int16_t VAL_AnInConf_12 = 0;
u_int16_t VAL_AnInFltr_1 = 0;
u_int16_t VAL_AnInFltr_2 = 0;
u_int16_t VAL_AnInFltr_3 = 0;
u_int16_t VAL_AnInFltr_4 = 0;
u_int16_t VAL_AnInFltr_5 = 0;
u_int16_t VAL_AnInFltr_6 = 0;
u_int16_t VAL_AnInFltr_7 = 0;
u_int16_t VAL_AnInFltr_8 = 0;
u_int16_t VAL_AnInFltr_9 = 0;
u_int16_t VAL_AnInFltr_10 = 0;
u_int16_t VAL_AnInFltr_11 = 0;
u_int16_t VAL_AnInFltr_12 = 0;
int16_t RES_AnIn_1 = 0;
int16_t RES_AnIn_2 = 0;
int16_t RES_AnIn_3 = 0;
int16_t RES_AnIn_4 = 0;
int16_t RES_AnIn_5 = 0;
int16_t RES_AnIn_6 = 0;
int16_t RES_AnIn_7 = 0;
int16_t RES_AnIn_8 = 0;
int16_t RES_AnIn_9 = 0;
int16_t RES_AnIn_10 = 0;
int16_t RES_AnIn_11 = 0;
int16_t RES_AnIn_12 = 0;
int16_t RES_AnInStts_1 = 0;
int16_t RES_AnInStts_2 = 0;
int16_t RES_AnInStts_3 = 0;
int16_t RES_AnInStts_4 = 0;
int16_t RES_AnInStts_5 = 0;
int16_t RES_AnInStts_6 = 0;
int16_t RES_AnInStts_7 = 0;
int16_t RES_AnInStts_8 = 0;
int16_t RES_AnInStts_9 = 0;
int16_t RES_AnInStts_10 = 0;
int16_t RES_AnInStts_11 = 0;
int16_t RES_AnInStts_12 = 0;
int OK_AnIn_1 = 0;
int OK_AnIn_2 = 0;
int OK_AnIn_3 = 0;
int OK_AnIn_4 = 0;
int OK_AnIn_5 = 0;
int OK_AnIn_6 = 0;
int OK_AnIn_7 = 0;
int OK_AnIn_8 = 0;
int OK_AnIn_9 = 0;
int OK_AnIn_10 = 0;
int OK_AnIn_11 = 0;
int OK_AnIn_12 = 0;
int TST_AnOut_1 = 0;
int TST_AnOut_2 = 0;
int TST_AnOut_3 = 0;
int TST_AnOut_4 = 0;
int16_t VAL_AnOut_1 = 0;
int16_t VAL_AnOut_2 = 0;
int16_t VAL_AnOut_3 = 0;
int16_t VAL_AnOut_4 = 0;
u_int16_t VAL_AnOutConf_1 = 0;
u_int16_t VAL_AnOutConf_2 = 0;
u_int16_t VAL_AnOutConf_3 = 0;
u_int16_t VAL_AnOutConf_4 = 0;
int16_t RES_AnOut_1 = 0;
int16_t RES_AnOut_2 = 0;
int16_t RES_AnOut_3 = 0;
int16_t RES_AnOut_4 = 0;
int16_t RES_AnOutStts_1 = 0;
int16_t RES_AnOutStts_2 = 0;
int16_t RES_AnOutStts_3 = 0;
int16_t RES_AnOutStts_4 = 0;
int OK_AnOut_1 = 0;
int OK_AnOut_2 = 0;
int OK_AnOut_3 = 0;
int OK_AnOut_4 = 0;
int TST_Tamb = 0;
int TST_RPM = 0;
int TST_VCC_set = 0;
int TST_mA_max = 0;
int TST_VCC_fbk = 0;
int TST_mA_fbk = 0;
int TST_FWrevision = 0;
int TST_HWconfig = 0;
int16_t VAL_Tamb = 0;
u_int16_t VAL_RPM = 0;
int16_t VAL_VCC_set = 0;
int16_t VAL_mA_max = 0;
int16_t VAL_VCC_fbk = 0;
int16_t VAL_mA_fbk = 0;
u_int16_t VAL_FWrevision = 0;
u_int16_t VAL_HWconfig = 0;
int16_t RES_Tamb = 0;
u_int16_t RES_RPM = 0;
int16_t RES_VCC_set = 0;
int16_t RES_mA_max = 0;
int16_t RES_VCC_fbk = 0;
int16_t RES_mA_fbk = 0;
u_int16_t RES_FWrevision = 0;
u_int16_t RES_HWconfig = 0;
int OK_Tamb = 0;
int OK_RPM = 0;
int OK_VCC_set = 0;
int OK_mA_max = 0;
int OK_VCC_fbk = 0;
int OK_mA_fbk = 0;
int OK_FWrevision = 0;
int OK_HWconfig = 0;
int TST_RTUS_WR = 0;
int TST_RTUS_RD = 0;
int TST_RTU1_WR = 0;
int TST_RTU1_RD = 0;
int TST_RTU3_WR = 0;
int TST_RTU3_RD = 0;
int TST_CAN1_WR = 0;
int TST_CAN1_RD = 0;
int VAL_RTUS_WR = 0;
int VAL_RTUS_RD = 0;
int VAL_RTU1_WR = 0;
int VAL_RTU1_RD = 0;
int VAL_RTU3_WR = 0;
int VAL_RTU3_RD = 0;
int VAL_CAN1_WR = 0;
int VAL_CAN1_RD = 0;
int RES_RTUS_WR = 0;
int RES_RTUS_RD = 0;
int RES_RTU1_WR = 0;
int RES_RTU1_RD = 0;
int RES_RTU3_WR = 0;
int RES_RTU3_RD = 0;
int RES_CAN1_WR = 0;
int RES_CAN1_RD = 0;
int OK_RTUS_WR = 0;
int OK_RTUS_RD = 0;
int OK_RTU1_WR = 0;
int OK_RTU1_RD = 0;
int OK_RTU3_WR = 0;
int OK_RTU3_RD = 0;
int OK_CAN1_WR = 0;
int OK_CAN1_RD = 0;
u_int16_t TEST2_COMMAND = 0;
int TST2_DigIn_1 = 0;
int TST2_DigIn_2 = 0;
int TST2_DigIn_3 = 0;
int TST2_DigIn_4 = 0;
int TST2_DigIn_5 = 0;
int TST2_DigIn_6 = 0;
int TST2_DigIn_7 = 0;
int TST2_DigIn_8 = 0;
int TST2_DigIn_9 = 0;
int TST2_DigIn_10 = 0;
int TST2_DigIn_11 = 0;
int TST2_DigIn_12 = 0;
int TST2_DigIn_13 = 0;
int TST2_DigIn_14 = 0;
int TST2_DigIn_15 = 0;
int TST2_DigIn_16 = 0;
int VAL2_DigIn_1 = 0;
int VAL2_DigIn_2 = 0;
int VAL2_DigIn_3 = 0;
int VAL2_DigIn_4 = 0;
int VAL2_DigIn_5 = 0;
int VAL2_DigIn_6 = 0;
int VAL2_DigIn_7 = 0;
int VAL2_DigIn_8 = 0;
int VAL2_DigIn_9 = 0;
int VAL2_DigIn_10 = 0;
int VAL2_DigIn_11 = 0;
int VAL2_DigIn_12 = 0;
int VAL2_DigIn_13 = 0;
int VAL2_DigIn_14 = 0;
int VAL2_DigIn_15 = 0;
int VAL2_DigIn_16 = 0;
int RES2_DigIn_1 = 0;
int RES2_DigIn_2 = 0;
int RES2_DigIn_3 = 0;
int RES2_DigIn_4 = 0;
int RES2_DigIn_5 = 0;
int RES2_DigIn_6 = 0;
int RES2_DigIn_7 = 0;
int RES2_DigIn_8 = 0;
int RES2_DigIn_9 = 0;
int RES2_DigIn_10 = 0;
int RES2_DigIn_11 = 0;
int RES2_DigIn_12 = 0;
int RES2_DigIn_13 = 0;
int RES2_DigIn_14 = 0;
int RES2_DigIn_15 = 0;
int RES2_DigIn_16 = 0;
int TST2_DigOut_1 = 0;
int TST2_DigOut_2 = 0;
int TST2_DigOut_3 = 0;
int TST2_DigOut_4 = 0;
int TST2_DigOut_5 = 0;
int TST2_DigOut_6 = 0;
int TST2_DigOut_7 = 0;
int TST2_DigOut_8 = 0;
int TST2_DigOut_9 = 0;
int TST2_DigOut_10 = 0;
int TST2_DigOut_11 = 0;
int TST2_DigOut_12 = 0;
int TST2_DigOut_13 = 0;
int TST2_DigOut_14 = 0;
int TST2_DigOut_15 = 0;
int TST2_DigOut_16 = 0;
int VAL2_DigOut_1 = 0;
int VAL2_DigOut_2 = 0;
int VAL2_DigOut_3 = 0;
int VAL2_DigOut_4 = 0;
int VAL2_DigOut_5 = 0;
int VAL2_DigOut_6 = 0;
int VAL2_DigOut_7 = 0;
int VAL2_DigOut_8 = 0;
int VAL2_DigOut_9 = 0;
int VAL2_DigOut_10 = 0;
int VAL2_DigOut_11 = 0;
int VAL2_DigOut_12 = 0;
int VAL2_DigOut_13 = 0;
int VAL2_DigOut_14 = 0;
int VAL2_DigOut_15 = 0;
int VAL2_DigOut_16 = 0;
int TST2_AnIn_1 = 0;
int TST2_AnIn_2 = 0;
int TST2_AnIn_3 = 0;
int TST2_AnIn_4 = 0;
int TST2_AnIn_5 = 0;
int TST2_AnIn_6 = 0;
int TST2_AnIn_7 = 0;
int TST2_AnIn_8 = 0;
int TST2_AnIn_9 = 0;
int TST2_AnIn_10 = 0;
int TST2_AnIn_11 = 0;
int TST2_AnIn_12 = 0;
int16_t VAL2_AnIn_1 = 0;
int16_t VAL2_AnIn_2 = 0;
int16_t VAL2_AnIn_3 = 0;
int16_t VAL2_AnIn_4 = 0;
int16_t VAL2_AnIn_5 = 0;
int16_t VAL2_AnIn_6 = 0;
int16_t VAL2_AnIn_7 = 0;
int16_t VAL2_AnIn_8 = 0;
int16_t VAL2_AnIn_9 = 0;
int16_t VAL2_AnIn_10 = 0;
int16_t VAL2_AnIn_11 = 0;
int16_t VAL2_AnIn_12 = 0;
u_int16_t VAL2_AnInConf_1 = 0;
u_int16_t VAL2_AnInConf_2 = 0;
u_int16_t VAL2_AnInConf_3 = 0;
u_int16_t VAL2_AnInConf_4 = 0;
u_int16_t VAL2_AnInConf_5 = 0;
u_int16_t VAL2_AnInConf_6 = 0;
u_int16_t VAL2_AnInConf_7 = 0;
u_int16_t VAL2_AnInConf_8 = 0;
u_int16_t VAL2_AnInConf_9 = 0;
u_int16_t VAL2_AnInConf_10 = 0;
u_int16_t VAL2_AnInConf_11 = 0;
u_int16_t VAL2_AnInConf_12 = 0;
u_int16_t VAL2_AnInFltr_1 = 0;
u_int16_t VAL2_AnInFltr_2 = 0;
u_int16_t VAL2_AnInFltr_3 = 0;
u_int16_t VAL2_AnInFltr_4 = 0;
u_int16_t VAL2_AnInFltr_5 = 0;
u_int16_t VAL2_AnInFltr_6 = 0;
u_int16_t VAL2_AnInFltr_7 = 0;
u_int16_t VAL2_AnInFltr_8 = 0;
u_int16_t VAL2_AnInFltr_9 = 0;
u_int16_t VAL2_AnInFltr_10 = 0;
u_int16_t VAL2_AnInFltr_11 = 0;
u_int16_t VAL2_AnInFltr_12 = 0;
int16_t RES2_AnIn_1 = 0;
int16_t RES2_AnIn_2 = 0;
int16_t RES2_AnIn_3 = 0;
int16_t RES2_AnIn_4 = 0;
int16_t RES2_AnIn_5 = 0;
int16_t RES2_AnIn_6 = 0;
int16_t RES2_AnIn_7 = 0;
int16_t RES2_AnIn_8 = 0;
int16_t RES2_AnIn_9 = 0;
int16_t RES2_AnIn_10 = 0;
int16_t RES2_AnIn_11 = 0;
int16_t RES2_AnIn_12 = 0;
int16_t RES2_AnInStts_1 = 0;
int16_t RES2_AnInStts_2 = 0;
int16_t RES2_AnInStts_3 = 0;
int16_t RES2_AnInStts_4 = 0;
int16_t RES2_AnInStts_5 = 0;
int16_t RES2_AnInStts_6 = 0;
int16_t RES2_AnInStts_7 = 0;
int16_t RES2_AnInStts_8 = 0;
int16_t RES2_AnInStts_9 = 0;
int16_t RES2_AnInStts_10 = 0;
int16_t RES2_AnInStts_11 = 0;
int16_t RES2_AnInStts_12 = 0;
int TST2_AnOut_1 = 0;
int TST2_AnOut_2 = 0;
int TST2_AnOut_3 = 0;
int TST2_AnOut_4 = 0;
int16_t VAL2_AnOut_1 = 0;
int16_t VAL2_AnOut_2 = 0;
int16_t VAL2_AnOut_3 = 0;
int16_t VAL2_AnOut_4 = 0;
u_int16_t VAL2_AnOutConf_1 = 0;
u_int16_t VAL2_AnOutConf_2 = 0;
u_int16_t VAL2_AnOutConf_3 = 0;
u_int16_t VAL2_AnOutConf_4 = 0;
int16_t RES2_AnOutStts_1 = 0;
int16_t RES2_AnOutStts_2 = 0;
int16_t RES2_AnOutStts_3 = 0;
int16_t RES2_AnOutStts_4 = 0;
int TST2_Tamb = 0;
int TST2_RPM = 0;
int TST2_FWrevision = 0;
int TST2_HWconfig = 0;
int16_t VAL2_Tamb = 0;
u_int16_t VAL2_RPM = 0;
u_int16_t VAL2_FWrevision = 0;
u_int16_t VAL2_HWconfig = 0;
int16_t RES2_Tamb = 0;
u_int16_t RES2_RPM = 0;
u_int16_t RES2_FWrevision = 0;
u_int16_t RES2_HWconfig = 0;
int TST2_RTUS_WR = 0;
int TST2_RTUS_RD = 0;
int TST2_RTU1_WR = 0;
int TST2_RTU1_RD = 0;
int TST2_RTU3_WR = 0;
int TST2_RTU3_RD = 0;
int TST2_CAN1_WR = 0;
int TST2_CAN1_RD = 0;
int VAL2_RTUS_WR = 0;
int VAL2_RTUS_RD = 0;
int VAL2_RTU1_WR = 0;
int VAL2_RTU1_RD = 0;
int VAL2_RTU3_WR = 0;
int VAL2_RTU3_RD = 0;
int VAL2_CAN1_WR = 0;
int VAL2_CAN1_RD = 0;
int RES2_RTUS_WR = 0;
int RES2_RTUS_RD = 0;
int RES2_RTU1_WR = 0;
int RES2_RTU1_RD = 0;
int RES2_RTU3_WR = 0;
int RES2_RTU3_RD = 0;
int RES2_CAN1_WR = 0;
int RES2_CAN1_RD = 0;
u_int16_t TEST2_STATUS = 0;
u_int16_t TESTx_COMMAND = 0;
int TSTx_DigIn_1 = 0;
int TSTx_DigIn_2 = 0;
int TSTx_DigIn_3 = 0;
int TSTx_DigIn_4 = 0;
int TSTx_DigIn_5 = 0;
int TSTx_DigIn_6 = 0;
int TSTx_DigIn_7 = 0;
int TSTx_DigIn_8 = 0;
int TSTx_DigIn_9 = 0;
int TSTx_DigIn_10 = 0;
int TSTx_DigIn_11 = 0;
int TSTx_DigIn_12 = 0;
int TSTx_DigIn_13 = 0;
int TSTx_DigIn_14 = 0;
int TSTx_DigIn_15 = 0;
int TSTx_DigIn_16 = 0;
int VALx_DigIn_1 = 0;
int VALx_DigIn_2 = 0;
int VALx_DigIn_3 = 0;
int VALx_DigIn_4 = 0;
int VALx_DigIn_5 = 0;
int VALx_DigIn_6 = 0;
int VALx_DigIn_7 = 0;
int VALx_DigIn_8 = 0;
int VALx_DigIn_9 = 0;
int VALx_DigIn_10 = 0;
int VALx_DigIn_11 = 0;
int VALx_DigIn_12 = 0;
int VALx_DigIn_13 = 0;
int VALx_DigIn_14 = 0;
int VALx_DigIn_15 = 0;
int VALx_DigIn_16 = 0;
int RESx_DigIn_1 = 0;
int RESx_DigIn_2 = 0;
int RESx_DigIn_3 = 0;
int RESx_DigIn_4 = 0;
int RESx_DigIn_5 = 0;
int RESx_DigIn_6 = 0;
int RESx_DigIn_7 = 0;
int RESx_DigIn_8 = 0;
int RESx_DigIn_9 = 0;
int RESx_DigIn_10 = 0;
int RESx_DigIn_11 = 0;
int RESx_DigIn_12 = 0;
int RESx_DigIn_13 = 0;
int RESx_DigIn_14 = 0;
int RESx_DigIn_15 = 0;
int RESx_DigIn_16 = 0;
int TSTx_DigOut_1 = 0;
int TSTx_DigOut_2 = 0;
int TSTx_DigOut_3 = 0;
int TSTx_DigOut_4 = 0;
int TSTx_DigOut_5 = 0;
int TSTx_DigOut_6 = 0;
int TSTx_DigOut_7 = 0;
int TSTx_DigOut_8 = 0;
int TSTx_DigOut_9 = 0;
int TSTx_DigOut_10 = 0;
int TSTx_DigOut_11 = 0;
int TSTx_DigOut_12 = 0;
int TSTx_DigOut_13 = 0;
int TSTx_DigOut_14 = 0;
int TSTx_DigOut_15 = 0;
int TSTx_DigOut_16 = 0;
int VALx_DigOut_1 = 0;
int VALx_DigOut_2 = 0;
int VALx_DigOut_3 = 0;
int VALx_DigOut_4 = 0;
int VALx_DigOut_5 = 0;
int VALx_DigOut_6 = 0;
int VALx_DigOut_7 = 0;
int VALx_DigOut_8 = 0;
int VALx_DigOut_9 = 0;
int VALx_DigOut_10 = 0;
int VALx_DigOut_11 = 0;
int VALx_DigOut_12 = 0;
int VALx_DigOut_13 = 0;
int VALx_DigOut_14 = 0;
int VALx_DigOut_15 = 0;
int VALx_DigOut_16 = 0;
int TSTx_AnIn_1 = 0;
int TSTx_AnIn_2 = 0;
int TSTx_AnIn_3 = 0;
int TSTx_AnIn_4 = 0;
int TSTx_AnIn_5 = 0;
int TSTx_AnIn_6 = 0;
int TSTx_AnIn_7 = 0;
int TSTx_AnIn_8 = 0;
int TSTx_AnIn_9 = 0;
int TSTx_AnIn_10 = 0;
int TSTx_AnIn_11 = 0;
int TSTx_AnIn_12 = 0;
int16_t VALx_AnIn_1 = 0;
int16_t VALx_AnIn_2 = 0;
int16_t VALx_AnIn_3 = 0;
int16_t VALx_AnIn_4 = 0;
int16_t VALx_AnIn_5 = 0;
int16_t VALx_AnIn_6 = 0;
int16_t VALx_AnIn_7 = 0;
int16_t VALx_AnIn_8 = 0;
int16_t VALx_AnIn_9 = 0;
int16_t VALx_AnIn_10 = 0;
int16_t VALx_AnIn_11 = 0;
int16_t VALx_AnIn_12 = 0;
u_int16_t VALx_AnInConf_1 = 0;
u_int16_t VALx_AnInConf_2 = 0;
u_int16_t VALx_AnInConf_3 = 0;
u_int16_t VALx_AnInConf_4 = 0;
u_int16_t VALx_AnInConf_5 = 0;
u_int16_t VALx_AnInConf_6 = 0;
u_int16_t VALx_AnInConf_7 = 0;
u_int16_t VALx_AnInConf_8 = 0;
u_int16_t VALx_AnInConf_9 = 0;
u_int16_t VALx_AnInConf_10 = 0;
u_int16_t VALx_AnInConf_11 = 0;
u_int16_t VALx_AnInConf_12 = 0;
u_int16_t VALx_AnInFltr_1 = 0;
u_int16_t VALx_AnInFltr_2 = 0;
u_int16_t VALx_AnInFltr_3 = 0;
u_int16_t VALx_AnInFltr_4 = 0;
u_int16_t VALx_AnInFltr_5 = 0;
u_int16_t VALx_AnInFltr_6 = 0;
u_int16_t VALx_AnInFltr_7 = 0;
u_int16_t VALx_AnInFltr_8 = 0;
u_int16_t VALx_AnInFltr_9 = 0;
u_int16_t VALx_AnInFltr_10 = 0;
u_int16_t VALx_AnInFltr_11 = 0;
u_int16_t VALx_AnInFltr_12 = 0;
int16_t RESx_AnIn_1 = 0;
int16_t RESx_AnIn_2 = 0;
int16_t RESx_AnIn_3 = 0;
int16_t RESx_AnIn_4 = 0;
int16_t RESx_AnIn_5 = 0;
int16_t RESx_AnIn_6 = 0;
int16_t RESx_AnIn_7 = 0;
int16_t RESx_AnIn_8 = 0;
int16_t RESx_AnIn_9 = 0;
int16_t RESx_AnIn_10 = 0;
int16_t RESx_AnIn_11 = 0;
int16_t RESx_AnIn_12 = 0;
int16_t RESx_AnInStts_1 = 0;
int16_t RESx_AnInStts_2 = 0;
int16_t RESx_AnInStts_3 = 0;
int16_t RESx_AnInStts_4 = 0;
int16_t RESx_AnInStts_5 = 0;
int16_t RESx_AnInStts_6 = 0;
int16_t RESx_AnInStts_7 = 0;
int16_t RESx_AnInStts_8 = 0;
int16_t RESx_AnInStts_9 = 0;
int16_t RESx_AnInStts_10 = 0;
int16_t RESx_AnInStts_11 = 0;
int16_t RESx_AnInStts_12 = 0;
int TSTx_AnOut_1 = 0;
int TSTx_AnOut_2 = 0;
int TSTx_AnOut_3 = 0;
int TSTx_AnOut_4 = 0;
int16_t VALx_AnOut_1 = 0;
int16_t VALx_AnOut_2 = 0;
int16_t VALx_AnOut_3 = 0;
int16_t VALx_AnOut_4 = 0;
u_int16_t VALx_AnOutConf_1 = 0;
u_int16_t VALx_AnOutConf_2 = 0;
u_int16_t VALx_AnOutConf_3 = 0;
u_int16_t VALx_AnOutConf_4 = 0;
int16_t RESx_AnOutStts_1 = 0;
int16_t RESx_AnOutStts_2 = 0;
int16_t RESx_AnOutStts_3 = 0;
int16_t RESx_AnOutStts_4 = 0;
int TSTx_Tamb = 0;
int TSTx_RPM = 0;
int TSTx_FWrevision = 0;
int TSTx_HWconfig = 0;
int16_t VALx_Tamb = 0;
u_int16_t VALx_RPM = 0;
u_int16_t VALx_FWrevision = 0;
u_int16_t VALx_HWconfig = 0;
int16_t RESx_Tamb = 0;
u_int16_t RESx_RPM = 0;
u_int16_t RESx_FWrevision = 0;
u_int16_t RESx_HWconfig = 0;
int TSTx_RTUS_WR = 0;
int TSTx_RTUS_RD = 0;
int TSTx_RTU1_WR = 0;
int TSTx_RTU1_RD = 0;
int TSTx_RTU3_WR = 0;
int TSTx_RTU3_RD = 0;
int TSTx_CAN1_WR = 0;
int TSTx_CAN1_RD = 0;
int VALx_RTUS_WR = 0;
int VALx_RTUS_RD = 0;
int VALx_RTU1_WR = 0;
int VALx_RTU1_RD = 0;
int VALx_RTU3_WR = 0;
int VALx_RTU3_RD = 0;
int VALx_CAN1_WR = 0;
int VALx_CAN1_RD = 0;
int RESx_RTUS_WR = 0;
int RESx_RTUS_RD = 0;
int RESx_RTU1_WR = 0;
int RESx_RTU1_RD = 0;
int RESx_RTU3_WR = 0;
int RESx_RTU3_RD = 0;
int RESx_CAN1_WR = 0;
int RESx_CAN1_RD = 0;
u_int16_t TESTx_STATUS = 0;
u_int32_t RTU0_TYPE_PORT = 0;
u_int32_t RTU0_BAUDRATE = 0;
u_int32_t RTU0_STATUS = 0;
u_int32_t RTU0_READS = 0;
u_int32_t RTU0_WRITES = 0;
u_int32_t RTU0_TIMEOUTS = 0;
u_int32_t RTU0_COMM_ERRORS = 0;
u_int32_t RTU0_LAST_ERROR = 0;
u_int32_t RTU0_WRITE_QUEUE = 0;
u_int32_t RTU0_READ_QUEUE = 0;
u_int32_t RTU1_TYPE_PORT = 0;
u_int32_t RTU1_BAUDRATE = 0;
u_int32_t RTU1_STATUS = 0;
u_int32_t RTU1_READS = 0;
u_int32_t RTU1_WRITES = 0;
u_int32_t RTU1_TIMEOUTS = 0;
u_int32_t RTU1_COMM_ERRORS = 0;
u_int32_t RTU1_LAST_ERROR = 0;
u_int32_t RTU1_WRITE_QUEUE = 0;
u_int32_t RTU1_READ_QUEUE = 0;
u_int32_t RTU3_TYPE_PORT = 0;
u_int32_t RTU3_BAUDRATE = 0;
u_int32_t RTU3_STATUS = 0;
u_int32_t RTU3_READS = 0;
u_int32_t RTU3_WRITES = 0;
u_int32_t RTU3_TIMEOUTS = 0;
u_int32_t RTU3_COMM_ERRORS = 0;
u_int32_t RTU3_LAST_ERROR = 0;
u_int32_t RTU3_WRITE_QUEUE = 0;
u_int32_t RTU3_READ_QUEUE = 0;
u_int32_t CAN0_TYPE_PORT = 0;
u_int32_t CAN0_BAUDRATE = 0;
u_int32_t CAN0_STATUS = 0;
u_int32_t CAN0_READS = 0;
u_int32_t CAN0_WRITES = 0;
u_int32_t CAN0_TIMEOUTS = 0;
u_int32_t CAN0_COMM_ERRORS = 0;
u_int32_t CAN0_LAST_ERROR = 0;
u_int32_t CAN0_WRITE_QUEUE = 0;
u_int32_t CAN0_READ_QUEUE = 0;
u_int32_t CAN1_TYPE_PORT = 0;
u_int32_t CAN1_BAUDRATE = 0;
u_int32_t CAN1_STATUS = 0;
u_int32_t CAN1_READS = 0;
u_int32_t CAN1_WRITES = 0;
u_int32_t CAN1_TIMEOUTS = 0;
u_int32_t CAN1_COMM_ERRORS = 0;
u_int32_t CAN1_LAST_ERROR = 0;
u_int32_t CAN1_WRITE_QUEUE = 0;
u_int32_t CAN1_READ_QUEUE = 0;
u_int32_t TCPS_TYPE_PORT = 0;
u_int32_t TCPS_IP_ADDRESS = 0;
u_int32_t TCPS_STATUS = 0;
u_int32_t TCPS_READS = 0;
u_int32_t TCPS_WRITES = 0;
u_int32_t TCPS_TIMEOUTS = 0;
u_int32_t TCPS_COMM_ERRORS = 0;
u_int32_t TCPS_LAST_ERROR = 0;
u_int32_t TCPS_WRITE_QUEUE = 0;
u_int32_t TCPS_READ_QUEUE = 0;
u_int32_t TCP0_TYPE_PORT = 0;
u_int32_t TCP0_IP_ADDRESS = 0;
u_int32_t TCP0_STATUS = 0;
u_int32_t TCP0_READS = 0;
u_int32_t TCP0_WRITES = 0;
u_int32_t TCP0_TIMEOUTS = 0;
u_int32_t TCP0_COMM_ERRORS = 0;
u_int32_t TCP0_LAST_ERROR = 0;
u_int32_t TCP0_WRITE_QUEUE = 0;
u_int32_t TCP0_READ_QUEUE = 0;
u_int32_t TCP1_TYPE_PORT = 0;
u_int32_t TCP1_IP_ADDRESS = 0;
u_int32_t TCP1_STATUS = 0;
u_int32_t TCP1_READS = 0;
u_int32_t TCP1_WRITES = 0;
u_int32_t TCP1_TIMEOUTS = 0;
u_int32_t TCP1_COMM_ERRORS = 0;
u_int32_t TCP1_LAST_ERROR = 0;
u_int32_t TCP1_WRITE_QUEUE = 0;
u_int32_t TCP1_READ_QUEUE = 0;
u_int32_t TCP2_TYPE_PORT = 0;
u_int32_t TCP2_IP_ADDRESS = 0;
u_int32_t TCP2_STATUS = 0;
u_int32_t TCP2_READS = 0;
u_int32_t TCP2_WRITES = 0;
u_int32_t TCP2_TIMEOUTS = 0;
u_int32_t TCP2_COMM_ERRORS = 0;
u_int32_t TCP2_LAST_ERROR = 0;
u_int32_t TCP2_WRITE_QUEUE = 0;
u_int32_t TCP2_READ_QUEUE = 0;
u_int32_t TCP3_TYPE_PORT = 0;
u_int32_t TCP3_IP_ADDRESS = 0;
u_int32_t TCP3_STATUS = 0;
u_int32_t TCP3_READS = 0;
u_int32_t TCP3_WRITES = 0;
u_int32_t TCP3_TIMEOUTS = 0;
u_int32_t TCP3_COMM_ERRORS = 0;
u_int32_t TCP3_LAST_ERROR = 0;
u_int32_t TCP3_WRITE_QUEUE = 0;
u_int32_t TCP3_READ_QUEUE = 0;
u_int32_t TCP4_TYPE_PORT = 0;
u_int32_t TCP4_IP_ADDRESS = 0;
u_int32_t TCP4_STATUS = 0;
u_int32_t TCP4_READS = 0;
u_int32_t TCP4_WRITES = 0;
u_int32_t TCP4_TIMEOUTS = 0;
u_int32_t TCP4_COMM_ERRORS = 0;
u_int32_t TCP4_LAST_ERROR = 0;
u_int32_t TCP4_WRITE_QUEUE = 0;
u_int32_t TCP4_READ_QUEUE = 0;
u_int32_t TCP5_TYPE_PORT = 0;
u_int32_t TCP5_IP_ADDRESS = 0;
u_int32_t TCP5_STATUS = 0;
u_int32_t TCP5_READS = 0;
u_int32_t TCP5_WRITES = 0;
u_int32_t TCP5_TIMEOUTS = 0;
u_int32_t TCP5_COMM_ERRORS = 0;
u_int32_t TCP5_LAST_ERROR = 0;
u_int32_t TCP5_WRITE_QUEUE = 0;
u_int32_t TCP5_READ_QUEUE = 0;
u_int32_t TCP6_TYPE_PORT = 0;
u_int32_t TCP6_IP_ADDRESS = 0;
u_int32_t TCP6_STATUS = 0;
u_int32_t TCP6_READS = 0;
u_int32_t TCP6_WRITES = 0;
u_int32_t TCP6_TIMEOUTS = 0;
u_int32_t TCP6_COMM_ERRORS = 0;
u_int32_t TCP6_LAST_ERROR = 0;
u_int32_t TCP6_WRITE_QUEUE = 0;
u_int32_t TCP6_READ_QUEUE = 0;
u_int32_t TCP7_TYPE_PORT = 0;
u_int32_t TCP7_IP_ADDRESS = 0;
u_int32_t TCP7_STATUS = 0;
u_int32_t TCP7_READS = 0;
u_int32_t TCP7_WRITES = 0;
u_int32_t TCP7_TIMEOUTS = 0;
u_int32_t TCP7_COMM_ERRORS = 0;
u_int32_t TCP7_LAST_ERROR = 0;
u_int32_t TCP7_WRITE_QUEUE = 0;
u_int32_t TCP7_READ_QUEUE = 0;
u_int32_t TCP8_TYPE_PORT = 0;
u_int32_t TCP8_IP_ADDRESS = 0;
u_int32_t TCP8_STATUS = 0;
u_int32_t TCP8_READS = 0;
u_int32_t TCP8_WRITES = 0;
u_int32_t TCP8_TIMEOUTS = 0;
u_int32_t TCP8_COMM_ERRORS = 0;
u_int32_t TCP8_LAST_ERROR = 0;
u_int32_t TCP8_WRITE_QUEUE = 0;
u_int32_t TCP8_READ_QUEUE = 0;
u_int32_t TCP9_TYPE_PORT = 0;
u_int32_t TCP9_IP_ADDRESS = 0;
u_int32_t TCP9_STATUS = 0;
u_int32_t TCP9_READS = 0;
u_int32_t TCP9_WRITES = 0;
u_int32_t TCP9_TIMEOUTS = 0;
u_int32_t TCP9_COMM_ERRORS = 0;
u_int32_t TCP9_LAST_ERROR = 0;
u_int32_t TCP9_WRITE_QUEUE = 0;
u_int32_t TCP9_READ_QUEUE = 0;
u_int32_t NODE_01_DEV_NODE = 0;
u_int32_t NODE_01_STATUS = 0;
u_int32_t NODE_02_DEV_NODE = 0;
u_int32_t NODE_02_STATUS = 0;
u_int32_t NODE_03_DEV_NODE = 0;
u_int32_t NODE_03_STATUS = 0;
u_int32_t NODE_04_DEV_NODE = 0;
u_int32_t NODE_04_STATUS = 0;
u_int32_t NODE_05_DEV_NODE = 0;
u_int32_t NODE_05_STATUS = 0;
u_int32_t NODE_06_DEV_NODE = 0;
u_int32_t NODE_06_STATUS = 0;
u_int32_t NODE_07_DEV_NODE = 0;
u_int32_t NODE_07_STATUS = 0;
u_int32_t NODE_08_DEV_NODE = 0;
u_int32_t NODE_08_STATUS = 0;
u_int32_t NODE_09_DEV_NODE = 0;
u_int32_t NODE_09_STATUS = 0;
u_int32_t NODE_10_DEV_NODE = 0;
u_int32_t NODE_10_STATUS = 0;
u_int32_t NODE_11_DEV_NODE = 0;
u_int32_t NODE_11_STATUS = 0;
u_int32_t NODE_12_DEV_NODE = 0;
u_int32_t NODE_12_STATUS = 0;
u_int32_t NODE_13_DEV_NODE = 0;
u_int32_t NODE_13_STATUS = 0;
u_int32_t NODE_14_DEV_NODE = 0;
u_int32_t NODE_14_STATUS = 0;
u_int32_t NODE_15_DEV_NODE = 0;
u_int32_t NODE_15_STATUS = 0;
u_int32_t NODE_16_DEV_NODE = 0;
u_int32_t NODE_16_STATUS = 0;
u_int16_t PLC_FWrevision = 0;
u_int16_t PLC_HWconfig = 0;
int PLC_DigDir_1 = 0;
int PLC_DigDir_2 = 0;
int PLC_DigDir_3 = 0;
int PLC_DigDir_4 = 0;
int PLC_DigDir_5 = 0;
int PLC_DigDir_6 = 0;
int PLC_DigDir_7 = 0;
int PLC_DigDir_8 = 0;
u_int16_t PLC_AnInConf_1 = 0;
u_int16_t PLC_AnInConf_2 = 0;
u_int16_t PLC_AnOutConf_1 = 0;
u_int16_t PLC_AnOutConf_2 = 0;
u_int16_t PLC_AnOutConf_3 = 0;
u_int16_t PLC_AnOutConf_4 = 0;
int PLC_DigIn_1 = 0;
int PLC_DigIn_2 = 0;
int PLC_DigIn_3 = 0;
int PLC_DigIn_4 = 0;
int PLC_DigIn_5 = 0;
int PLC_DigIn_6 = 0;
int PLC_DigIn_7 = 0;
int PLC_DigIn_8 = 0;
int PLC_DigIn_9 = 0;
int PLC_DigIn_10 = 0;
int PLC_DigIn_11 = 0;
int PLC_DigIn_12 = 0;
int16_t PLC_AnIn_1 = 0;
int16_t PLC_AnIn_2 = 0;
int16_t PLC_AnIn_3 = 0;
int16_t PLC_AnIn_4 = 0;
int16_t PLC_AnIn_5 = 0;
int16_t PLC_Tamb = 0;
u_int32_t PLC_Encoder = 0;
u_int32_t PLC_Capture = 0;
int PLC_DigOut_1 = 0;
int PLC_DigOut_2 = 0;
int PLC_DigOut_3 = 0;
int PLC_DigOut_4 = 0;
int PLC_DigOut_5 = 0;
int PLC_DigOut_6 = 0;
int PLC_DigOut_7 = 0;
int PLC_DigOut_8 = 0;
int16_t PLC_AnOut_1 = 0;
int16_t PLC_AnOut_2 = 0;
int16_t PLC_AnOut_3 = 0;
int16_t PLC_AnOut_4 = 0;
u_int16_t PLC_EncoderStart = 0;
u_int16_t PLC_EncoderReset = 0;
u_int16_t PLC_Heartbeat = 0;
u_int16_t PLC_StatusReg = 0;
u_int16_t PLC_AnIn1Filter = 0;
u_int16_t PLC_AnIn2Filter = 0;
float PLC_time = 0;
float PLC_timeMin = 0;
float PLC_timeMax = 0;
float PLC_timeWin = 0;
u_int16_t PLC_Version = 0;
u_int16_t PLC_EngineStatus = 0;
int PLC_ResetValues = 0;


int doWrite_PRODUCT_ID(u_int32_t value)
{
return doWrite(ID_PRODUCT_ID,  &value);
}


int addWrite_PRODUCT_ID(u_int32_t value)
{
return addWrite(ID_PRODUCT_ID, &value);
}


int getStatus_PRODUCT_ID()
{
return getStatus(ID_PRODUCT_ID);
}


int doWrite_SERIAL_NUMBER(u_int32_t value)
{
return doWrite(ID_SERIAL_NUMBER,  &value);
}


int addWrite_SERIAL_NUMBER(u_int32_t value)
{
return addWrite(ID_SERIAL_NUMBER, &value);
}


int getStatus_SERIAL_NUMBER()
{
return getStatus(ID_SERIAL_NUMBER);
}


int doWrite_TEST_ID(u_int16_t value)
{
return doWrite(ID_TEST_ID,  &value);
}


int addWrite_TEST_ID(u_int16_t value)
{
return addWrite(ID_TEST_ID, &value);
}


int getStatus_TEST_ID()
{
return getStatus(ID_TEST_ID);
}


int doWrite_TEST_STEP(u_int16_t value)
{
return doWrite(ID_TEST_STEP,  &value);
}


int addWrite_TEST_STEP(u_int16_t value)
{
return addWrite(ID_TEST_STEP, &value);
}


int getStatus_TEST_STEP()
{
return getStatus(ID_TEST_STEP);
}


int doWrite_TEST_STEP_MAX(u_int16_t value)
{
return doWrite(ID_TEST_STEP_MAX,  &value);
}


int addWrite_TEST_STEP_MAX(u_int16_t value)
{
return addWrite(ID_TEST_STEP_MAX, &value);
}


int getStatus_TEST_STEP_MAX()
{
return getStatus(ID_TEST_STEP_MAX);
}


int doWrite_TEST_DATE(u_int32_t value)
{
return doWrite(ID_TEST_DATE,  &value);
}


int addWrite_TEST_DATE(u_int32_t value)
{
return addWrite(ID_TEST_DATE, &value);
}


int getStatus_TEST_DATE()
{
return getStatus(ID_TEST_DATE);
}


int doWrite_TEST_TIME(u_int32_t value)
{
return doWrite(ID_TEST_TIME,  &value);
}


int addWrite_TEST_TIME(u_int32_t value)
{
return addWrite(ID_TEST_TIME, &value);
}


int getStatus_TEST_TIME()
{
return getStatus(ID_TEST_TIME);
}


int doWrite_TEST_DURATION(u_int32_t value)
{
return doWrite(ID_TEST_DURATION,  &value);
}


int addWrite_TEST_DURATION(u_int32_t value)
{
return addWrite(ID_TEST_DURATION, &value);
}


int getStatus_TEST_DURATION()
{
return getStatus(ID_TEST_DURATION);
}


int doWrite_AUTOMATIC(int value)
{
return doWrite(ID_AUTOMATIC,  &value);
}


int addWrite_AUTOMATIC(int value)
{
return addWrite(ID_AUTOMATIC, &value);
}


int getStatus_AUTOMATIC()
{
return getStatus(ID_AUTOMATIC);
}


int doWrite_DO_REPEAT(int value)
{
return doWrite(ID_DO_REPEAT,  &value);
}


int addWrite_DO_REPEAT(int value)
{
return addWrite(ID_DO_REPEAT, &value);
}


int getStatus_DO_REPEAT()
{
return getStatus(ID_DO_REPEAT);
}


int doWrite_DO_RELOAD(int value)
{
return doWrite(ID_DO_RELOAD,  &value);
}


int addWrite_DO_RELOAD(int value)
{
return addWrite(ID_DO_RELOAD, &value);
}


int getStatus_DO_RELOAD()
{
return getStatus(ID_DO_RELOAD);
}


int doWrite_STATUS(u_int16_t value)
{
return doWrite(ID_STATUS,  &value);
}


int addWrite_STATUS(u_int16_t value)
{
return addWrite(ID_STATUS, &value);
}


int getStatus_STATUS()
{
return getStatus(ID_STATUS);
}


int doWrite_RESULT(int16_t value)
{
return doWrite(ID_RESULT,  &value);
}


int addWrite_RESULT(int16_t value)
{
return addWrite(ID_RESULT, &value);
}


int getStatus_RESULT()
{
return getStatus(ID_RESULT);
}


int doWrite_RESULTS_OK(u_int16_t value)
{
return doWrite(ID_RESULTS_OK,  &value);
}


int addWrite_RESULTS_OK(u_int16_t value)
{
return addWrite(ID_RESULTS_OK, &value);
}


int getStatus_RESULTS_OK()
{
return getStatus(ID_RESULTS_OK);
}


int doWrite_RESULTS_NG(u_int16_t value)
{
return doWrite(ID_RESULTS_NG,  &value);
}


int addWrite_RESULTS_NG(u_int16_t value)
{
return addWrite(ID_RESULTS_NG, &value);
}


int getStatus_RESULTS_NG()
{
return getStatus(ID_RESULTS_NG);
}


int doWrite_RTU_HeartBeat(u_int32_t value)
{
return doWrite(ID_RTU_HeartBeat,  &value);
}


int addWrite_RTU_HeartBeat(u_int32_t value)
{
return addWrite(ID_RTU_HeartBeat, &value);
}


int getStatus_RTU_HeartBeat()
{
return getStatus(ID_RTU_HeartBeat);
}


int doWrite_RTU_DigOut_1(int value)
{
return doWrite(ID_RTU_DigOut_1,  &value);
}


int addWrite_RTU_DigOut_1(int value)
{
return addWrite(ID_RTU_DigOut_1, &value);
}


int getStatus_RTU_DigOut_1()
{
return getStatus(ID_RTU_DigOut_1);
}


int doWrite_RTU_DigOut_2(int value)
{
return doWrite(ID_RTU_DigOut_2,  &value);
}


int addWrite_RTU_DigOut_2(int value)
{
return addWrite(ID_RTU_DigOut_2, &value);
}


int getStatus_RTU_DigOut_2()
{
return getStatus(ID_RTU_DigOut_2);
}


int doWrite_RTU_DigOut_3(int value)
{
return doWrite(ID_RTU_DigOut_3,  &value);
}


int addWrite_RTU_DigOut_3(int value)
{
return addWrite(ID_RTU_DigOut_3, &value);
}


int getStatus_RTU_DigOut_3()
{
return getStatus(ID_RTU_DigOut_3);
}


int doWrite_RTU_DigOut_4(int value)
{
return doWrite(ID_RTU_DigOut_4,  &value);
}


int addWrite_RTU_DigOut_4(int value)
{
return addWrite(ID_RTU_DigOut_4, &value);
}


int getStatus_RTU_DigOut_4()
{
return getStatus(ID_RTU_DigOut_4);
}


int doWrite_RTU_DigOut_5(int value)
{
return doWrite(ID_RTU_DigOut_5,  &value);
}


int addWrite_RTU_DigOut_5(int value)
{
return addWrite(ID_RTU_DigOut_5, &value);
}


int getStatus_RTU_DigOut_5()
{
return getStatus(ID_RTU_DigOut_5);
}


int doWrite_RTU_DigOut_6(int value)
{
return doWrite(ID_RTU_DigOut_6,  &value);
}


int addWrite_RTU_DigOut_6(int value)
{
return addWrite(ID_RTU_DigOut_6, &value);
}


int getStatus_RTU_DigOut_6()
{
return getStatus(ID_RTU_DigOut_6);
}


int doWrite_RTU_DigOut_7(int value)
{
return doWrite(ID_RTU_DigOut_7,  &value);
}


int addWrite_RTU_DigOut_7(int value)
{
return addWrite(ID_RTU_DigOut_7, &value);
}


int getStatus_RTU_DigOut_7()
{
return getStatus(ID_RTU_DigOut_7);
}


int doWrite_RTU_DigOut_8(int value)
{
return doWrite(ID_RTU_DigOut_8,  &value);
}


int addWrite_RTU_DigOut_8(int value)
{
return addWrite(ID_RTU_DigOut_8, &value);
}


int getStatus_RTU_DigOut_8()
{
return getStatus(ID_RTU_DigOut_8);
}


int doWrite_RTU_DigOut_9(int value)
{
return doWrite(ID_RTU_DigOut_9,  &value);
}


int addWrite_RTU_DigOut_9(int value)
{
return addWrite(ID_RTU_DigOut_9, &value);
}


int getStatus_RTU_DigOut_9()
{
return getStatus(ID_RTU_DigOut_9);
}


int doWrite_RTU_DigOut_10(int value)
{
return doWrite(ID_RTU_DigOut_10,  &value);
}


int addWrite_RTU_DigOut_10(int value)
{
return addWrite(ID_RTU_DigOut_10, &value);
}


int getStatus_RTU_DigOut_10()
{
return getStatus(ID_RTU_DigOut_10);
}


int doWrite_RTU_DigOut_11(int value)
{
return doWrite(ID_RTU_DigOut_11,  &value);
}


int addWrite_RTU_DigOut_11(int value)
{
return addWrite(ID_RTU_DigOut_11, &value);
}


int getStatus_RTU_DigOut_11()
{
return getStatus(ID_RTU_DigOut_11);
}


int doWrite_RTU_DigOut_12(int value)
{
return doWrite(ID_RTU_DigOut_12,  &value);
}


int addWrite_RTU_DigOut_12(int value)
{
return addWrite(ID_RTU_DigOut_12, &value);
}


int getStatus_RTU_DigOut_12()
{
return getStatus(ID_RTU_DigOut_12);
}


int doWrite_RTU_DigOut_13(int value)
{
return doWrite(ID_RTU_DigOut_13,  &value);
}


int addWrite_RTU_DigOut_13(int value)
{
return addWrite(ID_RTU_DigOut_13, &value);
}


int getStatus_RTU_DigOut_13()
{
return getStatus(ID_RTU_DigOut_13);
}


int doWrite_RTU_DigOut_14(int value)
{
return doWrite(ID_RTU_DigOut_14,  &value);
}


int addWrite_RTU_DigOut_14(int value)
{
return addWrite(ID_RTU_DigOut_14, &value);
}


int getStatus_RTU_DigOut_14()
{
return getStatus(ID_RTU_DigOut_14);
}


int doWrite_RTU_DigOut_15(int value)
{
return doWrite(ID_RTU_DigOut_15,  &value);
}


int addWrite_RTU_DigOut_15(int value)
{
return addWrite(ID_RTU_DigOut_15, &value);
}


int getStatus_RTU_DigOut_15()
{
return getStatus(ID_RTU_DigOut_15);
}


int doWrite_RTU_DigOut_16(int value)
{
return doWrite(ID_RTU_DigOut_16,  &value);
}


int addWrite_RTU_DigOut_16(int value)
{
return addWrite(ID_RTU_DigOut_16, &value);
}


int getStatus_RTU_DigOut_16()
{
return getStatus(ID_RTU_DigOut_16);
}


int doWrite_RTU_DigIn_1(int value)
{
return doWrite(ID_RTU_DigIn_1,  &value);
}


int addWrite_RTU_DigIn_1(int value)
{
return addWrite(ID_RTU_DigIn_1, &value);
}


int getStatus_RTU_DigIn_1()
{
return getStatus(ID_RTU_DigIn_1);
}


int doWrite_RTU_DigIn_2(int value)
{
return doWrite(ID_RTU_DigIn_2,  &value);
}


int addWrite_RTU_DigIn_2(int value)
{
return addWrite(ID_RTU_DigIn_2, &value);
}


int getStatus_RTU_DigIn_2()
{
return getStatus(ID_RTU_DigIn_2);
}


int doWrite_RTU_DigIn_3(int value)
{
return doWrite(ID_RTU_DigIn_3,  &value);
}


int addWrite_RTU_DigIn_3(int value)
{
return addWrite(ID_RTU_DigIn_3, &value);
}


int getStatus_RTU_DigIn_3()
{
return getStatus(ID_RTU_DigIn_3);
}


int doWrite_RTU_DigIn_4(int value)
{
return doWrite(ID_RTU_DigIn_4,  &value);
}


int addWrite_RTU_DigIn_4(int value)
{
return addWrite(ID_RTU_DigIn_4, &value);
}


int getStatus_RTU_DigIn_4()
{
return getStatus(ID_RTU_DigIn_4);
}


int doWrite_RTU_DigIn_5(int value)
{
return doWrite(ID_RTU_DigIn_5,  &value);
}


int addWrite_RTU_DigIn_5(int value)
{
return addWrite(ID_RTU_DigIn_5, &value);
}


int getStatus_RTU_DigIn_5()
{
return getStatus(ID_RTU_DigIn_5);
}


int doWrite_RTU_DigIn_6(int value)
{
return doWrite(ID_RTU_DigIn_6,  &value);
}


int addWrite_RTU_DigIn_6(int value)
{
return addWrite(ID_RTU_DigIn_6, &value);
}


int getStatus_RTU_DigIn_6()
{
return getStatus(ID_RTU_DigIn_6);
}


int doWrite_RTU_DigIn_7(int value)
{
return doWrite(ID_RTU_DigIn_7,  &value);
}


int addWrite_RTU_DigIn_7(int value)
{
return addWrite(ID_RTU_DigIn_7, &value);
}


int getStatus_RTU_DigIn_7()
{
return getStatus(ID_RTU_DigIn_7);
}


int doWrite_RTU_DigIn_8(int value)
{
return doWrite(ID_RTU_DigIn_8,  &value);
}


int addWrite_RTU_DigIn_8(int value)
{
return addWrite(ID_RTU_DigIn_8, &value);
}


int getStatus_RTU_DigIn_8()
{
return getStatus(ID_RTU_DigIn_8);
}


int doWrite_RTU_DigIn_9(int value)
{
return doWrite(ID_RTU_DigIn_9,  &value);
}


int addWrite_RTU_DigIn_9(int value)
{
return addWrite(ID_RTU_DigIn_9, &value);
}


int getStatus_RTU_DigIn_9()
{
return getStatus(ID_RTU_DigIn_9);
}


int doWrite_RTU_DigIn_10(int value)
{
return doWrite(ID_RTU_DigIn_10,  &value);
}


int addWrite_RTU_DigIn_10(int value)
{
return addWrite(ID_RTU_DigIn_10, &value);
}


int getStatus_RTU_DigIn_10()
{
return getStatus(ID_RTU_DigIn_10);
}


int doWrite_RTU_DigIn_11(int value)
{
return doWrite(ID_RTU_DigIn_11,  &value);
}


int addWrite_RTU_DigIn_11(int value)
{
return addWrite(ID_RTU_DigIn_11, &value);
}


int getStatus_RTU_DigIn_11()
{
return getStatus(ID_RTU_DigIn_11);
}


int doWrite_RTU_DigIn_12(int value)
{
return doWrite(ID_RTU_DigIn_12,  &value);
}


int addWrite_RTU_DigIn_12(int value)
{
return addWrite(ID_RTU_DigIn_12, &value);
}


int getStatus_RTU_DigIn_12()
{
return getStatus(ID_RTU_DigIn_12);
}


int doWrite_RTU_DigIn_13(int value)
{
return doWrite(ID_RTU_DigIn_13,  &value);
}


int addWrite_RTU_DigIn_13(int value)
{
return addWrite(ID_RTU_DigIn_13, &value);
}


int getStatus_RTU_DigIn_13()
{
return getStatus(ID_RTU_DigIn_13);
}


int doWrite_RTU_DigIn_14(int value)
{
return doWrite(ID_RTU_DigIn_14,  &value);
}


int addWrite_RTU_DigIn_14(int value)
{
return addWrite(ID_RTU_DigIn_14, &value);
}


int getStatus_RTU_DigIn_14()
{
return getStatus(ID_RTU_DigIn_14);
}


int doWrite_RTU_DigIn_15(int value)
{
return doWrite(ID_RTU_DigIn_15,  &value);
}


int addWrite_RTU_DigIn_15(int value)
{
return addWrite(ID_RTU_DigIn_15, &value);
}


int getStatus_RTU_DigIn_15()
{
return getStatus(ID_RTU_DigIn_15);
}


int doWrite_RTU_DigIn_16(int value)
{
return doWrite(ID_RTU_DigIn_16,  &value);
}


int addWrite_RTU_DigIn_16(int value)
{
return addWrite(ID_RTU_DigIn_16, &value);
}


int getStatus_RTU_DigIn_16()
{
return getStatus(ID_RTU_DigIn_16);
}


int doWrite_RTU_Tamb(int16_t value)
{
return doWrite(ID_RTU_Tamb,  &value);
}


int addWrite_RTU_Tamb(int16_t value)
{
return addWrite(ID_RTU_Tamb, &value);
}


int getStatus_RTU_Tamb()
{
return getStatus(ID_RTU_Tamb);
}


int doWrite_RTU_AnInConf_1(u_int16_t value)
{
return doWrite(ID_RTU_AnInConf_1,  &value);
}


int addWrite_RTU_AnInConf_1(u_int16_t value)
{
return addWrite(ID_RTU_AnInConf_1, &value);
}


int getStatus_RTU_AnInConf_1()
{
return getStatus(ID_RTU_AnInConf_1);
}


int doWrite_RTU_AnInConf_2(u_int16_t value)
{
return doWrite(ID_RTU_AnInConf_2,  &value);
}


int addWrite_RTU_AnInConf_2(u_int16_t value)
{
return addWrite(ID_RTU_AnInConf_2, &value);
}


int getStatus_RTU_AnInConf_2()
{
return getStatus(ID_RTU_AnInConf_2);
}


int doWrite_RTU_AnIn_1(int16_t value)
{
return doWrite(ID_RTU_AnIn_1,  &value);
}


int addWrite_RTU_AnIn_1(int16_t value)
{
return addWrite(ID_RTU_AnIn_1, &value);
}


int getStatus_RTU_AnIn_1()
{
return getStatus(ID_RTU_AnIn_1);
}


int doWrite_RTU_AnIn_2(int16_t value)
{
return doWrite(ID_RTU_AnIn_2,  &value);
}


int addWrite_RTU_AnIn_2(int16_t value)
{
return addWrite(ID_RTU_AnIn_2, &value);
}


int getStatus_RTU_AnIn_2()
{
return getStatus(ID_RTU_AnIn_2);
}


int doWrite_RTU_LocDigDir_1(int value)
{
return doWrite(ID_RTU_LocDigDir_1,  &value);
}


int addWrite_RTU_LocDigDir_1(int value)
{
return addWrite(ID_RTU_LocDigDir_1, &value);
}


int getStatus_RTU_LocDigDir_1()
{
return getStatus(ID_RTU_LocDigDir_1);
}


int doWrite_RTU_LocDigDir_2(int value)
{
return doWrite(ID_RTU_LocDigDir_2,  &value);
}


int addWrite_RTU_LocDigDir_2(int value)
{
return addWrite(ID_RTU_LocDigDir_2, &value);
}


int getStatus_RTU_LocDigDir_2()
{
return getStatus(ID_RTU_LocDigDir_2);
}


int doWrite_RTU_LocDigDir_3(int value)
{
return doWrite(ID_RTU_LocDigDir_3,  &value);
}


int addWrite_RTU_LocDigDir_3(int value)
{
return addWrite(ID_RTU_LocDigDir_3, &value);
}


int getStatus_RTU_LocDigDir_3()
{
return getStatus(ID_RTU_LocDigDir_3);
}


int doWrite_RTU_LocDigDir_4(int value)
{
return doWrite(ID_RTU_LocDigDir_4,  &value);
}


int addWrite_RTU_LocDigDir_4(int value)
{
return addWrite(ID_RTU_LocDigDir_4, &value);
}


int getStatus_RTU_LocDigDir_4()
{
return getStatus(ID_RTU_LocDigDir_4);
}


int doWrite_RTU_LocDigDir_5(int value)
{
return doWrite(ID_RTU_LocDigDir_5,  &value);
}


int addWrite_RTU_LocDigDir_5(int value)
{
return addWrite(ID_RTU_LocDigDir_5, &value);
}


int getStatus_RTU_LocDigDir_5()
{
return getStatus(ID_RTU_LocDigDir_5);
}


int doWrite_RTU_LocDigDir_6(int value)
{
return doWrite(ID_RTU_LocDigDir_6,  &value);
}


int addWrite_RTU_LocDigDir_6(int value)
{
return addWrite(ID_RTU_LocDigDir_6, &value);
}


int getStatus_RTU_LocDigDir_6()
{
return getStatus(ID_RTU_LocDigDir_6);
}


int doWrite_RTU_LocDigDir_7(int value)
{
return doWrite(ID_RTU_LocDigDir_7,  &value);
}


int addWrite_RTU_LocDigDir_7(int value)
{
return addWrite(ID_RTU_LocDigDir_7, &value);
}


int getStatus_RTU_LocDigDir_7()
{
return getStatus(ID_RTU_LocDigDir_7);
}


int doWrite_RTU_LocDigDir_8(int value)
{
return doWrite(ID_RTU_LocDigDir_8,  &value);
}


int addWrite_RTU_LocDigDir_8(int value)
{
return addWrite(ID_RTU_LocDigDir_8, &value);
}


int getStatus_RTU_LocDigDir_8()
{
return getStatus(ID_RTU_LocDigDir_8);
}


int doWrite_RTU_LocDigIn_1(int value)
{
return doWrite(ID_RTU_LocDigIn_1,  &value);
}


int addWrite_RTU_LocDigIn_1(int value)
{
return addWrite(ID_RTU_LocDigIn_1, &value);
}


int getStatus_RTU_LocDigIn_1()
{
return getStatus(ID_RTU_LocDigIn_1);
}


int doWrite_RTU_LocDigIn_2(int value)
{
return doWrite(ID_RTU_LocDigIn_2,  &value);
}


int addWrite_RTU_LocDigIn_2(int value)
{
return addWrite(ID_RTU_LocDigIn_2, &value);
}


int getStatus_RTU_LocDigIn_2()
{
return getStatus(ID_RTU_LocDigIn_2);
}


int doWrite_RTU_LocDigIn_3(int value)
{
return doWrite(ID_RTU_LocDigIn_3,  &value);
}


int addWrite_RTU_LocDigIn_3(int value)
{
return addWrite(ID_RTU_LocDigIn_3, &value);
}


int getStatus_RTU_LocDigIn_3()
{
return getStatus(ID_RTU_LocDigIn_3);
}


int doWrite_RTU_LocDigIn_4(int value)
{
return doWrite(ID_RTU_LocDigIn_4,  &value);
}


int addWrite_RTU_LocDigIn_4(int value)
{
return addWrite(ID_RTU_LocDigIn_4, &value);
}


int getStatus_RTU_LocDigIn_4()
{
return getStatus(ID_RTU_LocDigIn_4);
}


int doWrite_RTU_LocDigIn_5(int value)
{
return doWrite(ID_RTU_LocDigIn_5,  &value);
}


int addWrite_RTU_LocDigIn_5(int value)
{
return addWrite(ID_RTU_LocDigIn_5, &value);
}


int getStatus_RTU_LocDigIn_5()
{
return getStatus(ID_RTU_LocDigIn_5);
}


int doWrite_RTU_LocDigIn_6(int value)
{
return doWrite(ID_RTU_LocDigIn_6,  &value);
}


int addWrite_RTU_LocDigIn_6(int value)
{
return addWrite(ID_RTU_LocDigIn_6, &value);
}


int getStatus_RTU_LocDigIn_6()
{
return getStatus(ID_RTU_LocDigIn_6);
}


int doWrite_RTU_LocDigIn_7(int value)
{
return doWrite(ID_RTU_LocDigIn_7,  &value);
}


int addWrite_RTU_LocDigIn_7(int value)
{
return addWrite(ID_RTU_LocDigIn_7, &value);
}


int getStatus_RTU_LocDigIn_7()
{
return getStatus(ID_RTU_LocDigIn_7);
}


int doWrite_RTU_LocDigIn_8(int value)
{
return doWrite(ID_RTU_LocDigIn_8,  &value);
}


int addWrite_RTU_LocDigIn_8(int value)
{
return addWrite(ID_RTU_LocDigIn_8, &value);
}


int getStatus_RTU_LocDigIn_8()
{
return getStatus(ID_RTU_LocDigIn_8);
}


int doWrite_RTU_LocDigOut_1(int value)
{
return doWrite(ID_RTU_LocDigOut_1,  &value);
}


int addWrite_RTU_LocDigOut_1(int value)
{
return addWrite(ID_RTU_LocDigOut_1, &value);
}


int getStatus_RTU_LocDigOut_1()
{
return getStatus(ID_RTU_LocDigOut_1);
}


int doWrite_RTU_LocDigOut_2(int value)
{
return doWrite(ID_RTU_LocDigOut_2,  &value);
}


int addWrite_RTU_LocDigOut_2(int value)
{
return addWrite(ID_RTU_LocDigOut_2, &value);
}


int getStatus_RTU_LocDigOut_2()
{
return getStatus(ID_RTU_LocDigOut_2);
}


int doWrite_RTU_LocDigOut_3(int value)
{
return doWrite(ID_RTU_LocDigOut_3,  &value);
}


int addWrite_RTU_LocDigOut_3(int value)
{
return addWrite(ID_RTU_LocDigOut_3, &value);
}


int getStatus_RTU_LocDigOut_3()
{
return getStatus(ID_RTU_LocDigOut_3);
}


int doWrite_RTU_LocDigOut_4(int value)
{
return doWrite(ID_RTU_LocDigOut_4,  &value);
}


int addWrite_RTU_LocDigOut_4(int value)
{
return addWrite(ID_RTU_LocDigOut_4, &value);
}


int getStatus_RTU_LocDigOut_4()
{
return getStatus(ID_RTU_LocDigOut_4);
}


int doWrite_RTU_LocDigOut_5(int value)
{
return doWrite(ID_RTU_LocDigOut_5,  &value);
}


int addWrite_RTU_LocDigOut_5(int value)
{
return addWrite(ID_RTU_LocDigOut_5, &value);
}


int getStatus_RTU_LocDigOut_5()
{
return getStatus(ID_RTU_LocDigOut_5);
}


int doWrite_RTU_LocDigOut_6(int value)
{
return doWrite(ID_RTU_LocDigOut_6,  &value);
}


int addWrite_RTU_LocDigOut_6(int value)
{
return addWrite(ID_RTU_LocDigOut_6, &value);
}


int getStatus_RTU_LocDigOut_6()
{
return getStatus(ID_RTU_LocDigOut_6);
}


int doWrite_RTU_LocDigOut_7(int value)
{
return doWrite(ID_RTU_LocDigOut_7,  &value);
}


int addWrite_RTU_LocDigOut_7(int value)
{
return addWrite(ID_RTU_LocDigOut_7, &value);
}


int getStatus_RTU_LocDigOut_7()
{
return getStatus(ID_RTU_LocDigOut_7);
}


int doWrite_RTU_LocDigOut_8(int value)
{
return doWrite(ID_RTU_LocDigOut_8,  &value);
}


int addWrite_RTU_LocDigOut_8(int value)
{
return addWrite(ID_RTU_LocDigOut_8, &value);
}


int getStatus_RTU_LocDigOut_8()
{
return getStatus(ID_RTU_LocDigOut_8);
}


int doWrite_TST_DigIn_1(int value)
{
return doWrite(ID_TST_DigIn_1,  &value);
}


int addWrite_TST_DigIn_1(int value)
{
return addWrite(ID_TST_DigIn_1, &value);
}


int getStatus_TST_DigIn_1()
{
return getStatus(ID_TST_DigIn_1);
}


int doWrite_TST_DigIn_2(int value)
{
return doWrite(ID_TST_DigIn_2,  &value);
}


int addWrite_TST_DigIn_2(int value)
{
return addWrite(ID_TST_DigIn_2, &value);
}


int getStatus_TST_DigIn_2()
{
return getStatus(ID_TST_DigIn_2);
}


int doWrite_TST_DigIn_3(int value)
{
return doWrite(ID_TST_DigIn_3,  &value);
}


int addWrite_TST_DigIn_3(int value)
{
return addWrite(ID_TST_DigIn_3, &value);
}


int getStatus_TST_DigIn_3()
{
return getStatus(ID_TST_DigIn_3);
}


int doWrite_TST_DigIn_4(int value)
{
return doWrite(ID_TST_DigIn_4,  &value);
}


int addWrite_TST_DigIn_4(int value)
{
return addWrite(ID_TST_DigIn_4, &value);
}


int getStatus_TST_DigIn_4()
{
return getStatus(ID_TST_DigIn_4);
}


int doWrite_TST_DigIn_5(int value)
{
return doWrite(ID_TST_DigIn_5,  &value);
}


int addWrite_TST_DigIn_5(int value)
{
return addWrite(ID_TST_DigIn_5, &value);
}


int getStatus_TST_DigIn_5()
{
return getStatus(ID_TST_DigIn_5);
}


int doWrite_TST_DigIn_6(int value)
{
return doWrite(ID_TST_DigIn_6,  &value);
}


int addWrite_TST_DigIn_6(int value)
{
return addWrite(ID_TST_DigIn_6, &value);
}


int getStatus_TST_DigIn_6()
{
return getStatus(ID_TST_DigIn_6);
}


int doWrite_TST_DigIn_7(int value)
{
return doWrite(ID_TST_DigIn_7,  &value);
}


int addWrite_TST_DigIn_7(int value)
{
return addWrite(ID_TST_DigIn_7, &value);
}


int getStatus_TST_DigIn_7()
{
return getStatus(ID_TST_DigIn_7);
}


int doWrite_TST_DigIn_8(int value)
{
return doWrite(ID_TST_DigIn_8,  &value);
}


int addWrite_TST_DigIn_8(int value)
{
return addWrite(ID_TST_DigIn_8, &value);
}


int getStatus_TST_DigIn_8()
{
return getStatus(ID_TST_DigIn_8);
}


int doWrite_TST_DigIn_9(int value)
{
return doWrite(ID_TST_DigIn_9,  &value);
}


int addWrite_TST_DigIn_9(int value)
{
return addWrite(ID_TST_DigIn_9, &value);
}


int getStatus_TST_DigIn_9()
{
return getStatus(ID_TST_DigIn_9);
}


int doWrite_TST_DigIn_10(int value)
{
return doWrite(ID_TST_DigIn_10,  &value);
}


int addWrite_TST_DigIn_10(int value)
{
return addWrite(ID_TST_DigIn_10, &value);
}


int getStatus_TST_DigIn_10()
{
return getStatus(ID_TST_DigIn_10);
}


int doWrite_TST_DigIn_11(int value)
{
return doWrite(ID_TST_DigIn_11,  &value);
}


int addWrite_TST_DigIn_11(int value)
{
return addWrite(ID_TST_DigIn_11, &value);
}


int getStatus_TST_DigIn_11()
{
return getStatus(ID_TST_DigIn_11);
}


int doWrite_TST_DigIn_12(int value)
{
return doWrite(ID_TST_DigIn_12,  &value);
}


int addWrite_TST_DigIn_12(int value)
{
return addWrite(ID_TST_DigIn_12, &value);
}


int getStatus_TST_DigIn_12()
{
return getStatus(ID_TST_DigIn_12);
}


int doWrite_TST_DigIn_13(int value)
{
return doWrite(ID_TST_DigIn_13,  &value);
}


int addWrite_TST_DigIn_13(int value)
{
return addWrite(ID_TST_DigIn_13, &value);
}


int getStatus_TST_DigIn_13()
{
return getStatus(ID_TST_DigIn_13);
}


int doWrite_TST_DigIn_14(int value)
{
return doWrite(ID_TST_DigIn_14,  &value);
}


int addWrite_TST_DigIn_14(int value)
{
return addWrite(ID_TST_DigIn_14, &value);
}


int getStatus_TST_DigIn_14()
{
return getStatus(ID_TST_DigIn_14);
}


int doWrite_TST_DigIn_15(int value)
{
return doWrite(ID_TST_DigIn_15,  &value);
}


int addWrite_TST_DigIn_15(int value)
{
return addWrite(ID_TST_DigIn_15, &value);
}


int getStatus_TST_DigIn_15()
{
return getStatus(ID_TST_DigIn_15);
}


int doWrite_TST_DigIn_16(int value)
{
return doWrite(ID_TST_DigIn_16,  &value);
}


int addWrite_TST_DigIn_16(int value)
{
return addWrite(ID_TST_DigIn_16, &value);
}


int getStatus_TST_DigIn_16()
{
return getStatus(ID_TST_DigIn_16);
}


int doWrite_VAL_DigIn_1(int value)
{
return doWrite(ID_VAL_DigIn_1,  &value);
}


int addWrite_VAL_DigIn_1(int value)
{
return addWrite(ID_VAL_DigIn_1, &value);
}


int getStatus_VAL_DigIn_1()
{
return getStatus(ID_VAL_DigIn_1);
}


int doWrite_VAL_DigIn_2(int value)
{
return doWrite(ID_VAL_DigIn_2,  &value);
}


int addWrite_VAL_DigIn_2(int value)
{
return addWrite(ID_VAL_DigIn_2, &value);
}


int getStatus_VAL_DigIn_2()
{
return getStatus(ID_VAL_DigIn_2);
}


int doWrite_VAL_DigIn_3(int value)
{
return doWrite(ID_VAL_DigIn_3,  &value);
}


int addWrite_VAL_DigIn_3(int value)
{
return addWrite(ID_VAL_DigIn_3, &value);
}


int getStatus_VAL_DigIn_3()
{
return getStatus(ID_VAL_DigIn_3);
}


int doWrite_VAL_DigIn_4(int value)
{
return doWrite(ID_VAL_DigIn_4,  &value);
}


int addWrite_VAL_DigIn_4(int value)
{
return addWrite(ID_VAL_DigIn_4, &value);
}


int getStatus_VAL_DigIn_4()
{
return getStatus(ID_VAL_DigIn_4);
}


int doWrite_VAL_DigIn_5(int value)
{
return doWrite(ID_VAL_DigIn_5,  &value);
}


int addWrite_VAL_DigIn_5(int value)
{
return addWrite(ID_VAL_DigIn_5, &value);
}


int getStatus_VAL_DigIn_5()
{
return getStatus(ID_VAL_DigIn_5);
}


int doWrite_VAL_DigIn_6(int value)
{
return doWrite(ID_VAL_DigIn_6,  &value);
}


int addWrite_VAL_DigIn_6(int value)
{
return addWrite(ID_VAL_DigIn_6, &value);
}


int getStatus_VAL_DigIn_6()
{
return getStatus(ID_VAL_DigIn_6);
}


int doWrite_VAL_DigIn_7(int value)
{
return doWrite(ID_VAL_DigIn_7,  &value);
}


int addWrite_VAL_DigIn_7(int value)
{
return addWrite(ID_VAL_DigIn_7, &value);
}


int getStatus_VAL_DigIn_7()
{
return getStatus(ID_VAL_DigIn_7);
}


int doWrite_VAL_DigIn_8(int value)
{
return doWrite(ID_VAL_DigIn_8,  &value);
}


int addWrite_VAL_DigIn_8(int value)
{
return addWrite(ID_VAL_DigIn_8, &value);
}


int getStatus_VAL_DigIn_8()
{
return getStatus(ID_VAL_DigIn_8);
}


int doWrite_VAL_DigIn_9(int value)
{
return doWrite(ID_VAL_DigIn_9,  &value);
}


int addWrite_VAL_DigIn_9(int value)
{
return addWrite(ID_VAL_DigIn_9, &value);
}


int getStatus_VAL_DigIn_9()
{
return getStatus(ID_VAL_DigIn_9);
}


int doWrite_VAL_DigIn_10(int value)
{
return doWrite(ID_VAL_DigIn_10,  &value);
}


int addWrite_VAL_DigIn_10(int value)
{
return addWrite(ID_VAL_DigIn_10, &value);
}


int getStatus_VAL_DigIn_10()
{
return getStatus(ID_VAL_DigIn_10);
}


int doWrite_VAL_DigIn_11(int value)
{
return doWrite(ID_VAL_DigIn_11,  &value);
}


int addWrite_VAL_DigIn_11(int value)
{
return addWrite(ID_VAL_DigIn_11, &value);
}


int getStatus_VAL_DigIn_11()
{
return getStatus(ID_VAL_DigIn_11);
}


int doWrite_VAL_DigIn_12(int value)
{
return doWrite(ID_VAL_DigIn_12,  &value);
}


int addWrite_VAL_DigIn_12(int value)
{
return addWrite(ID_VAL_DigIn_12, &value);
}


int getStatus_VAL_DigIn_12()
{
return getStatus(ID_VAL_DigIn_12);
}


int doWrite_VAL_DigIn_13(int value)
{
return doWrite(ID_VAL_DigIn_13,  &value);
}


int addWrite_VAL_DigIn_13(int value)
{
return addWrite(ID_VAL_DigIn_13, &value);
}


int getStatus_VAL_DigIn_13()
{
return getStatus(ID_VAL_DigIn_13);
}


int doWrite_VAL_DigIn_14(int value)
{
return doWrite(ID_VAL_DigIn_14,  &value);
}


int addWrite_VAL_DigIn_14(int value)
{
return addWrite(ID_VAL_DigIn_14, &value);
}


int getStatus_VAL_DigIn_14()
{
return getStatus(ID_VAL_DigIn_14);
}


int doWrite_VAL_DigIn_15(int value)
{
return doWrite(ID_VAL_DigIn_15,  &value);
}


int addWrite_VAL_DigIn_15(int value)
{
return addWrite(ID_VAL_DigIn_15, &value);
}


int getStatus_VAL_DigIn_15()
{
return getStatus(ID_VAL_DigIn_15);
}


int doWrite_VAL_DigIn_16(int value)
{
return doWrite(ID_VAL_DigIn_16,  &value);
}


int addWrite_VAL_DigIn_16(int value)
{
return addWrite(ID_VAL_DigIn_16, &value);
}


int getStatus_VAL_DigIn_16()
{
return getStatus(ID_VAL_DigIn_16);
}


int doWrite_RES_DigIn_1(int value)
{
return doWrite(ID_RES_DigIn_1,  &value);
}


int addWrite_RES_DigIn_1(int value)
{
return addWrite(ID_RES_DigIn_1, &value);
}


int getStatus_RES_DigIn_1()
{
return getStatus(ID_RES_DigIn_1);
}


int doWrite_RES_DigIn_2(int value)
{
return doWrite(ID_RES_DigIn_2,  &value);
}


int addWrite_RES_DigIn_2(int value)
{
return addWrite(ID_RES_DigIn_2, &value);
}


int getStatus_RES_DigIn_2()
{
return getStatus(ID_RES_DigIn_2);
}


int doWrite_RES_DigIn_3(int value)
{
return doWrite(ID_RES_DigIn_3,  &value);
}


int addWrite_RES_DigIn_3(int value)
{
return addWrite(ID_RES_DigIn_3, &value);
}


int getStatus_RES_DigIn_3()
{
return getStatus(ID_RES_DigIn_3);
}


int doWrite_RES_DigIn_4(int value)
{
return doWrite(ID_RES_DigIn_4,  &value);
}


int addWrite_RES_DigIn_4(int value)
{
return addWrite(ID_RES_DigIn_4, &value);
}


int getStatus_RES_DigIn_4()
{
return getStatus(ID_RES_DigIn_4);
}


int doWrite_RES_DigIn_5(int value)
{
return doWrite(ID_RES_DigIn_5,  &value);
}


int addWrite_RES_DigIn_5(int value)
{
return addWrite(ID_RES_DigIn_5, &value);
}


int getStatus_RES_DigIn_5()
{
return getStatus(ID_RES_DigIn_5);
}


int doWrite_RES_DigIn_6(int value)
{
return doWrite(ID_RES_DigIn_6,  &value);
}


int addWrite_RES_DigIn_6(int value)
{
return addWrite(ID_RES_DigIn_6, &value);
}


int getStatus_RES_DigIn_6()
{
return getStatus(ID_RES_DigIn_6);
}


int doWrite_RES_DigIn_7(int value)
{
return doWrite(ID_RES_DigIn_7,  &value);
}


int addWrite_RES_DigIn_7(int value)
{
return addWrite(ID_RES_DigIn_7, &value);
}


int getStatus_RES_DigIn_7()
{
return getStatus(ID_RES_DigIn_7);
}


int doWrite_RES_DigIn_8(int value)
{
return doWrite(ID_RES_DigIn_8,  &value);
}


int addWrite_RES_DigIn_8(int value)
{
return addWrite(ID_RES_DigIn_8, &value);
}


int getStatus_RES_DigIn_8()
{
return getStatus(ID_RES_DigIn_8);
}


int doWrite_RES_DigIn_9(int value)
{
return doWrite(ID_RES_DigIn_9,  &value);
}


int addWrite_RES_DigIn_9(int value)
{
return addWrite(ID_RES_DigIn_9, &value);
}


int getStatus_RES_DigIn_9()
{
return getStatus(ID_RES_DigIn_9);
}


int doWrite_RES_DigIn_10(int value)
{
return doWrite(ID_RES_DigIn_10,  &value);
}


int addWrite_RES_DigIn_10(int value)
{
return addWrite(ID_RES_DigIn_10, &value);
}


int getStatus_RES_DigIn_10()
{
return getStatus(ID_RES_DigIn_10);
}


int doWrite_RES_DigIn_11(int value)
{
return doWrite(ID_RES_DigIn_11,  &value);
}


int addWrite_RES_DigIn_11(int value)
{
return addWrite(ID_RES_DigIn_11, &value);
}


int getStatus_RES_DigIn_11()
{
return getStatus(ID_RES_DigIn_11);
}


int doWrite_RES_DigIn_12(int value)
{
return doWrite(ID_RES_DigIn_12,  &value);
}


int addWrite_RES_DigIn_12(int value)
{
return addWrite(ID_RES_DigIn_12, &value);
}


int getStatus_RES_DigIn_12()
{
return getStatus(ID_RES_DigIn_12);
}


int doWrite_RES_DigIn_13(int value)
{
return doWrite(ID_RES_DigIn_13,  &value);
}


int addWrite_RES_DigIn_13(int value)
{
return addWrite(ID_RES_DigIn_13, &value);
}


int getStatus_RES_DigIn_13()
{
return getStatus(ID_RES_DigIn_13);
}


int doWrite_RES_DigIn_14(int value)
{
return doWrite(ID_RES_DigIn_14,  &value);
}


int addWrite_RES_DigIn_14(int value)
{
return addWrite(ID_RES_DigIn_14, &value);
}


int getStatus_RES_DigIn_14()
{
return getStatus(ID_RES_DigIn_14);
}


int doWrite_RES_DigIn_15(int value)
{
return doWrite(ID_RES_DigIn_15,  &value);
}


int addWrite_RES_DigIn_15(int value)
{
return addWrite(ID_RES_DigIn_15, &value);
}


int getStatus_RES_DigIn_15()
{
return getStatus(ID_RES_DigIn_15);
}


int doWrite_RES_DigIn_16(int value)
{
return doWrite(ID_RES_DigIn_16,  &value);
}


int addWrite_RES_DigIn_16(int value)
{
return addWrite(ID_RES_DigIn_16, &value);
}


int getStatus_RES_DigIn_16()
{
return getStatus(ID_RES_DigIn_16);
}


int doWrite_OK_DigIn_1(int value)
{
return doWrite(ID_OK_DigIn_1,  &value);
}


int addWrite_OK_DigIn_1(int value)
{
return addWrite(ID_OK_DigIn_1, &value);
}


int getStatus_OK_DigIn_1()
{
return getStatus(ID_OK_DigIn_1);
}


int doWrite_OK_DigIn_2(int value)
{
return doWrite(ID_OK_DigIn_2,  &value);
}


int addWrite_OK_DigIn_2(int value)
{
return addWrite(ID_OK_DigIn_2, &value);
}


int getStatus_OK_DigIn_2()
{
return getStatus(ID_OK_DigIn_2);
}


int doWrite_OK_DigIn_3(int value)
{
return doWrite(ID_OK_DigIn_3,  &value);
}


int addWrite_OK_DigIn_3(int value)
{
return addWrite(ID_OK_DigIn_3, &value);
}


int getStatus_OK_DigIn_3()
{
return getStatus(ID_OK_DigIn_3);
}


int doWrite_OK_DigIn_4(int value)
{
return doWrite(ID_OK_DigIn_4,  &value);
}


int addWrite_OK_DigIn_4(int value)
{
return addWrite(ID_OK_DigIn_4, &value);
}


int getStatus_OK_DigIn_4()
{
return getStatus(ID_OK_DigIn_4);
}


int doWrite_OK_DigIn_5(int value)
{
return doWrite(ID_OK_DigIn_5,  &value);
}


int addWrite_OK_DigIn_5(int value)
{
return addWrite(ID_OK_DigIn_5, &value);
}


int getStatus_OK_DigIn_5()
{
return getStatus(ID_OK_DigIn_5);
}


int doWrite_OK_DigIn_6(int value)
{
return doWrite(ID_OK_DigIn_6,  &value);
}


int addWrite_OK_DigIn_6(int value)
{
return addWrite(ID_OK_DigIn_6, &value);
}


int getStatus_OK_DigIn_6()
{
return getStatus(ID_OK_DigIn_6);
}


int doWrite_OK_DigIn_7(int value)
{
return doWrite(ID_OK_DigIn_7,  &value);
}


int addWrite_OK_DigIn_7(int value)
{
return addWrite(ID_OK_DigIn_7, &value);
}


int getStatus_OK_DigIn_7()
{
return getStatus(ID_OK_DigIn_7);
}


int doWrite_OK_DigIn_8(int value)
{
return doWrite(ID_OK_DigIn_8,  &value);
}


int addWrite_OK_DigIn_8(int value)
{
return addWrite(ID_OK_DigIn_8, &value);
}


int getStatus_OK_DigIn_8()
{
return getStatus(ID_OK_DigIn_8);
}


int doWrite_OK_DigIn_9(int value)
{
return doWrite(ID_OK_DigIn_9,  &value);
}


int addWrite_OK_DigIn_9(int value)
{
return addWrite(ID_OK_DigIn_9, &value);
}


int getStatus_OK_DigIn_9()
{
return getStatus(ID_OK_DigIn_9);
}


int doWrite_OK_DigIn_10(int value)
{
return doWrite(ID_OK_DigIn_10,  &value);
}


int addWrite_OK_DigIn_10(int value)
{
return addWrite(ID_OK_DigIn_10, &value);
}


int getStatus_OK_DigIn_10()
{
return getStatus(ID_OK_DigIn_10);
}


int doWrite_OK_DigIn_11(int value)
{
return doWrite(ID_OK_DigIn_11,  &value);
}


int addWrite_OK_DigIn_11(int value)
{
return addWrite(ID_OK_DigIn_11, &value);
}


int getStatus_OK_DigIn_11()
{
return getStatus(ID_OK_DigIn_11);
}


int doWrite_OK_DigIn_12(int value)
{
return doWrite(ID_OK_DigIn_12,  &value);
}


int addWrite_OK_DigIn_12(int value)
{
return addWrite(ID_OK_DigIn_12, &value);
}


int getStatus_OK_DigIn_12()
{
return getStatus(ID_OK_DigIn_12);
}


int doWrite_OK_DigIn_13(int value)
{
return doWrite(ID_OK_DigIn_13,  &value);
}


int addWrite_OK_DigIn_13(int value)
{
return addWrite(ID_OK_DigIn_13, &value);
}


int getStatus_OK_DigIn_13()
{
return getStatus(ID_OK_DigIn_13);
}


int doWrite_OK_DigIn_14(int value)
{
return doWrite(ID_OK_DigIn_14,  &value);
}


int addWrite_OK_DigIn_14(int value)
{
return addWrite(ID_OK_DigIn_14, &value);
}


int getStatus_OK_DigIn_14()
{
return getStatus(ID_OK_DigIn_14);
}


int doWrite_OK_DigIn_15(int value)
{
return doWrite(ID_OK_DigIn_15,  &value);
}


int addWrite_OK_DigIn_15(int value)
{
return addWrite(ID_OK_DigIn_15, &value);
}


int getStatus_OK_DigIn_15()
{
return getStatus(ID_OK_DigIn_15);
}


int doWrite_OK_DigIn_16(int value)
{
return doWrite(ID_OK_DigIn_16,  &value);
}


int addWrite_OK_DigIn_16(int value)
{
return addWrite(ID_OK_DigIn_16, &value);
}


int getStatus_OK_DigIn_16()
{
return getStatus(ID_OK_DigIn_16);
}


int doWrite_TST_DigOut_1(int value)
{
return doWrite(ID_TST_DigOut_1,  &value);
}


int addWrite_TST_DigOut_1(int value)
{
return addWrite(ID_TST_DigOut_1, &value);
}


int getStatus_TST_DigOut_1()
{
return getStatus(ID_TST_DigOut_1);
}


int doWrite_TST_DigOut_2(int value)
{
return doWrite(ID_TST_DigOut_2,  &value);
}


int addWrite_TST_DigOut_2(int value)
{
return addWrite(ID_TST_DigOut_2, &value);
}


int getStatus_TST_DigOut_2()
{
return getStatus(ID_TST_DigOut_2);
}


int doWrite_TST_DigOut_3(int value)
{
return doWrite(ID_TST_DigOut_3,  &value);
}


int addWrite_TST_DigOut_3(int value)
{
return addWrite(ID_TST_DigOut_3, &value);
}


int getStatus_TST_DigOut_3()
{
return getStatus(ID_TST_DigOut_3);
}


int doWrite_TST_DigOut_4(int value)
{
return doWrite(ID_TST_DigOut_4,  &value);
}


int addWrite_TST_DigOut_4(int value)
{
return addWrite(ID_TST_DigOut_4, &value);
}


int getStatus_TST_DigOut_4()
{
return getStatus(ID_TST_DigOut_4);
}


int doWrite_TST_DigOut_5(int value)
{
return doWrite(ID_TST_DigOut_5,  &value);
}


int addWrite_TST_DigOut_5(int value)
{
return addWrite(ID_TST_DigOut_5, &value);
}


int getStatus_TST_DigOut_5()
{
return getStatus(ID_TST_DigOut_5);
}


int doWrite_TST_DigOut_6(int value)
{
return doWrite(ID_TST_DigOut_6,  &value);
}


int addWrite_TST_DigOut_6(int value)
{
return addWrite(ID_TST_DigOut_6, &value);
}


int getStatus_TST_DigOut_6()
{
return getStatus(ID_TST_DigOut_6);
}


int doWrite_TST_DigOut_7(int value)
{
return doWrite(ID_TST_DigOut_7,  &value);
}


int addWrite_TST_DigOut_7(int value)
{
return addWrite(ID_TST_DigOut_7, &value);
}


int getStatus_TST_DigOut_7()
{
return getStatus(ID_TST_DigOut_7);
}


int doWrite_TST_DigOut_8(int value)
{
return doWrite(ID_TST_DigOut_8,  &value);
}


int addWrite_TST_DigOut_8(int value)
{
return addWrite(ID_TST_DigOut_8, &value);
}


int getStatus_TST_DigOut_8()
{
return getStatus(ID_TST_DigOut_8);
}


int doWrite_TST_DigOut_9(int value)
{
return doWrite(ID_TST_DigOut_9,  &value);
}


int addWrite_TST_DigOut_9(int value)
{
return addWrite(ID_TST_DigOut_9, &value);
}


int getStatus_TST_DigOut_9()
{
return getStatus(ID_TST_DigOut_9);
}


int doWrite_TST_DigOut_10(int value)
{
return doWrite(ID_TST_DigOut_10,  &value);
}


int addWrite_TST_DigOut_10(int value)
{
return addWrite(ID_TST_DigOut_10, &value);
}


int getStatus_TST_DigOut_10()
{
return getStatus(ID_TST_DigOut_10);
}


int doWrite_TST_DigOut_11(int value)
{
return doWrite(ID_TST_DigOut_11,  &value);
}


int addWrite_TST_DigOut_11(int value)
{
return addWrite(ID_TST_DigOut_11, &value);
}


int getStatus_TST_DigOut_11()
{
return getStatus(ID_TST_DigOut_11);
}


int doWrite_TST_DigOut_12(int value)
{
return doWrite(ID_TST_DigOut_12,  &value);
}


int addWrite_TST_DigOut_12(int value)
{
return addWrite(ID_TST_DigOut_12, &value);
}


int getStatus_TST_DigOut_12()
{
return getStatus(ID_TST_DigOut_12);
}


int doWrite_TST_DigOut_13(int value)
{
return doWrite(ID_TST_DigOut_13,  &value);
}


int addWrite_TST_DigOut_13(int value)
{
return addWrite(ID_TST_DigOut_13, &value);
}


int getStatus_TST_DigOut_13()
{
return getStatus(ID_TST_DigOut_13);
}


int doWrite_TST_DigOut_14(int value)
{
return doWrite(ID_TST_DigOut_14,  &value);
}


int addWrite_TST_DigOut_14(int value)
{
return addWrite(ID_TST_DigOut_14, &value);
}


int getStatus_TST_DigOut_14()
{
return getStatus(ID_TST_DigOut_14);
}


int doWrite_TST_DigOut_15(int value)
{
return doWrite(ID_TST_DigOut_15,  &value);
}


int addWrite_TST_DigOut_15(int value)
{
return addWrite(ID_TST_DigOut_15, &value);
}


int getStatus_TST_DigOut_15()
{
return getStatus(ID_TST_DigOut_15);
}


int doWrite_TST_DigOut_16(int value)
{
return doWrite(ID_TST_DigOut_16,  &value);
}


int addWrite_TST_DigOut_16(int value)
{
return addWrite(ID_TST_DigOut_16, &value);
}


int getStatus_TST_DigOut_16()
{
return getStatus(ID_TST_DigOut_16);
}


int doWrite_VAL_DigOut_1(int value)
{
return doWrite(ID_VAL_DigOut_1,  &value);
}


int addWrite_VAL_DigOut_1(int value)
{
return addWrite(ID_VAL_DigOut_1, &value);
}


int getStatus_VAL_DigOut_1()
{
return getStatus(ID_VAL_DigOut_1);
}


int doWrite_VAL_DigOut_2(int value)
{
return doWrite(ID_VAL_DigOut_2,  &value);
}


int addWrite_VAL_DigOut_2(int value)
{
return addWrite(ID_VAL_DigOut_2, &value);
}


int getStatus_VAL_DigOut_2()
{
return getStatus(ID_VAL_DigOut_2);
}


int doWrite_VAL_DigOut_3(int value)
{
return doWrite(ID_VAL_DigOut_3,  &value);
}


int addWrite_VAL_DigOut_3(int value)
{
return addWrite(ID_VAL_DigOut_3, &value);
}


int getStatus_VAL_DigOut_3()
{
return getStatus(ID_VAL_DigOut_3);
}


int doWrite_VAL_DigOut_4(int value)
{
return doWrite(ID_VAL_DigOut_4,  &value);
}


int addWrite_VAL_DigOut_4(int value)
{
return addWrite(ID_VAL_DigOut_4, &value);
}


int getStatus_VAL_DigOut_4()
{
return getStatus(ID_VAL_DigOut_4);
}


int doWrite_VAL_DigOut_5(int value)
{
return doWrite(ID_VAL_DigOut_5,  &value);
}


int addWrite_VAL_DigOut_5(int value)
{
return addWrite(ID_VAL_DigOut_5, &value);
}


int getStatus_VAL_DigOut_5()
{
return getStatus(ID_VAL_DigOut_5);
}


int doWrite_VAL_DigOut_6(int value)
{
return doWrite(ID_VAL_DigOut_6,  &value);
}


int addWrite_VAL_DigOut_6(int value)
{
return addWrite(ID_VAL_DigOut_6, &value);
}


int getStatus_VAL_DigOut_6()
{
return getStatus(ID_VAL_DigOut_6);
}


int doWrite_VAL_DigOut_7(int value)
{
return doWrite(ID_VAL_DigOut_7,  &value);
}


int addWrite_VAL_DigOut_7(int value)
{
return addWrite(ID_VAL_DigOut_7, &value);
}


int getStatus_VAL_DigOut_7()
{
return getStatus(ID_VAL_DigOut_7);
}


int doWrite_VAL_DigOut_8(int value)
{
return doWrite(ID_VAL_DigOut_8,  &value);
}


int addWrite_VAL_DigOut_8(int value)
{
return addWrite(ID_VAL_DigOut_8, &value);
}


int getStatus_VAL_DigOut_8()
{
return getStatus(ID_VAL_DigOut_8);
}


int doWrite_VAL_DigOut_9(int value)
{
return doWrite(ID_VAL_DigOut_9,  &value);
}


int addWrite_VAL_DigOut_9(int value)
{
return addWrite(ID_VAL_DigOut_9, &value);
}


int getStatus_VAL_DigOut_9()
{
return getStatus(ID_VAL_DigOut_9);
}


int doWrite_VAL_DigOut_10(int value)
{
return doWrite(ID_VAL_DigOut_10,  &value);
}


int addWrite_VAL_DigOut_10(int value)
{
return addWrite(ID_VAL_DigOut_10, &value);
}


int getStatus_VAL_DigOut_10()
{
return getStatus(ID_VAL_DigOut_10);
}


int doWrite_VAL_DigOut_11(int value)
{
return doWrite(ID_VAL_DigOut_11,  &value);
}


int addWrite_VAL_DigOut_11(int value)
{
return addWrite(ID_VAL_DigOut_11, &value);
}


int getStatus_VAL_DigOut_11()
{
return getStatus(ID_VAL_DigOut_11);
}


int doWrite_VAL_DigOut_12(int value)
{
return doWrite(ID_VAL_DigOut_12,  &value);
}


int addWrite_VAL_DigOut_12(int value)
{
return addWrite(ID_VAL_DigOut_12, &value);
}


int getStatus_VAL_DigOut_12()
{
return getStatus(ID_VAL_DigOut_12);
}


int doWrite_VAL_DigOut_13(int value)
{
return doWrite(ID_VAL_DigOut_13,  &value);
}


int addWrite_VAL_DigOut_13(int value)
{
return addWrite(ID_VAL_DigOut_13, &value);
}


int getStatus_VAL_DigOut_13()
{
return getStatus(ID_VAL_DigOut_13);
}


int doWrite_VAL_DigOut_14(int value)
{
return doWrite(ID_VAL_DigOut_14,  &value);
}


int addWrite_VAL_DigOut_14(int value)
{
return addWrite(ID_VAL_DigOut_14, &value);
}


int getStatus_VAL_DigOut_14()
{
return getStatus(ID_VAL_DigOut_14);
}


int doWrite_VAL_DigOut_15(int value)
{
return doWrite(ID_VAL_DigOut_15,  &value);
}


int addWrite_VAL_DigOut_15(int value)
{
return addWrite(ID_VAL_DigOut_15, &value);
}


int getStatus_VAL_DigOut_15()
{
return getStatus(ID_VAL_DigOut_15);
}


int doWrite_VAL_DigOut_16(int value)
{
return doWrite(ID_VAL_DigOut_16,  &value);
}


int addWrite_VAL_DigOut_16(int value)
{
return addWrite(ID_VAL_DigOut_16, &value);
}


int getStatus_VAL_DigOut_16()
{
return getStatus(ID_VAL_DigOut_16);
}


int doWrite_RES_DigOut_1(int value)
{
return doWrite(ID_RES_DigOut_1,  &value);
}


int addWrite_RES_DigOut_1(int value)
{
return addWrite(ID_RES_DigOut_1, &value);
}


int getStatus_RES_DigOut_1()
{
return getStatus(ID_RES_DigOut_1);
}


int doWrite_RES_DigOut_2(int value)
{
return doWrite(ID_RES_DigOut_2,  &value);
}


int addWrite_RES_DigOut_2(int value)
{
return addWrite(ID_RES_DigOut_2, &value);
}


int getStatus_RES_DigOut_2()
{
return getStatus(ID_RES_DigOut_2);
}


int doWrite_RES_DigOut_3(int value)
{
return doWrite(ID_RES_DigOut_3,  &value);
}


int addWrite_RES_DigOut_3(int value)
{
return addWrite(ID_RES_DigOut_3, &value);
}


int getStatus_RES_DigOut_3()
{
return getStatus(ID_RES_DigOut_3);
}


int doWrite_RES_DigOut_4(int value)
{
return doWrite(ID_RES_DigOut_4,  &value);
}


int addWrite_RES_DigOut_4(int value)
{
return addWrite(ID_RES_DigOut_4, &value);
}


int getStatus_RES_DigOut_4()
{
return getStatus(ID_RES_DigOut_4);
}


int doWrite_RES_DigOut_5(int value)
{
return doWrite(ID_RES_DigOut_5,  &value);
}


int addWrite_RES_DigOut_5(int value)
{
return addWrite(ID_RES_DigOut_5, &value);
}


int getStatus_RES_DigOut_5()
{
return getStatus(ID_RES_DigOut_5);
}


int doWrite_RES_DigOut_6(int value)
{
return doWrite(ID_RES_DigOut_6,  &value);
}


int addWrite_RES_DigOut_6(int value)
{
return addWrite(ID_RES_DigOut_6, &value);
}


int getStatus_RES_DigOut_6()
{
return getStatus(ID_RES_DigOut_6);
}


int doWrite_RES_DigOut_7(int value)
{
return doWrite(ID_RES_DigOut_7,  &value);
}


int addWrite_RES_DigOut_7(int value)
{
return addWrite(ID_RES_DigOut_7, &value);
}


int getStatus_RES_DigOut_7()
{
return getStatus(ID_RES_DigOut_7);
}


int doWrite_RES_DigOut_8(int value)
{
return doWrite(ID_RES_DigOut_8,  &value);
}


int addWrite_RES_DigOut_8(int value)
{
return addWrite(ID_RES_DigOut_8, &value);
}


int getStatus_RES_DigOut_8()
{
return getStatus(ID_RES_DigOut_8);
}


int doWrite_RES_DigOut_9(int value)
{
return doWrite(ID_RES_DigOut_9,  &value);
}


int addWrite_RES_DigOut_9(int value)
{
return addWrite(ID_RES_DigOut_9, &value);
}


int getStatus_RES_DigOut_9()
{
return getStatus(ID_RES_DigOut_9);
}


int doWrite_RES_DigOut_10(int value)
{
return doWrite(ID_RES_DigOut_10,  &value);
}


int addWrite_RES_DigOut_10(int value)
{
return addWrite(ID_RES_DigOut_10, &value);
}


int getStatus_RES_DigOut_10()
{
return getStatus(ID_RES_DigOut_10);
}


int doWrite_RES_DigOut_11(int value)
{
return doWrite(ID_RES_DigOut_11,  &value);
}


int addWrite_RES_DigOut_11(int value)
{
return addWrite(ID_RES_DigOut_11, &value);
}


int getStatus_RES_DigOut_11()
{
return getStatus(ID_RES_DigOut_11);
}


int doWrite_RES_DigOut_12(int value)
{
return doWrite(ID_RES_DigOut_12,  &value);
}


int addWrite_RES_DigOut_12(int value)
{
return addWrite(ID_RES_DigOut_12, &value);
}


int getStatus_RES_DigOut_12()
{
return getStatus(ID_RES_DigOut_12);
}


int doWrite_RES_DigOut_13(int value)
{
return doWrite(ID_RES_DigOut_13,  &value);
}


int addWrite_RES_DigOut_13(int value)
{
return addWrite(ID_RES_DigOut_13, &value);
}


int getStatus_RES_DigOut_13()
{
return getStatus(ID_RES_DigOut_13);
}


int doWrite_RES_DigOut_14(int value)
{
return doWrite(ID_RES_DigOut_14,  &value);
}


int addWrite_RES_DigOut_14(int value)
{
return addWrite(ID_RES_DigOut_14, &value);
}


int getStatus_RES_DigOut_14()
{
return getStatus(ID_RES_DigOut_14);
}


int doWrite_RES_DigOut_15(int value)
{
return doWrite(ID_RES_DigOut_15,  &value);
}


int addWrite_RES_DigOut_15(int value)
{
return addWrite(ID_RES_DigOut_15, &value);
}


int getStatus_RES_DigOut_15()
{
return getStatus(ID_RES_DigOut_15);
}


int doWrite_RES_DigOut_16(int value)
{
return doWrite(ID_RES_DigOut_16,  &value);
}


int addWrite_RES_DigOut_16(int value)
{
return addWrite(ID_RES_DigOut_16, &value);
}


int getStatus_RES_DigOut_16()
{
return getStatus(ID_RES_DigOut_16);
}


int doWrite_OK_DigOut_1(int value)
{
return doWrite(ID_OK_DigOut_1,  &value);
}


int addWrite_OK_DigOut_1(int value)
{
return addWrite(ID_OK_DigOut_1, &value);
}


int getStatus_OK_DigOut_1()
{
return getStatus(ID_OK_DigOut_1);
}


int doWrite_OK_DigOut_2(int value)
{
return doWrite(ID_OK_DigOut_2,  &value);
}


int addWrite_OK_DigOut_2(int value)
{
return addWrite(ID_OK_DigOut_2, &value);
}


int getStatus_OK_DigOut_2()
{
return getStatus(ID_OK_DigOut_2);
}


int doWrite_OK_DigOut_3(int value)
{
return doWrite(ID_OK_DigOut_3,  &value);
}


int addWrite_OK_DigOut_3(int value)
{
return addWrite(ID_OK_DigOut_3, &value);
}


int getStatus_OK_DigOut_3()
{
return getStatus(ID_OK_DigOut_3);
}


int doWrite_OK_DigOut_4(int value)
{
return doWrite(ID_OK_DigOut_4,  &value);
}


int addWrite_OK_DigOut_4(int value)
{
return addWrite(ID_OK_DigOut_4, &value);
}


int getStatus_OK_DigOut_4()
{
return getStatus(ID_OK_DigOut_4);
}


int doWrite_OK_DigOut_5(int value)
{
return doWrite(ID_OK_DigOut_5,  &value);
}


int addWrite_OK_DigOut_5(int value)
{
return addWrite(ID_OK_DigOut_5, &value);
}


int getStatus_OK_DigOut_5()
{
return getStatus(ID_OK_DigOut_5);
}


int doWrite_OK_DigOut_6(int value)
{
return doWrite(ID_OK_DigOut_6,  &value);
}


int addWrite_OK_DigOut_6(int value)
{
return addWrite(ID_OK_DigOut_6, &value);
}


int getStatus_OK_DigOut_6()
{
return getStatus(ID_OK_DigOut_6);
}


int doWrite_OK_DigOut_7(int value)
{
return doWrite(ID_OK_DigOut_7,  &value);
}


int addWrite_OK_DigOut_7(int value)
{
return addWrite(ID_OK_DigOut_7, &value);
}


int getStatus_OK_DigOut_7()
{
return getStatus(ID_OK_DigOut_7);
}


int doWrite_OK_DigOut_8(int value)
{
return doWrite(ID_OK_DigOut_8,  &value);
}


int addWrite_OK_DigOut_8(int value)
{
return addWrite(ID_OK_DigOut_8, &value);
}


int getStatus_OK_DigOut_8()
{
return getStatus(ID_OK_DigOut_8);
}


int doWrite_OK_DigOut_9(int value)
{
return doWrite(ID_OK_DigOut_9,  &value);
}


int addWrite_OK_DigOut_9(int value)
{
return addWrite(ID_OK_DigOut_9, &value);
}


int getStatus_OK_DigOut_9()
{
return getStatus(ID_OK_DigOut_9);
}


int doWrite_OK_DigOut_10(int value)
{
return doWrite(ID_OK_DigOut_10,  &value);
}


int addWrite_OK_DigOut_10(int value)
{
return addWrite(ID_OK_DigOut_10, &value);
}


int getStatus_OK_DigOut_10()
{
return getStatus(ID_OK_DigOut_10);
}


int doWrite_OK_DigOut_11(int value)
{
return doWrite(ID_OK_DigOut_11,  &value);
}


int addWrite_OK_DigOut_11(int value)
{
return addWrite(ID_OK_DigOut_11, &value);
}


int getStatus_OK_DigOut_11()
{
return getStatus(ID_OK_DigOut_11);
}


int doWrite_OK_DigOut_12(int value)
{
return doWrite(ID_OK_DigOut_12,  &value);
}


int addWrite_OK_DigOut_12(int value)
{
return addWrite(ID_OK_DigOut_12, &value);
}


int getStatus_OK_DigOut_12()
{
return getStatus(ID_OK_DigOut_12);
}


int doWrite_OK_DigOut_13(int value)
{
return doWrite(ID_OK_DigOut_13,  &value);
}


int addWrite_OK_DigOut_13(int value)
{
return addWrite(ID_OK_DigOut_13, &value);
}


int getStatus_OK_DigOut_13()
{
return getStatus(ID_OK_DigOut_13);
}


int doWrite_OK_DigOut_14(int value)
{
return doWrite(ID_OK_DigOut_14,  &value);
}


int addWrite_OK_DigOut_14(int value)
{
return addWrite(ID_OK_DigOut_14, &value);
}


int getStatus_OK_DigOut_14()
{
return getStatus(ID_OK_DigOut_14);
}


int doWrite_OK_DigOut_15(int value)
{
return doWrite(ID_OK_DigOut_15,  &value);
}


int addWrite_OK_DigOut_15(int value)
{
return addWrite(ID_OK_DigOut_15, &value);
}


int getStatus_OK_DigOut_15()
{
return getStatus(ID_OK_DigOut_15);
}


int doWrite_OK_DigOut_16(int value)
{
return doWrite(ID_OK_DigOut_16,  &value);
}


int addWrite_OK_DigOut_16(int value)
{
return addWrite(ID_OK_DigOut_16, &value);
}


int getStatus_OK_DigOut_16()
{
return getStatus(ID_OK_DigOut_16);
}


int doWrite_TST_AnIn_1(int value)
{
return doWrite(ID_TST_AnIn_1,  &value);
}


int addWrite_TST_AnIn_1(int value)
{
return addWrite(ID_TST_AnIn_1, &value);
}


int getStatus_TST_AnIn_1()
{
return getStatus(ID_TST_AnIn_1);
}


int doWrite_TST_AnIn_2(int value)
{
return doWrite(ID_TST_AnIn_2,  &value);
}


int addWrite_TST_AnIn_2(int value)
{
return addWrite(ID_TST_AnIn_2, &value);
}


int getStatus_TST_AnIn_2()
{
return getStatus(ID_TST_AnIn_2);
}


int doWrite_TST_AnIn_3(int value)
{
return doWrite(ID_TST_AnIn_3,  &value);
}


int addWrite_TST_AnIn_3(int value)
{
return addWrite(ID_TST_AnIn_3, &value);
}


int getStatus_TST_AnIn_3()
{
return getStatus(ID_TST_AnIn_3);
}


int doWrite_TST_AnIn_4(int value)
{
return doWrite(ID_TST_AnIn_4,  &value);
}


int addWrite_TST_AnIn_4(int value)
{
return addWrite(ID_TST_AnIn_4, &value);
}


int getStatus_TST_AnIn_4()
{
return getStatus(ID_TST_AnIn_4);
}


int doWrite_TST_AnIn_5(int value)
{
return doWrite(ID_TST_AnIn_5,  &value);
}


int addWrite_TST_AnIn_5(int value)
{
return addWrite(ID_TST_AnIn_5, &value);
}


int getStatus_TST_AnIn_5()
{
return getStatus(ID_TST_AnIn_5);
}


int doWrite_TST_AnIn_6(int value)
{
return doWrite(ID_TST_AnIn_6,  &value);
}


int addWrite_TST_AnIn_6(int value)
{
return addWrite(ID_TST_AnIn_6, &value);
}


int getStatus_TST_AnIn_6()
{
return getStatus(ID_TST_AnIn_6);
}


int doWrite_TST_AnIn_7(int value)
{
return doWrite(ID_TST_AnIn_7,  &value);
}


int addWrite_TST_AnIn_7(int value)
{
return addWrite(ID_TST_AnIn_7, &value);
}


int getStatus_TST_AnIn_7()
{
return getStatus(ID_TST_AnIn_7);
}


int doWrite_TST_AnIn_8(int value)
{
return doWrite(ID_TST_AnIn_8,  &value);
}


int addWrite_TST_AnIn_8(int value)
{
return addWrite(ID_TST_AnIn_8, &value);
}


int getStatus_TST_AnIn_8()
{
return getStatus(ID_TST_AnIn_8);
}


int doWrite_TST_AnIn_9(int value)
{
return doWrite(ID_TST_AnIn_9,  &value);
}


int addWrite_TST_AnIn_9(int value)
{
return addWrite(ID_TST_AnIn_9, &value);
}


int getStatus_TST_AnIn_9()
{
return getStatus(ID_TST_AnIn_9);
}


int doWrite_TST_AnIn_10(int value)
{
return doWrite(ID_TST_AnIn_10,  &value);
}


int addWrite_TST_AnIn_10(int value)
{
return addWrite(ID_TST_AnIn_10, &value);
}


int getStatus_TST_AnIn_10()
{
return getStatus(ID_TST_AnIn_10);
}


int doWrite_TST_AnIn_11(int value)
{
return doWrite(ID_TST_AnIn_11,  &value);
}


int addWrite_TST_AnIn_11(int value)
{
return addWrite(ID_TST_AnIn_11, &value);
}


int getStatus_TST_AnIn_11()
{
return getStatus(ID_TST_AnIn_11);
}


int doWrite_TST_AnIn_12(int value)
{
return doWrite(ID_TST_AnIn_12,  &value);
}


int addWrite_TST_AnIn_12(int value)
{
return addWrite(ID_TST_AnIn_12, &value);
}


int getStatus_TST_AnIn_12()
{
return getStatus(ID_TST_AnIn_12);
}


int doWrite_VAL_AnIn_1(int16_t value)
{
return doWrite(ID_VAL_AnIn_1,  &value);
}


int addWrite_VAL_AnIn_1(int16_t value)
{
return addWrite(ID_VAL_AnIn_1, &value);
}


int getStatus_VAL_AnIn_1()
{
return getStatus(ID_VAL_AnIn_1);
}


int doWrite_VAL_AnIn_2(int16_t value)
{
return doWrite(ID_VAL_AnIn_2,  &value);
}


int addWrite_VAL_AnIn_2(int16_t value)
{
return addWrite(ID_VAL_AnIn_2, &value);
}


int getStatus_VAL_AnIn_2()
{
return getStatus(ID_VAL_AnIn_2);
}


int doWrite_VAL_AnIn_3(int16_t value)
{
return doWrite(ID_VAL_AnIn_3,  &value);
}


int addWrite_VAL_AnIn_3(int16_t value)
{
return addWrite(ID_VAL_AnIn_3, &value);
}


int getStatus_VAL_AnIn_3()
{
return getStatus(ID_VAL_AnIn_3);
}


int doWrite_VAL_AnIn_4(int16_t value)
{
return doWrite(ID_VAL_AnIn_4,  &value);
}


int addWrite_VAL_AnIn_4(int16_t value)
{
return addWrite(ID_VAL_AnIn_4, &value);
}


int getStatus_VAL_AnIn_4()
{
return getStatus(ID_VAL_AnIn_4);
}


int doWrite_VAL_AnIn_5(int16_t value)
{
return doWrite(ID_VAL_AnIn_5,  &value);
}


int addWrite_VAL_AnIn_5(int16_t value)
{
return addWrite(ID_VAL_AnIn_5, &value);
}


int getStatus_VAL_AnIn_5()
{
return getStatus(ID_VAL_AnIn_5);
}


int doWrite_VAL_AnIn_6(int16_t value)
{
return doWrite(ID_VAL_AnIn_6,  &value);
}


int addWrite_VAL_AnIn_6(int16_t value)
{
return addWrite(ID_VAL_AnIn_6, &value);
}


int getStatus_VAL_AnIn_6()
{
return getStatus(ID_VAL_AnIn_6);
}


int doWrite_VAL_AnIn_7(int16_t value)
{
return doWrite(ID_VAL_AnIn_7,  &value);
}


int addWrite_VAL_AnIn_7(int16_t value)
{
return addWrite(ID_VAL_AnIn_7, &value);
}


int getStatus_VAL_AnIn_7()
{
return getStatus(ID_VAL_AnIn_7);
}


int doWrite_VAL_AnIn_8(int16_t value)
{
return doWrite(ID_VAL_AnIn_8,  &value);
}


int addWrite_VAL_AnIn_8(int16_t value)
{
return addWrite(ID_VAL_AnIn_8, &value);
}


int getStatus_VAL_AnIn_8()
{
return getStatus(ID_VAL_AnIn_8);
}


int doWrite_VAL_AnIn_9(int16_t value)
{
return doWrite(ID_VAL_AnIn_9,  &value);
}


int addWrite_VAL_AnIn_9(int16_t value)
{
return addWrite(ID_VAL_AnIn_9, &value);
}


int getStatus_VAL_AnIn_9()
{
return getStatus(ID_VAL_AnIn_9);
}


int doWrite_VAL_AnIn_10(int16_t value)
{
return doWrite(ID_VAL_AnIn_10,  &value);
}


int addWrite_VAL_AnIn_10(int16_t value)
{
return addWrite(ID_VAL_AnIn_10, &value);
}


int getStatus_VAL_AnIn_10()
{
return getStatus(ID_VAL_AnIn_10);
}


int doWrite_VAL_AnIn_11(int16_t value)
{
return doWrite(ID_VAL_AnIn_11,  &value);
}


int addWrite_VAL_AnIn_11(int16_t value)
{
return addWrite(ID_VAL_AnIn_11, &value);
}


int getStatus_VAL_AnIn_11()
{
return getStatus(ID_VAL_AnIn_11);
}


int doWrite_VAL_AnIn_12(int16_t value)
{
return doWrite(ID_VAL_AnIn_12,  &value);
}


int addWrite_VAL_AnIn_12(int16_t value)
{
return addWrite(ID_VAL_AnIn_12, &value);
}


int getStatus_VAL_AnIn_12()
{
return getStatus(ID_VAL_AnIn_12);
}


int doWrite_VAL_AnInConf_1(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_1,  &value);
}


int addWrite_VAL_AnInConf_1(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_1, &value);
}


int getStatus_VAL_AnInConf_1()
{
return getStatus(ID_VAL_AnInConf_1);
}


int doWrite_VAL_AnInConf_2(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_2,  &value);
}


int addWrite_VAL_AnInConf_2(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_2, &value);
}


int getStatus_VAL_AnInConf_2()
{
return getStatus(ID_VAL_AnInConf_2);
}


int doWrite_VAL_AnInConf_3(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_3,  &value);
}


int addWrite_VAL_AnInConf_3(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_3, &value);
}


int getStatus_VAL_AnInConf_3()
{
return getStatus(ID_VAL_AnInConf_3);
}


int doWrite_VAL_AnInConf_4(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_4,  &value);
}


int addWrite_VAL_AnInConf_4(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_4, &value);
}


int getStatus_VAL_AnInConf_4()
{
return getStatus(ID_VAL_AnInConf_4);
}


int doWrite_VAL_AnInConf_5(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_5,  &value);
}


int addWrite_VAL_AnInConf_5(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_5, &value);
}


int getStatus_VAL_AnInConf_5()
{
return getStatus(ID_VAL_AnInConf_5);
}


int doWrite_VAL_AnInConf_6(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_6,  &value);
}


int addWrite_VAL_AnInConf_6(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_6, &value);
}


int getStatus_VAL_AnInConf_6()
{
return getStatus(ID_VAL_AnInConf_6);
}


int doWrite_VAL_AnInConf_7(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_7,  &value);
}


int addWrite_VAL_AnInConf_7(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_7, &value);
}


int getStatus_VAL_AnInConf_7()
{
return getStatus(ID_VAL_AnInConf_7);
}


int doWrite_VAL_AnInConf_8(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_8,  &value);
}


int addWrite_VAL_AnInConf_8(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_8, &value);
}


int getStatus_VAL_AnInConf_8()
{
return getStatus(ID_VAL_AnInConf_8);
}


int doWrite_VAL_AnInConf_9(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_9,  &value);
}


int addWrite_VAL_AnInConf_9(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_9, &value);
}


int getStatus_VAL_AnInConf_9()
{
return getStatus(ID_VAL_AnInConf_9);
}


int doWrite_VAL_AnInConf_10(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_10,  &value);
}


int addWrite_VAL_AnInConf_10(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_10, &value);
}


int getStatus_VAL_AnInConf_10()
{
return getStatus(ID_VAL_AnInConf_10);
}


int doWrite_VAL_AnInConf_11(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_11,  &value);
}


int addWrite_VAL_AnInConf_11(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_11, &value);
}


int getStatus_VAL_AnInConf_11()
{
return getStatus(ID_VAL_AnInConf_11);
}


int doWrite_VAL_AnInConf_12(u_int16_t value)
{
return doWrite(ID_VAL_AnInConf_12,  &value);
}


int addWrite_VAL_AnInConf_12(u_int16_t value)
{
return addWrite(ID_VAL_AnInConf_12, &value);
}


int getStatus_VAL_AnInConf_12()
{
return getStatus(ID_VAL_AnInConf_12);
}


int doWrite_VAL_AnInFltr_1(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_1,  &value);
}


int addWrite_VAL_AnInFltr_1(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_1, &value);
}


int getStatus_VAL_AnInFltr_1()
{
return getStatus(ID_VAL_AnInFltr_1);
}


int doWrite_VAL_AnInFltr_2(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_2,  &value);
}


int addWrite_VAL_AnInFltr_2(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_2, &value);
}


int getStatus_VAL_AnInFltr_2()
{
return getStatus(ID_VAL_AnInFltr_2);
}


int doWrite_VAL_AnInFltr_3(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_3,  &value);
}


int addWrite_VAL_AnInFltr_3(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_3, &value);
}


int getStatus_VAL_AnInFltr_3()
{
return getStatus(ID_VAL_AnInFltr_3);
}


int doWrite_VAL_AnInFltr_4(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_4,  &value);
}


int addWrite_VAL_AnInFltr_4(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_4, &value);
}


int getStatus_VAL_AnInFltr_4()
{
return getStatus(ID_VAL_AnInFltr_4);
}


int doWrite_VAL_AnInFltr_5(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_5,  &value);
}


int addWrite_VAL_AnInFltr_5(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_5, &value);
}


int getStatus_VAL_AnInFltr_5()
{
return getStatus(ID_VAL_AnInFltr_5);
}


int doWrite_VAL_AnInFltr_6(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_6,  &value);
}


int addWrite_VAL_AnInFltr_6(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_6, &value);
}


int getStatus_VAL_AnInFltr_6()
{
return getStatus(ID_VAL_AnInFltr_6);
}


int doWrite_VAL_AnInFltr_7(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_7,  &value);
}


int addWrite_VAL_AnInFltr_7(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_7, &value);
}


int getStatus_VAL_AnInFltr_7()
{
return getStatus(ID_VAL_AnInFltr_7);
}


int doWrite_VAL_AnInFltr_8(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_8,  &value);
}


int addWrite_VAL_AnInFltr_8(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_8, &value);
}


int getStatus_VAL_AnInFltr_8()
{
return getStatus(ID_VAL_AnInFltr_8);
}


int doWrite_VAL_AnInFltr_9(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_9,  &value);
}


int addWrite_VAL_AnInFltr_9(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_9, &value);
}


int getStatus_VAL_AnInFltr_9()
{
return getStatus(ID_VAL_AnInFltr_9);
}


int doWrite_VAL_AnInFltr_10(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_10,  &value);
}


int addWrite_VAL_AnInFltr_10(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_10, &value);
}


int getStatus_VAL_AnInFltr_10()
{
return getStatus(ID_VAL_AnInFltr_10);
}


int doWrite_VAL_AnInFltr_11(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_11,  &value);
}


int addWrite_VAL_AnInFltr_11(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_11, &value);
}


int getStatus_VAL_AnInFltr_11()
{
return getStatus(ID_VAL_AnInFltr_11);
}


int doWrite_VAL_AnInFltr_12(u_int16_t value)
{
return doWrite(ID_VAL_AnInFltr_12,  &value);
}


int addWrite_VAL_AnInFltr_12(u_int16_t value)
{
return addWrite(ID_VAL_AnInFltr_12, &value);
}


int getStatus_VAL_AnInFltr_12()
{
return getStatus(ID_VAL_AnInFltr_12);
}


int doWrite_RES_AnIn_1(int16_t value)
{
return doWrite(ID_RES_AnIn_1,  &value);
}


int addWrite_RES_AnIn_1(int16_t value)
{
return addWrite(ID_RES_AnIn_1, &value);
}


int getStatus_RES_AnIn_1()
{
return getStatus(ID_RES_AnIn_1);
}


int doWrite_RES_AnIn_2(int16_t value)
{
return doWrite(ID_RES_AnIn_2,  &value);
}


int addWrite_RES_AnIn_2(int16_t value)
{
return addWrite(ID_RES_AnIn_2, &value);
}


int getStatus_RES_AnIn_2()
{
return getStatus(ID_RES_AnIn_2);
}


int doWrite_RES_AnIn_3(int16_t value)
{
return doWrite(ID_RES_AnIn_3,  &value);
}


int addWrite_RES_AnIn_3(int16_t value)
{
return addWrite(ID_RES_AnIn_3, &value);
}


int getStatus_RES_AnIn_3()
{
return getStatus(ID_RES_AnIn_3);
}


int doWrite_RES_AnIn_4(int16_t value)
{
return doWrite(ID_RES_AnIn_4,  &value);
}


int addWrite_RES_AnIn_4(int16_t value)
{
return addWrite(ID_RES_AnIn_4, &value);
}


int getStatus_RES_AnIn_4()
{
return getStatus(ID_RES_AnIn_4);
}


int doWrite_RES_AnIn_5(int16_t value)
{
return doWrite(ID_RES_AnIn_5,  &value);
}


int addWrite_RES_AnIn_5(int16_t value)
{
return addWrite(ID_RES_AnIn_5, &value);
}


int getStatus_RES_AnIn_5()
{
return getStatus(ID_RES_AnIn_5);
}


int doWrite_RES_AnIn_6(int16_t value)
{
return doWrite(ID_RES_AnIn_6,  &value);
}


int addWrite_RES_AnIn_6(int16_t value)
{
return addWrite(ID_RES_AnIn_6, &value);
}


int getStatus_RES_AnIn_6()
{
return getStatus(ID_RES_AnIn_6);
}


int doWrite_RES_AnIn_7(int16_t value)
{
return doWrite(ID_RES_AnIn_7,  &value);
}


int addWrite_RES_AnIn_7(int16_t value)
{
return addWrite(ID_RES_AnIn_7, &value);
}


int getStatus_RES_AnIn_7()
{
return getStatus(ID_RES_AnIn_7);
}


int doWrite_RES_AnIn_8(int16_t value)
{
return doWrite(ID_RES_AnIn_8,  &value);
}


int addWrite_RES_AnIn_8(int16_t value)
{
return addWrite(ID_RES_AnIn_8, &value);
}


int getStatus_RES_AnIn_8()
{
return getStatus(ID_RES_AnIn_8);
}


int doWrite_RES_AnIn_9(int16_t value)
{
return doWrite(ID_RES_AnIn_9,  &value);
}


int addWrite_RES_AnIn_9(int16_t value)
{
return addWrite(ID_RES_AnIn_9, &value);
}


int getStatus_RES_AnIn_9()
{
return getStatus(ID_RES_AnIn_9);
}


int doWrite_RES_AnIn_10(int16_t value)
{
return doWrite(ID_RES_AnIn_10,  &value);
}


int addWrite_RES_AnIn_10(int16_t value)
{
return addWrite(ID_RES_AnIn_10, &value);
}


int getStatus_RES_AnIn_10()
{
return getStatus(ID_RES_AnIn_10);
}


int doWrite_RES_AnIn_11(int16_t value)
{
return doWrite(ID_RES_AnIn_11,  &value);
}


int addWrite_RES_AnIn_11(int16_t value)
{
return addWrite(ID_RES_AnIn_11, &value);
}


int getStatus_RES_AnIn_11()
{
return getStatus(ID_RES_AnIn_11);
}


int doWrite_RES_AnIn_12(int16_t value)
{
return doWrite(ID_RES_AnIn_12,  &value);
}


int addWrite_RES_AnIn_12(int16_t value)
{
return addWrite(ID_RES_AnIn_12, &value);
}


int getStatus_RES_AnIn_12()
{
return getStatus(ID_RES_AnIn_12);
}


int doWrite_RES_AnInStts_1(int16_t value)
{
return doWrite(ID_RES_AnInStts_1,  &value);
}


int addWrite_RES_AnInStts_1(int16_t value)
{
return addWrite(ID_RES_AnInStts_1, &value);
}


int getStatus_RES_AnInStts_1()
{
return getStatus(ID_RES_AnInStts_1);
}


int doWrite_RES_AnInStts_2(int16_t value)
{
return doWrite(ID_RES_AnInStts_2,  &value);
}


int addWrite_RES_AnInStts_2(int16_t value)
{
return addWrite(ID_RES_AnInStts_2, &value);
}


int getStatus_RES_AnInStts_2()
{
return getStatus(ID_RES_AnInStts_2);
}


int doWrite_RES_AnInStts_3(int16_t value)
{
return doWrite(ID_RES_AnInStts_3,  &value);
}


int addWrite_RES_AnInStts_3(int16_t value)
{
return addWrite(ID_RES_AnInStts_3, &value);
}


int getStatus_RES_AnInStts_3()
{
return getStatus(ID_RES_AnInStts_3);
}


int doWrite_RES_AnInStts_4(int16_t value)
{
return doWrite(ID_RES_AnInStts_4,  &value);
}


int addWrite_RES_AnInStts_4(int16_t value)
{
return addWrite(ID_RES_AnInStts_4, &value);
}


int getStatus_RES_AnInStts_4()
{
return getStatus(ID_RES_AnInStts_4);
}


int doWrite_RES_AnInStts_5(int16_t value)
{
return doWrite(ID_RES_AnInStts_5,  &value);
}


int addWrite_RES_AnInStts_5(int16_t value)
{
return addWrite(ID_RES_AnInStts_5, &value);
}


int getStatus_RES_AnInStts_5()
{
return getStatus(ID_RES_AnInStts_5);
}


int doWrite_RES_AnInStts_6(int16_t value)
{
return doWrite(ID_RES_AnInStts_6,  &value);
}


int addWrite_RES_AnInStts_6(int16_t value)
{
return addWrite(ID_RES_AnInStts_6, &value);
}


int getStatus_RES_AnInStts_6()
{
return getStatus(ID_RES_AnInStts_6);
}


int doWrite_RES_AnInStts_7(int16_t value)
{
return doWrite(ID_RES_AnInStts_7,  &value);
}


int addWrite_RES_AnInStts_7(int16_t value)
{
return addWrite(ID_RES_AnInStts_7, &value);
}


int getStatus_RES_AnInStts_7()
{
return getStatus(ID_RES_AnInStts_7);
}


int doWrite_RES_AnInStts_8(int16_t value)
{
return doWrite(ID_RES_AnInStts_8,  &value);
}


int addWrite_RES_AnInStts_8(int16_t value)
{
return addWrite(ID_RES_AnInStts_8, &value);
}


int getStatus_RES_AnInStts_8()
{
return getStatus(ID_RES_AnInStts_8);
}


int doWrite_RES_AnInStts_9(int16_t value)
{
return doWrite(ID_RES_AnInStts_9,  &value);
}


int addWrite_RES_AnInStts_9(int16_t value)
{
return addWrite(ID_RES_AnInStts_9, &value);
}


int getStatus_RES_AnInStts_9()
{
return getStatus(ID_RES_AnInStts_9);
}


int doWrite_RES_AnInStts_10(int16_t value)
{
return doWrite(ID_RES_AnInStts_10,  &value);
}


int addWrite_RES_AnInStts_10(int16_t value)
{
return addWrite(ID_RES_AnInStts_10, &value);
}


int getStatus_RES_AnInStts_10()
{
return getStatus(ID_RES_AnInStts_10);
}


int doWrite_RES_AnInStts_11(int16_t value)
{
return doWrite(ID_RES_AnInStts_11,  &value);
}


int addWrite_RES_AnInStts_11(int16_t value)
{
return addWrite(ID_RES_AnInStts_11, &value);
}


int getStatus_RES_AnInStts_11()
{
return getStatus(ID_RES_AnInStts_11);
}


int doWrite_RES_AnInStts_12(int16_t value)
{
return doWrite(ID_RES_AnInStts_12,  &value);
}


int addWrite_RES_AnInStts_12(int16_t value)
{
return addWrite(ID_RES_AnInStts_12, &value);
}


int getStatus_RES_AnInStts_12()
{
return getStatus(ID_RES_AnInStts_12);
}


int doWrite_OK_AnIn_1(int value)
{
return doWrite(ID_OK_AnIn_1,  &value);
}


int addWrite_OK_AnIn_1(int value)
{
return addWrite(ID_OK_AnIn_1, &value);
}


int getStatus_OK_AnIn_1()
{
return getStatus(ID_OK_AnIn_1);
}


int doWrite_OK_AnIn_2(int value)
{
return doWrite(ID_OK_AnIn_2,  &value);
}


int addWrite_OK_AnIn_2(int value)
{
return addWrite(ID_OK_AnIn_2, &value);
}


int getStatus_OK_AnIn_2()
{
return getStatus(ID_OK_AnIn_2);
}


int doWrite_OK_AnIn_3(int value)
{
return doWrite(ID_OK_AnIn_3,  &value);
}


int addWrite_OK_AnIn_3(int value)
{
return addWrite(ID_OK_AnIn_3, &value);
}


int getStatus_OK_AnIn_3()
{
return getStatus(ID_OK_AnIn_3);
}


int doWrite_OK_AnIn_4(int value)
{
return doWrite(ID_OK_AnIn_4,  &value);
}


int addWrite_OK_AnIn_4(int value)
{
return addWrite(ID_OK_AnIn_4, &value);
}


int getStatus_OK_AnIn_4()
{
return getStatus(ID_OK_AnIn_4);
}


int doWrite_OK_AnIn_5(int value)
{
return doWrite(ID_OK_AnIn_5,  &value);
}


int addWrite_OK_AnIn_5(int value)
{
return addWrite(ID_OK_AnIn_5, &value);
}


int getStatus_OK_AnIn_5()
{
return getStatus(ID_OK_AnIn_5);
}


int doWrite_OK_AnIn_6(int value)
{
return doWrite(ID_OK_AnIn_6,  &value);
}


int addWrite_OK_AnIn_6(int value)
{
return addWrite(ID_OK_AnIn_6, &value);
}


int getStatus_OK_AnIn_6()
{
return getStatus(ID_OK_AnIn_6);
}


int doWrite_OK_AnIn_7(int value)
{
return doWrite(ID_OK_AnIn_7,  &value);
}


int addWrite_OK_AnIn_7(int value)
{
return addWrite(ID_OK_AnIn_7, &value);
}


int getStatus_OK_AnIn_7()
{
return getStatus(ID_OK_AnIn_7);
}


int doWrite_OK_AnIn_8(int value)
{
return doWrite(ID_OK_AnIn_8,  &value);
}


int addWrite_OK_AnIn_8(int value)
{
return addWrite(ID_OK_AnIn_8, &value);
}


int getStatus_OK_AnIn_8()
{
return getStatus(ID_OK_AnIn_8);
}


int doWrite_OK_AnIn_9(int value)
{
return doWrite(ID_OK_AnIn_9,  &value);
}


int addWrite_OK_AnIn_9(int value)
{
return addWrite(ID_OK_AnIn_9, &value);
}


int getStatus_OK_AnIn_9()
{
return getStatus(ID_OK_AnIn_9);
}


int doWrite_OK_AnIn_10(int value)
{
return doWrite(ID_OK_AnIn_10,  &value);
}


int addWrite_OK_AnIn_10(int value)
{
return addWrite(ID_OK_AnIn_10, &value);
}


int getStatus_OK_AnIn_10()
{
return getStatus(ID_OK_AnIn_10);
}


int doWrite_OK_AnIn_11(int value)
{
return doWrite(ID_OK_AnIn_11,  &value);
}


int addWrite_OK_AnIn_11(int value)
{
return addWrite(ID_OK_AnIn_11, &value);
}


int getStatus_OK_AnIn_11()
{
return getStatus(ID_OK_AnIn_11);
}


int doWrite_OK_AnIn_12(int value)
{
return doWrite(ID_OK_AnIn_12,  &value);
}


int addWrite_OK_AnIn_12(int value)
{
return addWrite(ID_OK_AnIn_12, &value);
}


int getStatus_OK_AnIn_12()
{
return getStatus(ID_OK_AnIn_12);
}


int doWrite_TST_AnOut_1(int value)
{
return doWrite(ID_TST_AnOut_1,  &value);
}


int addWrite_TST_AnOut_1(int value)
{
return addWrite(ID_TST_AnOut_1, &value);
}


int getStatus_TST_AnOut_1()
{
return getStatus(ID_TST_AnOut_1);
}


int doWrite_TST_AnOut_2(int value)
{
return doWrite(ID_TST_AnOut_2,  &value);
}


int addWrite_TST_AnOut_2(int value)
{
return addWrite(ID_TST_AnOut_2, &value);
}


int getStatus_TST_AnOut_2()
{
return getStatus(ID_TST_AnOut_2);
}


int doWrite_TST_AnOut_3(int value)
{
return doWrite(ID_TST_AnOut_3,  &value);
}


int addWrite_TST_AnOut_3(int value)
{
return addWrite(ID_TST_AnOut_3, &value);
}


int getStatus_TST_AnOut_3()
{
return getStatus(ID_TST_AnOut_3);
}


int doWrite_TST_AnOut_4(int value)
{
return doWrite(ID_TST_AnOut_4,  &value);
}


int addWrite_TST_AnOut_4(int value)
{
return addWrite(ID_TST_AnOut_4, &value);
}


int getStatus_TST_AnOut_4()
{
return getStatus(ID_TST_AnOut_4);
}


int doWrite_VAL_AnOut_1(int16_t value)
{
return doWrite(ID_VAL_AnOut_1,  &value);
}


int addWrite_VAL_AnOut_1(int16_t value)
{
return addWrite(ID_VAL_AnOut_1, &value);
}


int getStatus_VAL_AnOut_1()
{
return getStatus(ID_VAL_AnOut_1);
}


int doWrite_VAL_AnOut_2(int16_t value)
{
return doWrite(ID_VAL_AnOut_2,  &value);
}


int addWrite_VAL_AnOut_2(int16_t value)
{
return addWrite(ID_VAL_AnOut_2, &value);
}


int getStatus_VAL_AnOut_2()
{
return getStatus(ID_VAL_AnOut_2);
}


int doWrite_VAL_AnOut_3(int16_t value)
{
return doWrite(ID_VAL_AnOut_3,  &value);
}


int addWrite_VAL_AnOut_3(int16_t value)
{
return addWrite(ID_VAL_AnOut_3, &value);
}


int getStatus_VAL_AnOut_3()
{
return getStatus(ID_VAL_AnOut_3);
}


int doWrite_VAL_AnOut_4(int16_t value)
{
return doWrite(ID_VAL_AnOut_4,  &value);
}


int addWrite_VAL_AnOut_4(int16_t value)
{
return addWrite(ID_VAL_AnOut_4, &value);
}


int getStatus_VAL_AnOut_4()
{
return getStatus(ID_VAL_AnOut_4);
}


int doWrite_VAL_AnOutConf_1(u_int16_t value)
{
return doWrite(ID_VAL_AnOutConf_1,  &value);
}


int addWrite_VAL_AnOutConf_1(u_int16_t value)
{
return addWrite(ID_VAL_AnOutConf_1, &value);
}


int getStatus_VAL_AnOutConf_1()
{
return getStatus(ID_VAL_AnOutConf_1);
}


int doWrite_VAL_AnOutConf_2(u_int16_t value)
{
return doWrite(ID_VAL_AnOutConf_2,  &value);
}


int addWrite_VAL_AnOutConf_2(u_int16_t value)
{
return addWrite(ID_VAL_AnOutConf_2, &value);
}


int getStatus_VAL_AnOutConf_2()
{
return getStatus(ID_VAL_AnOutConf_2);
}


int doWrite_VAL_AnOutConf_3(u_int16_t value)
{
return doWrite(ID_VAL_AnOutConf_3,  &value);
}


int addWrite_VAL_AnOutConf_3(u_int16_t value)
{
return addWrite(ID_VAL_AnOutConf_3, &value);
}


int getStatus_VAL_AnOutConf_3()
{
return getStatus(ID_VAL_AnOutConf_3);
}


int doWrite_VAL_AnOutConf_4(u_int16_t value)
{
return doWrite(ID_VAL_AnOutConf_4,  &value);
}


int addWrite_VAL_AnOutConf_4(u_int16_t value)
{
return addWrite(ID_VAL_AnOutConf_4, &value);
}


int getStatus_VAL_AnOutConf_4()
{
return getStatus(ID_VAL_AnOutConf_4);
}


int doWrite_RES_AnOut_1(int16_t value)
{
return doWrite(ID_RES_AnOut_1,  &value);
}


int addWrite_RES_AnOut_1(int16_t value)
{
return addWrite(ID_RES_AnOut_1, &value);
}


int getStatus_RES_AnOut_1()
{
return getStatus(ID_RES_AnOut_1);
}


int doWrite_RES_AnOut_2(int16_t value)
{
return doWrite(ID_RES_AnOut_2,  &value);
}


int addWrite_RES_AnOut_2(int16_t value)
{
return addWrite(ID_RES_AnOut_2, &value);
}


int getStatus_RES_AnOut_2()
{
return getStatus(ID_RES_AnOut_2);
}


int doWrite_RES_AnOut_3(int16_t value)
{
return doWrite(ID_RES_AnOut_3,  &value);
}


int addWrite_RES_AnOut_3(int16_t value)
{
return addWrite(ID_RES_AnOut_3, &value);
}


int getStatus_RES_AnOut_3()
{
return getStatus(ID_RES_AnOut_3);
}


int doWrite_RES_AnOut_4(int16_t value)
{
return doWrite(ID_RES_AnOut_4,  &value);
}


int addWrite_RES_AnOut_4(int16_t value)
{
return addWrite(ID_RES_AnOut_4, &value);
}


int getStatus_RES_AnOut_4()
{
return getStatus(ID_RES_AnOut_4);
}


int doWrite_RES_AnOutStts_1(int16_t value)
{
return doWrite(ID_RES_AnOutStts_1,  &value);
}


int addWrite_RES_AnOutStts_1(int16_t value)
{
return addWrite(ID_RES_AnOutStts_1, &value);
}


int getStatus_RES_AnOutStts_1()
{
return getStatus(ID_RES_AnOutStts_1);
}


int doWrite_RES_AnOutStts_2(int16_t value)
{
return doWrite(ID_RES_AnOutStts_2,  &value);
}


int addWrite_RES_AnOutStts_2(int16_t value)
{
return addWrite(ID_RES_AnOutStts_2, &value);
}


int getStatus_RES_AnOutStts_2()
{
return getStatus(ID_RES_AnOutStts_2);
}


int doWrite_RES_AnOutStts_3(int16_t value)
{
return doWrite(ID_RES_AnOutStts_3,  &value);
}


int addWrite_RES_AnOutStts_3(int16_t value)
{
return addWrite(ID_RES_AnOutStts_3, &value);
}


int getStatus_RES_AnOutStts_3()
{
return getStatus(ID_RES_AnOutStts_3);
}


int doWrite_RES_AnOutStts_4(int16_t value)
{
return doWrite(ID_RES_AnOutStts_4,  &value);
}


int addWrite_RES_AnOutStts_4(int16_t value)
{
return addWrite(ID_RES_AnOutStts_4, &value);
}


int getStatus_RES_AnOutStts_4()
{
return getStatus(ID_RES_AnOutStts_4);
}


int doWrite_OK_AnOut_1(int value)
{
return doWrite(ID_OK_AnOut_1,  &value);
}


int addWrite_OK_AnOut_1(int value)
{
return addWrite(ID_OK_AnOut_1, &value);
}


int getStatus_OK_AnOut_1()
{
return getStatus(ID_OK_AnOut_1);
}


int doWrite_OK_AnOut_2(int value)
{
return doWrite(ID_OK_AnOut_2,  &value);
}


int addWrite_OK_AnOut_2(int value)
{
return addWrite(ID_OK_AnOut_2, &value);
}


int getStatus_OK_AnOut_2()
{
return getStatus(ID_OK_AnOut_2);
}


int doWrite_OK_AnOut_3(int value)
{
return doWrite(ID_OK_AnOut_3,  &value);
}


int addWrite_OK_AnOut_3(int value)
{
return addWrite(ID_OK_AnOut_3, &value);
}


int getStatus_OK_AnOut_3()
{
return getStatus(ID_OK_AnOut_3);
}


int doWrite_OK_AnOut_4(int value)
{
return doWrite(ID_OK_AnOut_4,  &value);
}


int addWrite_OK_AnOut_4(int value)
{
return addWrite(ID_OK_AnOut_4, &value);
}


int getStatus_OK_AnOut_4()
{
return getStatus(ID_OK_AnOut_4);
}


int doWrite_TST_Tamb(int value)
{
return doWrite(ID_TST_Tamb,  &value);
}


int addWrite_TST_Tamb(int value)
{
return addWrite(ID_TST_Tamb, &value);
}


int getStatus_TST_Tamb()
{
return getStatus(ID_TST_Tamb);
}


int doWrite_TST_RPM(int value)
{
return doWrite(ID_TST_RPM,  &value);
}


int addWrite_TST_RPM(int value)
{
return addWrite(ID_TST_RPM, &value);
}


int getStatus_TST_RPM()
{
return getStatus(ID_TST_RPM);
}


int doWrite_TST_VCC_set(int value)
{
return doWrite(ID_TST_VCC_set,  &value);
}


int addWrite_TST_VCC_set(int value)
{
return addWrite(ID_TST_VCC_set, &value);
}


int getStatus_TST_VCC_set()
{
return getStatus(ID_TST_VCC_set);
}


int doWrite_TST_mA_max(int value)
{
return doWrite(ID_TST_mA_max,  &value);
}


int addWrite_TST_mA_max(int value)
{
return addWrite(ID_TST_mA_max, &value);
}


int getStatus_TST_mA_max()
{
return getStatus(ID_TST_mA_max);
}


int doWrite_TST_VCC_fbk(int value)
{
return doWrite(ID_TST_VCC_fbk,  &value);
}


int addWrite_TST_VCC_fbk(int value)
{
return addWrite(ID_TST_VCC_fbk, &value);
}


int getStatus_TST_VCC_fbk()
{
return getStatus(ID_TST_VCC_fbk);
}


int doWrite_TST_mA_fbk(int value)
{
return doWrite(ID_TST_mA_fbk,  &value);
}


int addWrite_TST_mA_fbk(int value)
{
return addWrite(ID_TST_mA_fbk, &value);
}


int getStatus_TST_mA_fbk()
{
return getStatus(ID_TST_mA_fbk);
}


int doWrite_TST_FWrevision(int value)
{
return doWrite(ID_TST_FWrevision,  &value);
}


int addWrite_TST_FWrevision(int value)
{
return addWrite(ID_TST_FWrevision, &value);
}


int getStatus_TST_FWrevision()
{
return getStatus(ID_TST_FWrevision);
}


int doWrite_TST_HWconfig(int value)
{
return doWrite(ID_TST_HWconfig,  &value);
}


int addWrite_TST_HWconfig(int value)
{
return addWrite(ID_TST_HWconfig, &value);
}


int getStatus_TST_HWconfig()
{
return getStatus(ID_TST_HWconfig);
}


int doWrite_VAL_Tamb(int16_t value)
{
return doWrite(ID_VAL_Tamb,  &value);
}


int addWrite_VAL_Tamb(int16_t value)
{
return addWrite(ID_VAL_Tamb, &value);
}


int getStatus_VAL_Tamb()
{
return getStatus(ID_VAL_Tamb);
}


int doWrite_VAL_RPM(u_int16_t value)
{
return doWrite(ID_VAL_RPM,  &value);
}


int addWrite_VAL_RPM(u_int16_t value)
{
return addWrite(ID_VAL_RPM, &value);
}


int getStatus_VAL_RPM()
{
return getStatus(ID_VAL_RPM);
}


int doWrite_VAL_VCC_set(int16_t value)
{
return doWrite(ID_VAL_VCC_set,  &value);
}


int addWrite_VAL_VCC_set(int16_t value)
{
return addWrite(ID_VAL_VCC_set, &value);
}


int getStatus_VAL_VCC_set()
{
return getStatus(ID_VAL_VCC_set);
}


int doWrite_VAL_mA_max(int16_t value)
{
return doWrite(ID_VAL_mA_max,  &value);
}


int addWrite_VAL_mA_max(int16_t value)
{
return addWrite(ID_VAL_mA_max, &value);
}


int getStatus_VAL_mA_max()
{
return getStatus(ID_VAL_mA_max);
}


int doWrite_VAL_VCC_fbk(int16_t value)
{
return doWrite(ID_VAL_VCC_fbk,  &value);
}


int addWrite_VAL_VCC_fbk(int16_t value)
{
return addWrite(ID_VAL_VCC_fbk, &value);
}


int getStatus_VAL_VCC_fbk()
{
return getStatus(ID_VAL_VCC_fbk);
}


int doWrite_VAL_mA_fbk(int16_t value)
{
return doWrite(ID_VAL_mA_fbk,  &value);
}


int addWrite_VAL_mA_fbk(int16_t value)
{
return addWrite(ID_VAL_mA_fbk, &value);
}


int getStatus_VAL_mA_fbk()
{
return getStatus(ID_VAL_mA_fbk);
}


int doWrite_VAL_FWrevision(u_int16_t value)
{
return doWrite(ID_VAL_FWrevision,  &value);
}


int addWrite_VAL_FWrevision(u_int16_t value)
{
return addWrite(ID_VAL_FWrevision, &value);
}


int getStatus_VAL_FWrevision()
{
return getStatus(ID_VAL_FWrevision);
}


int doWrite_VAL_HWconfig(u_int16_t value)
{
return doWrite(ID_VAL_HWconfig,  &value);
}


int addWrite_VAL_HWconfig(u_int16_t value)
{
return addWrite(ID_VAL_HWconfig, &value);
}


int getStatus_VAL_HWconfig()
{
return getStatus(ID_VAL_HWconfig);
}


int doWrite_RES_Tamb(int16_t value)
{
return doWrite(ID_RES_Tamb,  &value);
}


int addWrite_RES_Tamb(int16_t value)
{
return addWrite(ID_RES_Tamb, &value);
}


int getStatus_RES_Tamb()
{
return getStatus(ID_RES_Tamb);
}


int doWrite_RES_RPM(u_int16_t value)
{
return doWrite(ID_RES_RPM,  &value);
}


int addWrite_RES_RPM(u_int16_t value)
{
return addWrite(ID_RES_RPM, &value);
}


int getStatus_RES_RPM()
{
return getStatus(ID_RES_RPM);
}


int doWrite_RES_VCC_set(int16_t value)
{
return doWrite(ID_RES_VCC_set,  &value);
}


int addWrite_RES_VCC_set(int16_t value)
{
return addWrite(ID_RES_VCC_set, &value);
}


int getStatus_RES_VCC_set()
{
return getStatus(ID_RES_VCC_set);
}


int doWrite_RES_mA_max(int16_t value)
{
return doWrite(ID_RES_mA_max,  &value);
}


int addWrite_RES_mA_max(int16_t value)
{
return addWrite(ID_RES_mA_max, &value);
}


int getStatus_RES_mA_max()
{
return getStatus(ID_RES_mA_max);
}


int doWrite_RES_VCC_fbk(int16_t value)
{
return doWrite(ID_RES_VCC_fbk,  &value);
}


int addWrite_RES_VCC_fbk(int16_t value)
{
return addWrite(ID_RES_VCC_fbk, &value);
}


int getStatus_RES_VCC_fbk()
{
return getStatus(ID_RES_VCC_fbk);
}


int doWrite_RES_mA_fbk(int16_t value)
{
return doWrite(ID_RES_mA_fbk,  &value);
}


int addWrite_RES_mA_fbk(int16_t value)
{
return addWrite(ID_RES_mA_fbk, &value);
}


int getStatus_RES_mA_fbk()
{
return getStatus(ID_RES_mA_fbk);
}


int doWrite_RES_FWrevision(u_int16_t value)
{
return doWrite(ID_RES_FWrevision,  &value);
}


int addWrite_RES_FWrevision(u_int16_t value)
{
return addWrite(ID_RES_FWrevision, &value);
}


int getStatus_RES_FWrevision()
{
return getStatus(ID_RES_FWrevision);
}


int doWrite_RES_HWconfig(u_int16_t value)
{
return doWrite(ID_RES_HWconfig,  &value);
}


int addWrite_RES_HWconfig(u_int16_t value)
{
return addWrite(ID_RES_HWconfig, &value);
}


int getStatus_RES_HWconfig()
{
return getStatus(ID_RES_HWconfig);
}


int doWrite_OK_Tamb(int value)
{
return doWrite(ID_OK_Tamb,  &value);
}


int addWrite_OK_Tamb(int value)
{
return addWrite(ID_OK_Tamb, &value);
}


int getStatus_OK_Tamb()
{
return getStatus(ID_OK_Tamb);
}


int doWrite_OK_RPM(int value)
{
return doWrite(ID_OK_RPM,  &value);
}


int addWrite_OK_RPM(int value)
{
return addWrite(ID_OK_RPM, &value);
}


int getStatus_OK_RPM()
{
return getStatus(ID_OK_RPM);
}


int doWrite_OK_VCC_set(int value)
{
return doWrite(ID_OK_VCC_set,  &value);
}


int addWrite_OK_VCC_set(int value)
{
return addWrite(ID_OK_VCC_set, &value);
}


int getStatus_OK_VCC_set()
{
return getStatus(ID_OK_VCC_set);
}


int doWrite_OK_mA_max(int value)
{
return doWrite(ID_OK_mA_max,  &value);
}


int addWrite_OK_mA_max(int value)
{
return addWrite(ID_OK_mA_max, &value);
}


int getStatus_OK_mA_max()
{
return getStatus(ID_OK_mA_max);
}


int doWrite_OK_VCC_fbk(int value)
{
return doWrite(ID_OK_VCC_fbk,  &value);
}


int addWrite_OK_VCC_fbk(int value)
{
return addWrite(ID_OK_VCC_fbk, &value);
}


int getStatus_OK_VCC_fbk()
{
return getStatus(ID_OK_VCC_fbk);
}


int doWrite_OK_mA_fbk(int value)
{
return doWrite(ID_OK_mA_fbk,  &value);
}


int addWrite_OK_mA_fbk(int value)
{
return addWrite(ID_OK_mA_fbk, &value);
}


int getStatus_OK_mA_fbk()
{
return getStatus(ID_OK_mA_fbk);
}


int doWrite_OK_FWrevision(int value)
{
return doWrite(ID_OK_FWrevision,  &value);
}


int addWrite_OK_FWrevision(int value)
{
return addWrite(ID_OK_FWrevision, &value);
}


int getStatus_OK_FWrevision()
{
return getStatus(ID_OK_FWrevision);
}


int doWrite_OK_HWconfig(int value)
{
return doWrite(ID_OK_HWconfig,  &value);
}


int addWrite_OK_HWconfig(int value)
{
return addWrite(ID_OK_HWconfig, &value);
}


int getStatus_OK_HWconfig()
{
return getStatus(ID_OK_HWconfig);
}


int doWrite_TST_RTUS_WR(int value)
{
return doWrite(ID_TST_RTUS_WR,  &value);
}


int addWrite_TST_RTUS_WR(int value)
{
return addWrite(ID_TST_RTUS_WR, &value);
}


int getStatus_TST_RTUS_WR()
{
return getStatus(ID_TST_RTUS_WR);
}


int doWrite_TST_RTUS_RD(int value)
{
return doWrite(ID_TST_RTUS_RD,  &value);
}


int addWrite_TST_RTUS_RD(int value)
{
return addWrite(ID_TST_RTUS_RD, &value);
}


int getStatus_TST_RTUS_RD()
{
return getStatus(ID_TST_RTUS_RD);
}


int doWrite_TST_RTU1_WR(int value)
{
return doWrite(ID_TST_RTU1_WR,  &value);
}


int addWrite_TST_RTU1_WR(int value)
{
return addWrite(ID_TST_RTU1_WR, &value);
}


int getStatus_TST_RTU1_WR()
{
return getStatus(ID_TST_RTU1_WR);
}


int doWrite_TST_RTU1_RD(int value)
{
return doWrite(ID_TST_RTU1_RD,  &value);
}


int addWrite_TST_RTU1_RD(int value)
{
return addWrite(ID_TST_RTU1_RD, &value);
}


int getStatus_TST_RTU1_RD()
{
return getStatus(ID_TST_RTU1_RD);
}


int doWrite_TST_RTU3_WR(int value)
{
return doWrite(ID_TST_RTU3_WR,  &value);
}


int addWrite_TST_RTU3_WR(int value)
{
return addWrite(ID_TST_RTU3_WR, &value);
}


int getStatus_TST_RTU3_WR()
{
return getStatus(ID_TST_RTU3_WR);
}


int doWrite_TST_RTU3_RD(int value)
{
return doWrite(ID_TST_RTU3_RD,  &value);
}


int addWrite_TST_RTU3_RD(int value)
{
return addWrite(ID_TST_RTU3_RD, &value);
}


int getStatus_TST_RTU3_RD()
{
return getStatus(ID_TST_RTU3_RD);
}


int doWrite_TST_CAN1_WR(int value)
{
return doWrite(ID_TST_CAN1_WR,  &value);
}


int addWrite_TST_CAN1_WR(int value)
{
return addWrite(ID_TST_CAN1_WR, &value);
}


int getStatus_TST_CAN1_WR()
{
return getStatus(ID_TST_CAN1_WR);
}


int doWrite_TST_CAN1_RD(int value)
{
return doWrite(ID_TST_CAN1_RD,  &value);
}


int addWrite_TST_CAN1_RD(int value)
{
return addWrite(ID_TST_CAN1_RD, &value);
}


int getStatus_TST_CAN1_RD()
{
return getStatus(ID_TST_CAN1_RD);
}


int doWrite_VAL_RTUS_WR(int value)
{
return doWrite(ID_VAL_RTUS_WR,  &value);
}


int addWrite_VAL_RTUS_WR(int value)
{
return addWrite(ID_VAL_RTUS_WR, &value);
}


int getStatus_VAL_RTUS_WR()
{
return getStatus(ID_VAL_RTUS_WR);
}


int doWrite_VAL_RTUS_RD(int value)
{
return doWrite(ID_VAL_RTUS_RD,  &value);
}


int addWrite_VAL_RTUS_RD(int value)
{
return addWrite(ID_VAL_RTUS_RD, &value);
}


int getStatus_VAL_RTUS_RD()
{
return getStatus(ID_VAL_RTUS_RD);
}


int doWrite_VAL_RTU1_WR(int value)
{
return doWrite(ID_VAL_RTU1_WR,  &value);
}


int addWrite_VAL_RTU1_WR(int value)
{
return addWrite(ID_VAL_RTU1_WR, &value);
}


int getStatus_VAL_RTU1_WR()
{
return getStatus(ID_VAL_RTU1_WR);
}


int doWrite_VAL_RTU1_RD(int value)
{
return doWrite(ID_VAL_RTU1_RD,  &value);
}


int addWrite_VAL_RTU1_RD(int value)
{
return addWrite(ID_VAL_RTU1_RD, &value);
}


int getStatus_VAL_RTU1_RD()
{
return getStatus(ID_VAL_RTU1_RD);
}


int doWrite_VAL_RTU3_WR(int value)
{
return doWrite(ID_VAL_RTU3_WR,  &value);
}


int addWrite_VAL_RTU3_WR(int value)
{
return addWrite(ID_VAL_RTU3_WR, &value);
}


int getStatus_VAL_RTU3_WR()
{
return getStatus(ID_VAL_RTU3_WR);
}


int doWrite_VAL_RTU3_RD(int value)
{
return doWrite(ID_VAL_RTU3_RD,  &value);
}


int addWrite_VAL_RTU3_RD(int value)
{
return addWrite(ID_VAL_RTU3_RD, &value);
}


int getStatus_VAL_RTU3_RD()
{
return getStatus(ID_VAL_RTU3_RD);
}


int doWrite_VAL_CAN1_WR(int value)
{
return doWrite(ID_VAL_CAN1_WR,  &value);
}


int addWrite_VAL_CAN1_WR(int value)
{
return addWrite(ID_VAL_CAN1_WR, &value);
}


int getStatus_VAL_CAN1_WR()
{
return getStatus(ID_VAL_CAN1_WR);
}


int doWrite_VAL_CAN1_RD(int value)
{
return doWrite(ID_VAL_CAN1_RD,  &value);
}


int addWrite_VAL_CAN1_RD(int value)
{
return addWrite(ID_VAL_CAN1_RD, &value);
}


int getStatus_VAL_CAN1_RD()
{
return getStatus(ID_VAL_CAN1_RD);
}


int doWrite_RES_RTUS_WR(int value)
{
return doWrite(ID_RES_RTUS_WR,  &value);
}


int addWrite_RES_RTUS_WR(int value)
{
return addWrite(ID_RES_RTUS_WR, &value);
}


int getStatus_RES_RTUS_WR()
{
return getStatus(ID_RES_RTUS_WR);
}


int doWrite_RES_RTUS_RD(int value)
{
return doWrite(ID_RES_RTUS_RD,  &value);
}


int addWrite_RES_RTUS_RD(int value)
{
return addWrite(ID_RES_RTUS_RD, &value);
}


int getStatus_RES_RTUS_RD()
{
return getStatus(ID_RES_RTUS_RD);
}


int doWrite_RES_RTU1_WR(int value)
{
return doWrite(ID_RES_RTU1_WR,  &value);
}


int addWrite_RES_RTU1_WR(int value)
{
return addWrite(ID_RES_RTU1_WR, &value);
}


int getStatus_RES_RTU1_WR()
{
return getStatus(ID_RES_RTU1_WR);
}


int doWrite_RES_RTU1_RD(int value)
{
return doWrite(ID_RES_RTU1_RD,  &value);
}


int addWrite_RES_RTU1_RD(int value)
{
return addWrite(ID_RES_RTU1_RD, &value);
}


int getStatus_RES_RTU1_RD()
{
return getStatus(ID_RES_RTU1_RD);
}


int doWrite_RES_RTU3_WR(int value)
{
return doWrite(ID_RES_RTU3_WR,  &value);
}


int addWrite_RES_RTU3_WR(int value)
{
return addWrite(ID_RES_RTU3_WR, &value);
}


int getStatus_RES_RTU3_WR()
{
return getStatus(ID_RES_RTU3_WR);
}


int doWrite_RES_RTU3_RD(int value)
{
return doWrite(ID_RES_RTU3_RD,  &value);
}


int addWrite_RES_RTU3_RD(int value)
{
return addWrite(ID_RES_RTU3_RD, &value);
}


int getStatus_RES_RTU3_RD()
{
return getStatus(ID_RES_RTU3_RD);
}


int doWrite_RES_CAN1_WR(int value)
{
return doWrite(ID_RES_CAN1_WR,  &value);
}


int addWrite_RES_CAN1_WR(int value)
{
return addWrite(ID_RES_CAN1_WR, &value);
}


int getStatus_RES_CAN1_WR()
{
return getStatus(ID_RES_CAN1_WR);
}


int doWrite_RES_CAN1_RD(int value)
{
return doWrite(ID_RES_CAN1_RD,  &value);
}


int addWrite_RES_CAN1_RD(int value)
{
return addWrite(ID_RES_CAN1_RD, &value);
}


int getStatus_RES_CAN1_RD()
{
return getStatus(ID_RES_CAN1_RD);
}


int doWrite_OK_RTUS_WR(int value)
{
return doWrite(ID_OK_RTUS_WR,  &value);
}


int addWrite_OK_RTUS_WR(int value)
{
return addWrite(ID_OK_RTUS_WR, &value);
}


int getStatus_OK_RTUS_WR()
{
return getStatus(ID_OK_RTUS_WR);
}


int doWrite_OK_RTUS_RD(int value)
{
return doWrite(ID_OK_RTUS_RD,  &value);
}


int addWrite_OK_RTUS_RD(int value)
{
return addWrite(ID_OK_RTUS_RD, &value);
}


int getStatus_OK_RTUS_RD()
{
return getStatus(ID_OK_RTUS_RD);
}


int doWrite_OK_RTU1_WR(int value)
{
return doWrite(ID_OK_RTU1_WR,  &value);
}


int addWrite_OK_RTU1_WR(int value)
{
return addWrite(ID_OK_RTU1_WR, &value);
}


int getStatus_OK_RTU1_WR()
{
return getStatus(ID_OK_RTU1_WR);
}


int doWrite_OK_RTU1_RD(int value)
{
return doWrite(ID_OK_RTU1_RD,  &value);
}


int addWrite_OK_RTU1_RD(int value)
{
return addWrite(ID_OK_RTU1_RD, &value);
}


int getStatus_OK_RTU1_RD()
{
return getStatus(ID_OK_RTU1_RD);
}


int doWrite_OK_RTU3_WR(int value)
{
return doWrite(ID_OK_RTU3_WR,  &value);
}


int addWrite_OK_RTU3_WR(int value)
{
return addWrite(ID_OK_RTU3_WR, &value);
}


int getStatus_OK_RTU3_WR()
{
return getStatus(ID_OK_RTU3_WR);
}


int doWrite_OK_RTU3_RD(int value)
{
return doWrite(ID_OK_RTU3_RD,  &value);
}


int addWrite_OK_RTU3_RD(int value)
{
return addWrite(ID_OK_RTU3_RD, &value);
}


int getStatus_OK_RTU3_RD()
{
return getStatus(ID_OK_RTU3_RD);
}


int doWrite_OK_CAN1_WR(int value)
{
return doWrite(ID_OK_CAN1_WR,  &value);
}


int addWrite_OK_CAN1_WR(int value)
{
return addWrite(ID_OK_CAN1_WR, &value);
}


int getStatus_OK_CAN1_WR()
{
return getStatus(ID_OK_CAN1_WR);
}


int doWrite_OK_CAN1_RD(int value)
{
return doWrite(ID_OK_CAN1_RD,  &value);
}


int addWrite_OK_CAN1_RD(int value)
{
return addWrite(ID_OK_CAN1_RD, &value);
}


int getStatus_OK_CAN1_RD()
{
return getStatus(ID_OK_CAN1_RD);
}


int doWrite_TEST2_COMMAND(u_int16_t value)
{
return doWrite(ID_TEST2_COMMAND,  &value);
}


int addWrite_TEST2_COMMAND(u_int16_t value)
{
return addWrite(ID_TEST2_COMMAND, &value);
}


int getStatus_TEST2_COMMAND()
{
return getStatus(ID_TEST2_COMMAND);
}


int doWrite_TST2_DigIn_1(int value)
{
return doWrite(ID_TST2_DigIn_1,  &value);
}


int addWrite_TST2_DigIn_1(int value)
{
return addWrite(ID_TST2_DigIn_1, &value);
}


int getStatus_TST2_DigIn_1()
{
return getStatus(ID_TST2_DigIn_1);
}


int doWrite_TST2_DigIn_2(int value)
{
return doWrite(ID_TST2_DigIn_2,  &value);
}


int addWrite_TST2_DigIn_2(int value)
{
return addWrite(ID_TST2_DigIn_2, &value);
}


int getStatus_TST2_DigIn_2()
{
return getStatus(ID_TST2_DigIn_2);
}


int doWrite_TST2_DigIn_3(int value)
{
return doWrite(ID_TST2_DigIn_3,  &value);
}


int addWrite_TST2_DigIn_3(int value)
{
return addWrite(ID_TST2_DigIn_3, &value);
}


int getStatus_TST2_DigIn_3()
{
return getStatus(ID_TST2_DigIn_3);
}


int doWrite_TST2_DigIn_4(int value)
{
return doWrite(ID_TST2_DigIn_4,  &value);
}


int addWrite_TST2_DigIn_4(int value)
{
return addWrite(ID_TST2_DigIn_4, &value);
}


int getStatus_TST2_DigIn_4()
{
return getStatus(ID_TST2_DigIn_4);
}


int doWrite_TST2_DigIn_5(int value)
{
return doWrite(ID_TST2_DigIn_5,  &value);
}


int addWrite_TST2_DigIn_5(int value)
{
return addWrite(ID_TST2_DigIn_5, &value);
}


int getStatus_TST2_DigIn_5()
{
return getStatus(ID_TST2_DigIn_5);
}


int doWrite_TST2_DigIn_6(int value)
{
return doWrite(ID_TST2_DigIn_6,  &value);
}


int addWrite_TST2_DigIn_6(int value)
{
return addWrite(ID_TST2_DigIn_6, &value);
}


int getStatus_TST2_DigIn_6()
{
return getStatus(ID_TST2_DigIn_6);
}


int doWrite_TST2_DigIn_7(int value)
{
return doWrite(ID_TST2_DigIn_7,  &value);
}


int addWrite_TST2_DigIn_7(int value)
{
return addWrite(ID_TST2_DigIn_7, &value);
}


int getStatus_TST2_DigIn_7()
{
return getStatus(ID_TST2_DigIn_7);
}


int doWrite_TST2_DigIn_8(int value)
{
return doWrite(ID_TST2_DigIn_8,  &value);
}


int addWrite_TST2_DigIn_8(int value)
{
return addWrite(ID_TST2_DigIn_8, &value);
}


int getStatus_TST2_DigIn_8()
{
return getStatus(ID_TST2_DigIn_8);
}


int doWrite_TST2_DigIn_9(int value)
{
return doWrite(ID_TST2_DigIn_9,  &value);
}


int addWrite_TST2_DigIn_9(int value)
{
return addWrite(ID_TST2_DigIn_9, &value);
}


int getStatus_TST2_DigIn_9()
{
return getStatus(ID_TST2_DigIn_9);
}


int doWrite_TST2_DigIn_10(int value)
{
return doWrite(ID_TST2_DigIn_10,  &value);
}


int addWrite_TST2_DigIn_10(int value)
{
return addWrite(ID_TST2_DigIn_10, &value);
}


int getStatus_TST2_DigIn_10()
{
return getStatus(ID_TST2_DigIn_10);
}


int doWrite_TST2_DigIn_11(int value)
{
return doWrite(ID_TST2_DigIn_11,  &value);
}


int addWrite_TST2_DigIn_11(int value)
{
return addWrite(ID_TST2_DigIn_11, &value);
}


int getStatus_TST2_DigIn_11()
{
return getStatus(ID_TST2_DigIn_11);
}


int doWrite_TST2_DigIn_12(int value)
{
return doWrite(ID_TST2_DigIn_12,  &value);
}


int addWrite_TST2_DigIn_12(int value)
{
return addWrite(ID_TST2_DigIn_12, &value);
}


int getStatus_TST2_DigIn_12()
{
return getStatus(ID_TST2_DigIn_12);
}


int doWrite_TST2_DigIn_13(int value)
{
return doWrite(ID_TST2_DigIn_13,  &value);
}


int addWrite_TST2_DigIn_13(int value)
{
return addWrite(ID_TST2_DigIn_13, &value);
}


int getStatus_TST2_DigIn_13()
{
return getStatus(ID_TST2_DigIn_13);
}


int doWrite_TST2_DigIn_14(int value)
{
return doWrite(ID_TST2_DigIn_14,  &value);
}


int addWrite_TST2_DigIn_14(int value)
{
return addWrite(ID_TST2_DigIn_14, &value);
}


int getStatus_TST2_DigIn_14()
{
return getStatus(ID_TST2_DigIn_14);
}


int doWrite_TST2_DigIn_15(int value)
{
return doWrite(ID_TST2_DigIn_15,  &value);
}


int addWrite_TST2_DigIn_15(int value)
{
return addWrite(ID_TST2_DigIn_15, &value);
}


int getStatus_TST2_DigIn_15()
{
return getStatus(ID_TST2_DigIn_15);
}


int doWrite_TST2_DigIn_16(int value)
{
return doWrite(ID_TST2_DigIn_16,  &value);
}


int addWrite_TST2_DigIn_16(int value)
{
return addWrite(ID_TST2_DigIn_16, &value);
}


int getStatus_TST2_DigIn_16()
{
return getStatus(ID_TST2_DigIn_16);
}


int doWrite_VAL2_DigIn_1(int value)
{
return doWrite(ID_VAL2_DigIn_1,  &value);
}


int addWrite_VAL2_DigIn_1(int value)
{
return addWrite(ID_VAL2_DigIn_1, &value);
}


int getStatus_VAL2_DigIn_1()
{
return getStatus(ID_VAL2_DigIn_1);
}


int doWrite_VAL2_DigIn_2(int value)
{
return doWrite(ID_VAL2_DigIn_2,  &value);
}


int addWrite_VAL2_DigIn_2(int value)
{
return addWrite(ID_VAL2_DigIn_2, &value);
}


int getStatus_VAL2_DigIn_2()
{
return getStatus(ID_VAL2_DigIn_2);
}


int doWrite_VAL2_DigIn_3(int value)
{
return doWrite(ID_VAL2_DigIn_3,  &value);
}


int addWrite_VAL2_DigIn_3(int value)
{
return addWrite(ID_VAL2_DigIn_3, &value);
}


int getStatus_VAL2_DigIn_3()
{
return getStatus(ID_VAL2_DigIn_3);
}


int doWrite_VAL2_DigIn_4(int value)
{
return doWrite(ID_VAL2_DigIn_4,  &value);
}


int addWrite_VAL2_DigIn_4(int value)
{
return addWrite(ID_VAL2_DigIn_4, &value);
}


int getStatus_VAL2_DigIn_4()
{
return getStatus(ID_VAL2_DigIn_4);
}


int doWrite_VAL2_DigIn_5(int value)
{
return doWrite(ID_VAL2_DigIn_5,  &value);
}


int addWrite_VAL2_DigIn_5(int value)
{
return addWrite(ID_VAL2_DigIn_5, &value);
}


int getStatus_VAL2_DigIn_5()
{
return getStatus(ID_VAL2_DigIn_5);
}


int doWrite_VAL2_DigIn_6(int value)
{
return doWrite(ID_VAL2_DigIn_6,  &value);
}


int addWrite_VAL2_DigIn_6(int value)
{
return addWrite(ID_VAL2_DigIn_6, &value);
}


int getStatus_VAL2_DigIn_6()
{
return getStatus(ID_VAL2_DigIn_6);
}


int doWrite_VAL2_DigIn_7(int value)
{
return doWrite(ID_VAL2_DigIn_7,  &value);
}


int addWrite_VAL2_DigIn_7(int value)
{
return addWrite(ID_VAL2_DigIn_7, &value);
}


int getStatus_VAL2_DigIn_7()
{
return getStatus(ID_VAL2_DigIn_7);
}


int doWrite_VAL2_DigIn_8(int value)
{
return doWrite(ID_VAL2_DigIn_8,  &value);
}


int addWrite_VAL2_DigIn_8(int value)
{
return addWrite(ID_VAL2_DigIn_8, &value);
}


int getStatus_VAL2_DigIn_8()
{
return getStatus(ID_VAL2_DigIn_8);
}


int doWrite_VAL2_DigIn_9(int value)
{
return doWrite(ID_VAL2_DigIn_9,  &value);
}


int addWrite_VAL2_DigIn_9(int value)
{
return addWrite(ID_VAL2_DigIn_9, &value);
}


int getStatus_VAL2_DigIn_9()
{
return getStatus(ID_VAL2_DigIn_9);
}


int doWrite_VAL2_DigIn_10(int value)
{
return doWrite(ID_VAL2_DigIn_10,  &value);
}


int addWrite_VAL2_DigIn_10(int value)
{
return addWrite(ID_VAL2_DigIn_10, &value);
}


int getStatus_VAL2_DigIn_10()
{
return getStatus(ID_VAL2_DigIn_10);
}


int doWrite_VAL2_DigIn_11(int value)
{
return doWrite(ID_VAL2_DigIn_11,  &value);
}


int addWrite_VAL2_DigIn_11(int value)
{
return addWrite(ID_VAL2_DigIn_11, &value);
}


int getStatus_VAL2_DigIn_11()
{
return getStatus(ID_VAL2_DigIn_11);
}


int doWrite_VAL2_DigIn_12(int value)
{
return doWrite(ID_VAL2_DigIn_12,  &value);
}


int addWrite_VAL2_DigIn_12(int value)
{
return addWrite(ID_VAL2_DigIn_12, &value);
}


int getStatus_VAL2_DigIn_12()
{
return getStatus(ID_VAL2_DigIn_12);
}


int doWrite_VAL2_DigIn_13(int value)
{
return doWrite(ID_VAL2_DigIn_13,  &value);
}


int addWrite_VAL2_DigIn_13(int value)
{
return addWrite(ID_VAL2_DigIn_13, &value);
}


int getStatus_VAL2_DigIn_13()
{
return getStatus(ID_VAL2_DigIn_13);
}


int doWrite_VAL2_DigIn_14(int value)
{
return doWrite(ID_VAL2_DigIn_14,  &value);
}


int addWrite_VAL2_DigIn_14(int value)
{
return addWrite(ID_VAL2_DigIn_14, &value);
}


int getStatus_VAL2_DigIn_14()
{
return getStatus(ID_VAL2_DigIn_14);
}


int doWrite_VAL2_DigIn_15(int value)
{
return doWrite(ID_VAL2_DigIn_15,  &value);
}


int addWrite_VAL2_DigIn_15(int value)
{
return addWrite(ID_VAL2_DigIn_15, &value);
}


int getStatus_VAL2_DigIn_15()
{
return getStatus(ID_VAL2_DigIn_15);
}


int doWrite_VAL2_DigIn_16(int value)
{
return doWrite(ID_VAL2_DigIn_16,  &value);
}


int addWrite_VAL2_DigIn_16(int value)
{
return addWrite(ID_VAL2_DigIn_16, &value);
}


int getStatus_VAL2_DigIn_16()
{
return getStatus(ID_VAL2_DigIn_16);
}


int doWrite_RES2_DigIn_1(int value)
{
return doWrite(ID_RES2_DigIn_1,  &value);
}


int addWrite_RES2_DigIn_1(int value)
{
return addWrite(ID_RES2_DigIn_1, &value);
}


int getStatus_RES2_DigIn_1()
{
return getStatus(ID_RES2_DigIn_1);
}


int doWrite_RES2_DigIn_2(int value)
{
return doWrite(ID_RES2_DigIn_2,  &value);
}


int addWrite_RES2_DigIn_2(int value)
{
return addWrite(ID_RES2_DigIn_2, &value);
}


int getStatus_RES2_DigIn_2()
{
return getStatus(ID_RES2_DigIn_2);
}


int doWrite_RES2_DigIn_3(int value)
{
return doWrite(ID_RES2_DigIn_3,  &value);
}


int addWrite_RES2_DigIn_3(int value)
{
return addWrite(ID_RES2_DigIn_3, &value);
}


int getStatus_RES2_DigIn_3()
{
return getStatus(ID_RES2_DigIn_3);
}


int doWrite_RES2_DigIn_4(int value)
{
return doWrite(ID_RES2_DigIn_4,  &value);
}


int addWrite_RES2_DigIn_4(int value)
{
return addWrite(ID_RES2_DigIn_4, &value);
}


int getStatus_RES2_DigIn_4()
{
return getStatus(ID_RES2_DigIn_4);
}


int doWrite_RES2_DigIn_5(int value)
{
return doWrite(ID_RES2_DigIn_5,  &value);
}


int addWrite_RES2_DigIn_5(int value)
{
return addWrite(ID_RES2_DigIn_5, &value);
}


int getStatus_RES2_DigIn_5()
{
return getStatus(ID_RES2_DigIn_5);
}


int doWrite_RES2_DigIn_6(int value)
{
return doWrite(ID_RES2_DigIn_6,  &value);
}


int addWrite_RES2_DigIn_6(int value)
{
return addWrite(ID_RES2_DigIn_6, &value);
}


int getStatus_RES2_DigIn_6()
{
return getStatus(ID_RES2_DigIn_6);
}


int doWrite_RES2_DigIn_7(int value)
{
return doWrite(ID_RES2_DigIn_7,  &value);
}


int addWrite_RES2_DigIn_7(int value)
{
return addWrite(ID_RES2_DigIn_7, &value);
}


int getStatus_RES2_DigIn_7()
{
return getStatus(ID_RES2_DigIn_7);
}


int doWrite_RES2_DigIn_8(int value)
{
return doWrite(ID_RES2_DigIn_8,  &value);
}


int addWrite_RES2_DigIn_8(int value)
{
return addWrite(ID_RES2_DigIn_8, &value);
}


int getStatus_RES2_DigIn_8()
{
return getStatus(ID_RES2_DigIn_8);
}


int doWrite_RES2_DigIn_9(int value)
{
return doWrite(ID_RES2_DigIn_9,  &value);
}


int addWrite_RES2_DigIn_9(int value)
{
return addWrite(ID_RES2_DigIn_9, &value);
}


int getStatus_RES2_DigIn_9()
{
return getStatus(ID_RES2_DigIn_9);
}


int doWrite_RES2_DigIn_10(int value)
{
return doWrite(ID_RES2_DigIn_10,  &value);
}


int addWrite_RES2_DigIn_10(int value)
{
return addWrite(ID_RES2_DigIn_10, &value);
}


int getStatus_RES2_DigIn_10()
{
return getStatus(ID_RES2_DigIn_10);
}


int doWrite_RES2_DigIn_11(int value)
{
return doWrite(ID_RES2_DigIn_11,  &value);
}


int addWrite_RES2_DigIn_11(int value)
{
return addWrite(ID_RES2_DigIn_11, &value);
}


int getStatus_RES2_DigIn_11()
{
return getStatus(ID_RES2_DigIn_11);
}


int doWrite_RES2_DigIn_12(int value)
{
return doWrite(ID_RES2_DigIn_12,  &value);
}


int addWrite_RES2_DigIn_12(int value)
{
return addWrite(ID_RES2_DigIn_12, &value);
}


int getStatus_RES2_DigIn_12()
{
return getStatus(ID_RES2_DigIn_12);
}


int doWrite_RES2_DigIn_13(int value)
{
return doWrite(ID_RES2_DigIn_13,  &value);
}


int addWrite_RES2_DigIn_13(int value)
{
return addWrite(ID_RES2_DigIn_13, &value);
}


int getStatus_RES2_DigIn_13()
{
return getStatus(ID_RES2_DigIn_13);
}


int doWrite_RES2_DigIn_14(int value)
{
return doWrite(ID_RES2_DigIn_14,  &value);
}


int addWrite_RES2_DigIn_14(int value)
{
return addWrite(ID_RES2_DigIn_14, &value);
}


int getStatus_RES2_DigIn_14()
{
return getStatus(ID_RES2_DigIn_14);
}


int doWrite_RES2_DigIn_15(int value)
{
return doWrite(ID_RES2_DigIn_15,  &value);
}


int addWrite_RES2_DigIn_15(int value)
{
return addWrite(ID_RES2_DigIn_15, &value);
}


int getStatus_RES2_DigIn_15()
{
return getStatus(ID_RES2_DigIn_15);
}


int doWrite_RES2_DigIn_16(int value)
{
return doWrite(ID_RES2_DigIn_16,  &value);
}


int addWrite_RES2_DigIn_16(int value)
{
return addWrite(ID_RES2_DigIn_16, &value);
}


int getStatus_RES2_DigIn_16()
{
return getStatus(ID_RES2_DigIn_16);
}


int doWrite_TST2_DigOut_1(int value)
{
return doWrite(ID_TST2_DigOut_1,  &value);
}


int addWrite_TST2_DigOut_1(int value)
{
return addWrite(ID_TST2_DigOut_1, &value);
}


int getStatus_TST2_DigOut_1()
{
return getStatus(ID_TST2_DigOut_1);
}


int doWrite_TST2_DigOut_2(int value)
{
return doWrite(ID_TST2_DigOut_2,  &value);
}


int addWrite_TST2_DigOut_2(int value)
{
return addWrite(ID_TST2_DigOut_2, &value);
}


int getStatus_TST2_DigOut_2()
{
return getStatus(ID_TST2_DigOut_2);
}


int doWrite_TST2_DigOut_3(int value)
{
return doWrite(ID_TST2_DigOut_3,  &value);
}


int addWrite_TST2_DigOut_3(int value)
{
return addWrite(ID_TST2_DigOut_3, &value);
}


int getStatus_TST2_DigOut_3()
{
return getStatus(ID_TST2_DigOut_3);
}


int doWrite_TST2_DigOut_4(int value)
{
return doWrite(ID_TST2_DigOut_4,  &value);
}


int addWrite_TST2_DigOut_4(int value)
{
return addWrite(ID_TST2_DigOut_4, &value);
}


int getStatus_TST2_DigOut_4()
{
return getStatus(ID_TST2_DigOut_4);
}


int doWrite_TST2_DigOut_5(int value)
{
return doWrite(ID_TST2_DigOut_5,  &value);
}


int addWrite_TST2_DigOut_5(int value)
{
return addWrite(ID_TST2_DigOut_5, &value);
}


int getStatus_TST2_DigOut_5()
{
return getStatus(ID_TST2_DigOut_5);
}


int doWrite_TST2_DigOut_6(int value)
{
return doWrite(ID_TST2_DigOut_6,  &value);
}


int addWrite_TST2_DigOut_6(int value)
{
return addWrite(ID_TST2_DigOut_6, &value);
}


int getStatus_TST2_DigOut_6()
{
return getStatus(ID_TST2_DigOut_6);
}


int doWrite_TST2_DigOut_7(int value)
{
return doWrite(ID_TST2_DigOut_7,  &value);
}


int addWrite_TST2_DigOut_7(int value)
{
return addWrite(ID_TST2_DigOut_7, &value);
}


int getStatus_TST2_DigOut_7()
{
return getStatus(ID_TST2_DigOut_7);
}


int doWrite_TST2_DigOut_8(int value)
{
return doWrite(ID_TST2_DigOut_8,  &value);
}


int addWrite_TST2_DigOut_8(int value)
{
return addWrite(ID_TST2_DigOut_8, &value);
}


int getStatus_TST2_DigOut_8()
{
return getStatus(ID_TST2_DigOut_8);
}


int doWrite_TST2_DigOut_9(int value)
{
return doWrite(ID_TST2_DigOut_9,  &value);
}


int addWrite_TST2_DigOut_9(int value)
{
return addWrite(ID_TST2_DigOut_9, &value);
}


int getStatus_TST2_DigOut_9()
{
return getStatus(ID_TST2_DigOut_9);
}


int doWrite_TST2_DigOut_10(int value)
{
return doWrite(ID_TST2_DigOut_10,  &value);
}


int addWrite_TST2_DigOut_10(int value)
{
return addWrite(ID_TST2_DigOut_10, &value);
}


int getStatus_TST2_DigOut_10()
{
return getStatus(ID_TST2_DigOut_10);
}


int doWrite_TST2_DigOut_11(int value)
{
return doWrite(ID_TST2_DigOut_11,  &value);
}


int addWrite_TST2_DigOut_11(int value)
{
return addWrite(ID_TST2_DigOut_11, &value);
}


int getStatus_TST2_DigOut_11()
{
return getStatus(ID_TST2_DigOut_11);
}


int doWrite_TST2_DigOut_12(int value)
{
return doWrite(ID_TST2_DigOut_12,  &value);
}


int addWrite_TST2_DigOut_12(int value)
{
return addWrite(ID_TST2_DigOut_12, &value);
}


int getStatus_TST2_DigOut_12()
{
return getStatus(ID_TST2_DigOut_12);
}


int doWrite_TST2_DigOut_13(int value)
{
return doWrite(ID_TST2_DigOut_13,  &value);
}


int addWrite_TST2_DigOut_13(int value)
{
return addWrite(ID_TST2_DigOut_13, &value);
}


int getStatus_TST2_DigOut_13()
{
return getStatus(ID_TST2_DigOut_13);
}


int doWrite_TST2_DigOut_14(int value)
{
return doWrite(ID_TST2_DigOut_14,  &value);
}


int addWrite_TST2_DigOut_14(int value)
{
return addWrite(ID_TST2_DigOut_14, &value);
}


int getStatus_TST2_DigOut_14()
{
return getStatus(ID_TST2_DigOut_14);
}


int doWrite_TST2_DigOut_15(int value)
{
return doWrite(ID_TST2_DigOut_15,  &value);
}


int addWrite_TST2_DigOut_15(int value)
{
return addWrite(ID_TST2_DigOut_15, &value);
}


int getStatus_TST2_DigOut_15()
{
return getStatus(ID_TST2_DigOut_15);
}


int doWrite_TST2_DigOut_16(int value)
{
return doWrite(ID_TST2_DigOut_16,  &value);
}


int addWrite_TST2_DigOut_16(int value)
{
return addWrite(ID_TST2_DigOut_16, &value);
}


int getStatus_TST2_DigOut_16()
{
return getStatus(ID_TST2_DigOut_16);
}


int doWrite_VAL2_DigOut_1(int value)
{
return doWrite(ID_VAL2_DigOut_1,  &value);
}


int addWrite_VAL2_DigOut_1(int value)
{
return addWrite(ID_VAL2_DigOut_1, &value);
}


int getStatus_VAL2_DigOut_1()
{
return getStatus(ID_VAL2_DigOut_1);
}


int doWrite_VAL2_DigOut_2(int value)
{
return doWrite(ID_VAL2_DigOut_2,  &value);
}


int addWrite_VAL2_DigOut_2(int value)
{
return addWrite(ID_VAL2_DigOut_2, &value);
}


int getStatus_VAL2_DigOut_2()
{
return getStatus(ID_VAL2_DigOut_2);
}


int doWrite_VAL2_DigOut_3(int value)
{
return doWrite(ID_VAL2_DigOut_3,  &value);
}


int addWrite_VAL2_DigOut_3(int value)
{
return addWrite(ID_VAL2_DigOut_3, &value);
}


int getStatus_VAL2_DigOut_3()
{
return getStatus(ID_VAL2_DigOut_3);
}


int doWrite_VAL2_DigOut_4(int value)
{
return doWrite(ID_VAL2_DigOut_4,  &value);
}


int addWrite_VAL2_DigOut_4(int value)
{
return addWrite(ID_VAL2_DigOut_4, &value);
}


int getStatus_VAL2_DigOut_4()
{
return getStatus(ID_VAL2_DigOut_4);
}


int doWrite_VAL2_DigOut_5(int value)
{
return doWrite(ID_VAL2_DigOut_5,  &value);
}


int addWrite_VAL2_DigOut_5(int value)
{
return addWrite(ID_VAL2_DigOut_5, &value);
}


int getStatus_VAL2_DigOut_5()
{
return getStatus(ID_VAL2_DigOut_5);
}


int doWrite_VAL2_DigOut_6(int value)
{
return doWrite(ID_VAL2_DigOut_6,  &value);
}


int addWrite_VAL2_DigOut_6(int value)
{
return addWrite(ID_VAL2_DigOut_6, &value);
}


int getStatus_VAL2_DigOut_6()
{
return getStatus(ID_VAL2_DigOut_6);
}


int doWrite_VAL2_DigOut_7(int value)
{
return doWrite(ID_VAL2_DigOut_7,  &value);
}


int addWrite_VAL2_DigOut_7(int value)
{
return addWrite(ID_VAL2_DigOut_7, &value);
}


int getStatus_VAL2_DigOut_7()
{
return getStatus(ID_VAL2_DigOut_7);
}


int doWrite_VAL2_DigOut_8(int value)
{
return doWrite(ID_VAL2_DigOut_8,  &value);
}


int addWrite_VAL2_DigOut_8(int value)
{
return addWrite(ID_VAL2_DigOut_8, &value);
}


int getStatus_VAL2_DigOut_8()
{
return getStatus(ID_VAL2_DigOut_8);
}


int doWrite_VAL2_DigOut_9(int value)
{
return doWrite(ID_VAL2_DigOut_9,  &value);
}


int addWrite_VAL2_DigOut_9(int value)
{
return addWrite(ID_VAL2_DigOut_9, &value);
}


int getStatus_VAL2_DigOut_9()
{
return getStatus(ID_VAL2_DigOut_9);
}


int doWrite_VAL2_DigOut_10(int value)
{
return doWrite(ID_VAL2_DigOut_10,  &value);
}


int addWrite_VAL2_DigOut_10(int value)
{
return addWrite(ID_VAL2_DigOut_10, &value);
}


int getStatus_VAL2_DigOut_10()
{
return getStatus(ID_VAL2_DigOut_10);
}


int doWrite_VAL2_DigOut_11(int value)
{
return doWrite(ID_VAL2_DigOut_11,  &value);
}


int addWrite_VAL2_DigOut_11(int value)
{
return addWrite(ID_VAL2_DigOut_11, &value);
}


int getStatus_VAL2_DigOut_11()
{
return getStatus(ID_VAL2_DigOut_11);
}


int doWrite_VAL2_DigOut_12(int value)
{
return doWrite(ID_VAL2_DigOut_12,  &value);
}


int addWrite_VAL2_DigOut_12(int value)
{
return addWrite(ID_VAL2_DigOut_12, &value);
}


int getStatus_VAL2_DigOut_12()
{
return getStatus(ID_VAL2_DigOut_12);
}


int doWrite_VAL2_DigOut_13(int value)
{
return doWrite(ID_VAL2_DigOut_13,  &value);
}


int addWrite_VAL2_DigOut_13(int value)
{
return addWrite(ID_VAL2_DigOut_13, &value);
}


int getStatus_VAL2_DigOut_13()
{
return getStatus(ID_VAL2_DigOut_13);
}


int doWrite_VAL2_DigOut_14(int value)
{
return doWrite(ID_VAL2_DigOut_14,  &value);
}


int addWrite_VAL2_DigOut_14(int value)
{
return addWrite(ID_VAL2_DigOut_14, &value);
}


int getStatus_VAL2_DigOut_14()
{
return getStatus(ID_VAL2_DigOut_14);
}


int doWrite_VAL2_DigOut_15(int value)
{
return doWrite(ID_VAL2_DigOut_15,  &value);
}


int addWrite_VAL2_DigOut_15(int value)
{
return addWrite(ID_VAL2_DigOut_15, &value);
}


int getStatus_VAL2_DigOut_15()
{
return getStatus(ID_VAL2_DigOut_15);
}


int doWrite_VAL2_DigOut_16(int value)
{
return doWrite(ID_VAL2_DigOut_16,  &value);
}


int addWrite_VAL2_DigOut_16(int value)
{
return addWrite(ID_VAL2_DigOut_16, &value);
}


int getStatus_VAL2_DigOut_16()
{
return getStatus(ID_VAL2_DigOut_16);
}


int doWrite_TST2_AnIn_1(int value)
{
return doWrite(ID_TST2_AnIn_1,  &value);
}


int addWrite_TST2_AnIn_1(int value)
{
return addWrite(ID_TST2_AnIn_1, &value);
}


int getStatus_TST2_AnIn_1()
{
return getStatus(ID_TST2_AnIn_1);
}


int doWrite_TST2_AnIn_2(int value)
{
return doWrite(ID_TST2_AnIn_2,  &value);
}


int addWrite_TST2_AnIn_2(int value)
{
return addWrite(ID_TST2_AnIn_2, &value);
}


int getStatus_TST2_AnIn_2()
{
return getStatus(ID_TST2_AnIn_2);
}


int doWrite_TST2_AnIn_3(int value)
{
return doWrite(ID_TST2_AnIn_3,  &value);
}


int addWrite_TST2_AnIn_3(int value)
{
return addWrite(ID_TST2_AnIn_3, &value);
}


int getStatus_TST2_AnIn_3()
{
return getStatus(ID_TST2_AnIn_3);
}


int doWrite_TST2_AnIn_4(int value)
{
return doWrite(ID_TST2_AnIn_4,  &value);
}


int addWrite_TST2_AnIn_4(int value)
{
return addWrite(ID_TST2_AnIn_4, &value);
}


int getStatus_TST2_AnIn_4()
{
return getStatus(ID_TST2_AnIn_4);
}


int doWrite_TST2_AnIn_5(int value)
{
return doWrite(ID_TST2_AnIn_5,  &value);
}


int addWrite_TST2_AnIn_5(int value)
{
return addWrite(ID_TST2_AnIn_5, &value);
}


int getStatus_TST2_AnIn_5()
{
return getStatus(ID_TST2_AnIn_5);
}


int doWrite_TST2_AnIn_6(int value)
{
return doWrite(ID_TST2_AnIn_6,  &value);
}


int addWrite_TST2_AnIn_6(int value)
{
return addWrite(ID_TST2_AnIn_6, &value);
}


int getStatus_TST2_AnIn_6()
{
return getStatus(ID_TST2_AnIn_6);
}


int doWrite_TST2_AnIn_7(int value)
{
return doWrite(ID_TST2_AnIn_7,  &value);
}


int addWrite_TST2_AnIn_7(int value)
{
return addWrite(ID_TST2_AnIn_7, &value);
}


int getStatus_TST2_AnIn_7()
{
return getStatus(ID_TST2_AnIn_7);
}


int doWrite_TST2_AnIn_8(int value)
{
return doWrite(ID_TST2_AnIn_8,  &value);
}


int addWrite_TST2_AnIn_8(int value)
{
return addWrite(ID_TST2_AnIn_8, &value);
}


int getStatus_TST2_AnIn_8()
{
return getStatus(ID_TST2_AnIn_8);
}


int doWrite_TST2_AnIn_9(int value)
{
return doWrite(ID_TST2_AnIn_9,  &value);
}


int addWrite_TST2_AnIn_9(int value)
{
return addWrite(ID_TST2_AnIn_9, &value);
}


int getStatus_TST2_AnIn_9()
{
return getStatus(ID_TST2_AnIn_9);
}


int doWrite_TST2_AnIn_10(int value)
{
return doWrite(ID_TST2_AnIn_10,  &value);
}


int addWrite_TST2_AnIn_10(int value)
{
return addWrite(ID_TST2_AnIn_10, &value);
}


int getStatus_TST2_AnIn_10()
{
return getStatus(ID_TST2_AnIn_10);
}


int doWrite_TST2_AnIn_11(int value)
{
return doWrite(ID_TST2_AnIn_11,  &value);
}


int addWrite_TST2_AnIn_11(int value)
{
return addWrite(ID_TST2_AnIn_11, &value);
}


int getStatus_TST2_AnIn_11()
{
return getStatus(ID_TST2_AnIn_11);
}


int doWrite_TST2_AnIn_12(int value)
{
return doWrite(ID_TST2_AnIn_12,  &value);
}


int addWrite_TST2_AnIn_12(int value)
{
return addWrite(ID_TST2_AnIn_12, &value);
}


int getStatus_TST2_AnIn_12()
{
return getStatus(ID_TST2_AnIn_12);
}


int doWrite_VAL2_AnIn_1(int16_t value)
{
return doWrite(ID_VAL2_AnIn_1,  &value);
}


int addWrite_VAL2_AnIn_1(int16_t value)
{
return addWrite(ID_VAL2_AnIn_1, &value);
}


int getStatus_VAL2_AnIn_1()
{
return getStatus(ID_VAL2_AnIn_1);
}


int doWrite_VAL2_AnIn_2(int16_t value)
{
return doWrite(ID_VAL2_AnIn_2,  &value);
}


int addWrite_VAL2_AnIn_2(int16_t value)
{
return addWrite(ID_VAL2_AnIn_2, &value);
}


int getStatus_VAL2_AnIn_2()
{
return getStatus(ID_VAL2_AnIn_2);
}


int doWrite_VAL2_AnIn_3(int16_t value)
{
return doWrite(ID_VAL2_AnIn_3,  &value);
}


int addWrite_VAL2_AnIn_3(int16_t value)
{
return addWrite(ID_VAL2_AnIn_3, &value);
}


int getStatus_VAL2_AnIn_3()
{
return getStatus(ID_VAL2_AnIn_3);
}


int doWrite_VAL2_AnIn_4(int16_t value)
{
return doWrite(ID_VAL2_AnIn_4,  &value);
}


int addWrite_VAL2_AnIn_4(int16_t value)
{
return addWrite(ID_VAL2_AnIn_4, &value);
}


int getStatus_VAL2_AnIn_4()
{
return getStatus(ID_VAL2_AnIn_4);
}


int doWrite_VAL2_AnIn_5(int16_t value)
{
return doWrite(ID_VAL2_AnIn_5,  &value);
}


int addWrite_VAL2_AnIn_5(int16_t value)
{
return addWrite(ID_VAL2_AnIn_5, &value);
}


int getStatus_VAL2_AnIn_5()
{
return getStatus(ID_VAL2_AnIn_5);
}


int doWrite_VAL2_AnIn_6(int16_t value)
{
return doWrite(ID_VAL2_AnIn_6,  &value);
}


int addWrite_VAL2_AnIn_6(int16_t value)
{
return addWrite(ID_VAL2_AnIn_6, &value);
}


int getStatus_VAL2_AnIn_6()
{
return getStatus(ID_VAL2_AnIn_6);
}


int doWrite_VAL2_AnIn_7(int16_t value)
{
return doWrite(ID_VAL2_AnIn_7,  &value);
}


int addWrite_VAL2_AnIn_7(int16_t value)
{
return addWrite(ID_VAL2_AnIn_7, &value);
}


int getStatus_VAL2_AnIn_7()
{
return getStatus(ID_VAL2_AnIn_7);
}


int doWrite_VAL2_AnIn_8(int16_t value)
{
return doWrite(ID_VAL2_AnIn_8,  &value);
}


int addWrite_VAL2_AnIn_8(int16_t value)
{
return addWrite(ID_VAL2_AnIn_8, &value);
}


int getStatus_VAL2_AnIn_8()
{
return getStatus(ID_VAL2_AnIn_8);
}


int doWrite_VAL2_AnIn_9(int16_t value)
{
return doWrite(ID_VAL2_AnIn_9,  &value);
}


int addWrite_VAL2_AnIn_9(int16_t value)
{
return addWrite(ID_VAL2_AnIn_9, &value);
}


int getStatus_VAL2_AnIn_9()
{
return getStatus(ID_VAL2_AnIn_9);
}


int doWrite_VAL2_AnIn_10(int16_t value)
{
return doWrite(ID_VAL2_AnIn_10,  &value);
}


int addWrite_VAL2_AnIn_10(int16_t value)
{
return addWrite(ID_VAL2_AnIn_10, &value);
}


int getStatus_VAL2_AnIn_10()
{
return getStatus(ID_VAL2_AnIn_10);
}


int doWrite_VAL2_AnIn_11(int16_t value)
{
return doWrite(ID_VAL2_AnIn_11,  &value);
}


int addWrite_VAL2_AnIn_11(int16_t value)
{
return addWrite(ID_VAL2_AnIn_11, &value);
}


int getStatus_VAL2_AnIn_11()
{
return getStatus(ID_VAL2_AnIn_11);
}


int doWrite_VAL2_AnIn_12(int16_t value)
{
return doWrite(ID_VAL2_AnIn_12,  &value);
}


int addWrite_VAL2_AnIn_12(int16_t value)
{
return addWrite(ID_VAL2_AnIn_12, &value);
}


int getStatus_VAL2_AnIn_12()
{
return getStatus(ID_VAL2_AnIn_12);
}


int doWrite_VAL2_AnInConf_1(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_1,  &value);
}


int addWrite_VAL2_AnInConf_1(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_1, &value);
}


int getStatus_VAL2_AnInConf_1()
{
return getStatus(ID_VAL2_AnInConf_1);
}


int doWrite_VAL2_AnInConf_2(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_2,  &value);
}


int addWrite_VAL2_AnInConf_2(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_2, &value);
}


int getStatus_VAL2_AnInConf_2()
{
return getStatus(ID_VAL2_AnInConf_2);
}


int doWrite_VAL2_AnInConf_3(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_3,  &value);
}


int addWrite_VAL2_AnInConf_3(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_3, &value);
}


int getStatus_VAL2_AnInConf_3()
{
return getStatus(ID_VAL2_AnInConf_3);
}


int doWrite_VAL2_AnInConf_4(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_4,  &value);
}


int addWrite_VAL2_AnInConf_4(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_4, &value);
}


int getStatus_VAL2_AnInConf_4()
{
return getStatus(ID_VAL2_AnInConf_4);
}


int doWrite_VAL2_AnInConf_5(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_5,  &value);
}


int addWrite_VAL2_AnInConf_5(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_5, &value);
}


int getStatus_VAL2_AnInConf_5()
{
return getStatus(ID_VAL2_AnInConf_5);
}


int doWrite_VAL2_AnInConf_6(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_6,  &value);
}


int addWrite_VAL2_AnInConf_6(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_6, &value);
}


int getStatus_VAL2_AnInConf_6()
{
return getStatus(ID_VAL2_AnInConf_6);
}


int doWrite_VAL2_AnInConf_7(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_7,  &value);
}


int addWrite_VAL2_AnInConf_7(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_7, &value);
}


int getStatus_VAL2_AnInConf_7()
{
return getStatus(ID_VAL2_AnInConf_7);
}


int doWrite_VAL2_AnInConf_8(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_8,  &value);
}


int addWrite_VAL2_AnInConf_8(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_8, &value);
}


int getStatus_VAL2_AnInConf_8()
{
return getStatus(ID_VAL2_AnInConf_8);
}


int doWrite_VAL2_AnInConf_9(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_9,  &value);
}


int addWrite_VAL2_AnInConf_9(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_9, &value);
}


int getStatus_VAL2_AnInConf_9()
{
return getStatus(ID_VAL2_AnInConf_9);
}


int doWrite_VAL2_AnInConf_10(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_10,  &value);
}


int addWrite_VAL2_AnInConf_10(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_10, &value);
}


int getStatus_VAL2_AnInConf_10()
{
return getStatus(ID_VAL2_AnInConf_10);
}


int doWrite_VAL2_AnInConf_11(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_11,  &value);
}


int addWrite_VAL2_AnInConf_11(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_11, &value);
}


int getStatus_VAL2_AnInConf_11()
{
return getStatus(ID_VAL2_AnInConf_11);
}


int doWrite_VAL2_AnInConf_12(u_int16_t value)
{
return doWrite(ID_VAL2_AnInConf_12,  &value);
}


int addWrite_VAL2_AnInConf_12(u_int16_t value)
{
return addWrite(ID_VAL2_AnInConf_12, &value);
}


int getStatus_VAL2_AnInConf_12()
{
return getStatus(ID_VAL2_AnInConf_12);
}


int doWrite_VAL2_AnInFltr_1(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_1,  &value);
}


int addWrite_VAL2_AnInFltr_1(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_1, &value);
}


int getStatus_VAL2_AnInFltr_1()
{
return getStatus(ID_VAL2_AnInFltr_1);
}


int doWrite_VAL2_AnInFltr_2(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_2,  &value);
}


int addWrite_VAL2_AnInFltr_2(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_2, &value);
}


int getStatus_VAL2_AnInFltr_2()
{
return getStatus(ID_VAL2_AnInFltr_2);
}


int doWrite_VAL2_AnInFltr_3(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_3,  &value);
}


int addWrite_VAL2_AnInFltr_3(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_3, &value);
}


int getStatus_VAL2_AnInFltr_3()
{
return getStatus(ID_VAL2_AnInFltr_3);
}


int doWrite_VAL2_AnInFltr_4(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_4,  &value);
}


int addWrite_VAL2_AnInFltr_4(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_4, &value);
}


int getStatus_VAL2_AnInFltr_4()
{
return getStatus(ID_VAL2_AnInFltr_4);
}


int doWrite_VAL2_AnInFltr_5(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_5,  &value);
}


int addWrite_VAL2_AnInFltr_5(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_5, &value);
}


int getStatus_VAL2_AnInFltr_5()
{
return getStatus(ID_VAL2_AnInFltr_5);
}


int doWrite_VAL2_AnInFltr_6(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_6,  &value);
}


int addWrite_VAL2_AnInFltr_6(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_6, &value);
}


int getStatus_VAL2_AnInFltr_6()
{
return getStatus(ID_VAL2_AnInFltr_6);
}


int doWrite_VAL2_AnInFltr_7(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_7,  &value);
}


int addWrite_VAL2_AnInFltr_7(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_7, &value);
}


int getStatus_VAL2_AnInFltr_7()
{
return getStatus(ID_VAL2_AnInFltr_7);
}


int doWrite_VAL2_AnInFltr_8(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_8,  &value);
}


int addWrite_VAL2_AnInFltr_8(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_8, &value);
}


int getStatus_VAL2_AnInFltr_8()
{
return getStatus(ID_VAL2_AnInFltr_8);
}


int doWrite_VAL2_AnInFltr_9(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_9,  &value);
}


int addWrite_VAL2_AnInFltr_9(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_9, &value);
}


int getStatus_VAL2_AnInFltr_9()
{
return getStatus(ID_VAL2_AnInFltr_9);
}


int doWrite_VAL2_AnInFltr_10(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_10,  &value);
}


int addWrite_VAL2_AnInFltr_10(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_10, &value);
}


int getStatus_VAL2_AnInFltr_10()
{
return getStatus(ID_VAL2_AnInFltr_10);
}


int doWrite_VAL2_AnInFltr_11(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_11,  &value);
}


int addWrite_VAL2_AnInFltr_11(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_11, &value);
}


int getStatus_VAL2_AnInFltr_11()
{
return getStatus(ID_VAL2_AnInFltr_11);
}


int doWrite_VAL2_AnInFltr_12(u_int16_t value)
{
return doWrite(ID_VAL2_AnInFltr_12,  &value);
}


int addWrite_VAL2_AnInFltr_12(u_int16_t value)
{
return addWrite(ID_VAL2_AnInFltr_12, &value);
}


int getStatus_VAL2_AnInFltr_12()
{
return getStatus(ID_VAL2_AnInFltr_12);
}


int doWrite_RES2_AnIn_1(int16_t value)
{
return doWrite(ID_RES2_AnIn_1,  &value);
}


int addWrite_RES2_AnIn_1(int16_t value)
{
return addWrite(ID_RES2_AnIn_1, &value);
}


int getStatus_RES2_AnIn_1()
{
return getStatus(ID_RES2_AnIn_1);
}


int doWrite_RES2_AnIn_2(int16_t value)
{
return doWrite(ID_RES2_AnIn_2,  &value);
}


int addWrite_RES2_AnIn_2(int16_t value)
{
return addWrite(ID_RES2_AnIn_2, &value);
}


int getStatus_RES2_AnIn_2()
{
return getStatus(ID_RES2_AnIn_2);
}


int doWrite_RES2_AnIn_3(int16_t value)
{
return doWrite(ID_RES2_AnIn_3,  &value);
}


int addWrite_RES2_AnIn_3(int16_t value)
{
return addWrite(ID_RES2_AnIn_3, &value);
}


int getStatus_RES2_AnIn_3()
{
return getStatus(ID_RES2_AnIn_3);
}


int doWrite_RES2_AnIn_4(int16_t value)
{
return doWrite(ID_RES2_AnIn_4,  &value);
}


int addWrite_RES2_AnIn_4(int16_t value)
{
return addWrite(ID_RES2_AnIn_4, &value);
}


int getStatus_RES2_AnIn_4()
{
return getStatus(ID_RES2_AnIn_4);
}


int doWrite_RES2_AnIn_5(int16_t value)
{
return doWrite(ID_RES2_AnIn_5,  &value);
}


int addWrite_RES2_AnIn_5(int16_t value)
{
return addWrite(ID_RES2_AnIn_5, &value);
}


int getStatus_RES2_AnIn_5()
{
return getStatus(ID_RES2_AnIn_5);
}


int doWrite_RES2_AnIn_6(int16_t value)
{
return doWrite(ID_RES2_AnIn_6,  &value);
}


int addWrite_RES2_AnIn_6(int16_t value)
{
return addWrite(ID_RES2_AnIn_6, &value);
}


int getStatus_RES2_AnIn_6()
{
return getStatus(ID_RES2_AnIn_6);
}


int doWrite_RES2_AnIn_7(int16_t value)
{
return doWrite(ID_RES2_AnIn_7,  &value);
}


int addWrite_RES2_AnIn_7(int16_t value)
{
return addWrite(ID_RES2_AnIn_7, &value);
}


int getStatus_RES2_AnIn_7()
{
return getStatus(ID_RES2_AnIn_7);
}


int doWrite_RES2_AnIn_8(int16_t value)
{
return doWrite(ID_RES2_AnIn_8,  &value);
}


int addWrite_RES2_AnIn_8(int16_t value)
{
return addWrite(ID_RES2_AnIn_8, &value);
}


int getStatus_RES2_AnIn_8()
{
return getStatus(ID_RES2_AnIn_8);
}


int doWrite_RES2_AnIn_9(int16_t value)
{
return doWrite(ID_RES2_AnIn_9,  &value);
}


int addWrite_RES2_AnIn_9(int16_t value)
{
return addWrite(ID_RES2_AnIn_9, &value);
}


int getStatus_RES2_AnIn_9()
{
return getStatus(ID_RES2_AnIn_9);
}


int doWrite_RES2_AnIn_10(int16_t value)
{
return doWrite(ID_RES2_AnIn_10,  &value);
}


int addWrite_RES2_AnIn_10(int16_t value)
{
return addWrite(ID_RES2_AnIn_10, &value);
}


int getStatus_RES2_AnIn_10()
{
return getStatus(ID_RES2_AnIn_10);
}


int doWrite_RES2_AnIn_11(int16_t value)
{
return doWrite(ID_RES2_AnIn_11,  &value);
}


int addWrite_RES2_AnIn_11(int16_t value)
{
return addWrite(ID_RES2_AnIn_11, &value);
}


int getStatus_RES2_AnIn_11()
{
return getStatus(ID_RES2_AnIn_11);
}


int doWrite_RES2_AnIn_12(int16_t value)
{
return doWrite(ID_RES2_AnIn_12,  &value);
}


int addWrite_RES2_AnIn_12(int16_t value)
{
return addWrite(ID_RES2_AnIn_12, &value);
}


int getStatus_RES2_AnIn_12()
{
return getStatus(ID_RES2_AnIn_12);
}


int doWrite_RES2_AnInStts_1(int16_t value)
{
return doWrite(ID_RES2_AnInStts_1,  &value);
}


int addWrite_RES2_AnInStts_1(int16_t value)
{
return addWrite(ID_RES2_AnInStts_1, &value);
}


int getStatus_RES2_AnInStts_1()
{
return getStatus(ID_RES2_AnInStts_1);
}


int doWrite_RES2_AnInStts_2(int16_t value)
{
return doWrite(ID_RES2_AnInStts_2,  &value);
}


int addWrite_RES2_AnInStts_2(int16_t value)
{
return addWrite(ID_RES2_AnInStts_2, &value);
}


int getStatus_RES2_AnInStts_2()
{
return getStatus(ID_RES2_AnInStts_2);
}


int doWrite_RES2_AnInStts_3(int16_t value)
{
return doWrite(ID_RES2_AnInStts_3,  &value);
}


int addWrite_RES2_AnInStts_3(int16_t value)
{
return addWrite(ID_RES2_AnInStts_3, &value);
}


int getStatus_RES2_AnInStts_3()
{
return getStatus(ID_RES2_AnInStts_3);
}


int doWrite_RES2_AnInStts_4(int16_t value)
{
return doWrite(ID_RES2_AnInStts_4,  &value);
}


int addWrite_RES2_AnInStts_4(int16_t value)
{
return addWrite(ID_RES2_AnInStts_4, &value);
}


int getStatus_RES2_AnInStts_4()
{
return getStatus(ID_RES2_AnInStts_4);
}


int doWrite_RES2_AnInStts_5(int16_t value)
{
return doWrite(ID_RES2_AnInStts_5,  &value);
}


int addWrite_RES2_AnInStts_5(int16_t value)
{
return addWrite(ID_RES2_AnInStts_5, &value);
}


int getStatus_RES2_AnInStts_5()
{
return getStatus(ID_RES2_AnInStts_5);
}


int doWrite_RES2_AnInStts_6(int16_t value)
{
return doWrite(ID_RES2_AnInStts_6,  &value);
}


int addWrite_RES2_AnInStts_6(int16_t value)
{
return addWrite(ID_RES2_AnInStts_6, &value);
}


int getStatus_RES2_AnInStts_6()
{
return getStatus(ID_RES2_AnInStts_6);
}


int doWrite_RES2_AnInStts_7(int16_t value)
{
return doWrite(ID_RES2_AnInStts_7,  &value);
}


int addWrite_RES2_AnInStts_7(int16_t value)
{
return addWrite(ID_RES2_AnInStts_7, &value);
}


int getStatus_RES2_AnInStts_7()
{
return getStatus(ID_RES2_AnInStts_7);
}


int doWrite_RES2_AnInStts_8(int16_t value)
{
return doWrite(ID_RES2_AnInStts_8,  &value);
}


int addWrite_RES2_AnInStts_8(int16_t value)
{
return addWrite(ID_RES2_AnInStts_8, &value);
}


int getStatus_RES2_AnInStts_8()
{
return getStatus(ID_RES2_AnInStts_8);
}


int doWrite_RES2_AnInStts_9(int16_t value)
{
return doWrite(ID_RES2_AnInStts_9,  &value);
}


int addWrite_RES2_AnInStts_9(int16_t value)
{
return addWrite(ID_RES2_AnInStts_9, &value);
}


int getStatus_RES2_AnInStts_9()
{
return getStatus(ID_RES2_AnInStts_9);
}


int doWrite_RES2_AnInStts_10(int16_t value)
{
return doWrite(ID_RES2_AnInStts_10,  &value);
}


int addWrite_RES2_AnInStts_10(int16_t value)
{
return addWrite(ID_RES2_AnInStts_10, &value);
}


int getStatus_RES2_AnInStts_10()
{
return getStatus(ID_RES2_AnInStts_10);
}


int doWrite_RES2_AnInStts_11(int16_t value)
{
return doWrite(ID_RES2_AnInStts_11,  &value);
}


int addWrite_RES2_AnInStts_11(int16_t value)
{
return addWrite(ID_RES2_AnInStts_11, &value);
}


int getStatus_RES2_AnInStts_11()
{
return getStatus(ID_RES2_AnInStts_11);
}


int doWrite_RES2_AnInStts_12(int16_t value)
{
return doWrite(ID_RES2_AnInStts_12,  &value);
}


int addWrite_RES2_AnInStts_12(int16_t value)
{
return addWrite(ID_RES2_AnInStts_12, &value);
}


int getStatus_RES2_AnInStts_12()
{
return getStatus(ID_RES2_AnInStts_12);
}


int doWrite_TST2_AnOut_1(int value)
{
return doWrite(ID_TST2_AnOut_1,  &value);
}


int addWrite_TST2_AnOut_1(int value)
{
return addWrite(ID_TST2_AnOut_1, &value);
}


int getStatus_TST2_AnOut_1()
{
return getStatus(ID_TST2_AnOut_1);
}


int doWrite_TST2_AnOut_2(int value)
{
return doWrite(ID_TST2_AnOut_2,  &value);
}


int addWrite_TST2_AnOut_2(int value)
{
return addWrite(ID_TST2_AnOut_2, &value);
}


int getStatus_TST2_AnOut_2()
{
return getStatus(ID_TST2_AnOut_2);
}


int doWrite_TST2_AnOut_3(int value)
{
return doWrite(ID_TST2_AnOut_3,  &value);
}


int addWrite_TST2_AnOut_3(int value)
{
return addWrite(ID_TST2_AnOut_3, &value);
}


int getStatus_TST2_AnOut_3()
{
return getStatus(ID_TST2_AnOut_3);
}


int doWrite_TST2_AnOut_4(int value)
{
return doWrite(ID_TST2_AnOut_4,  &value);
}


int addWrite_TST2_AnOut_4(int value)
{
return addWrite(ID_TST2_AnOut_4, &value);
}


int getStatus_TST2_AnOut_4()
{
return getStatus(ID_TST2_AnOut_4);
}


int doWrite_VAL2_AnOut_1(int16_t value)
{
return doWrite(ID_VAL2_AnOut_1,  &value);
}


int addWrite_VAL2_AnOut_1(int16_t value)
{
return addWrite(ID_VAL2_AnOut_1, &value);
}


int getStatus_VAL2_AnOut_1()
{
return getStatus(ID_VAL2_AnOut_1);
}


int doWrite_VAL2_AnOut_2(int16_t value)
{
return doWrite(ID_VAL2_AnOut_2,  &value);
}


int addWrite_VAL2_AnOut_2(int16_t value)
{
return addWrite(ID_VAL2_AnOut_2, &value);
}


int getStatus_VAL2_AnOut_2()
{
return getStatus(ID_VAL2_AnOut_2);
}


int doWrite_VAL2_AnOut_3(int16_t value)
{
return doWrite(ID_VAL2_AnOut_3,  &value);
}


int addWrite_VAL2_AnOut_3(int16_t value)
{
return addWrite(ID_VAL2_AnOut_3, &value);
}


int getStatus_VAL2_AnOut_3()
{
return getStatus(ID_VAL2_AnOut_3);
}


int doWrite_VAL2_AnOut_4(int16_t value)
{
return doWrite(ID_VAL2_AnOut_4,  &value);
}


int addWrite_VAL2_AnOut_4(int16_t value)
{
return addWrite(ID_VAL2_AnOut_4, &value);
}


int getStatus_VAL2_AnOut_4()
{
return getStatus(ID_VAL2_AnOut_4);
}


int doWrite_VAL2_AnOutConf_1(u_int16_t value)
{
return doWrite(ID_VAL2_AnOutConf_1,  &value);
}


int addWrite_VAL2_AnOutConf_1(u_int16_t value)
{
return addWrite(ID_VAL2_AnOutConf_1, &value);
}


int getStatus_VAL2_AnOutConf_1()
{
return getStatus(ID_VAL2_AnOutConf_1);
}


int doWrite_VAL2_AnOutConf_2(u_int16_t value)
{
return doWrite(ID_VAL2_AnOutConf_2,  &value);
}


int addWrite_VAL2_AnOutConf_2(u_int16_t value)
{
return addWrite(ID_VAL2_AnOutConf_2, &value);
}


int getStatus_VAL2_AnOutConf_2()
{
return getStatus(ID_VAL2_AnOutConf_2);
}


int doWrite_VAL2_AnOutConf_3(u_int16_t value)
{
return doWrite(ID_VAL2_AnOutConf_3,  &value);
}


int addWrite_VAL2_AnOutConf_3(u_int16_t value)
{
return addWrite(ID_VAL2_AnOutConf_3, &value);
}


int getStatus_VAL2_AnOutConf_3()
{
return getStatus(ID_VAL2_AnOutConf_3);
}


int doWrite_VAL2_AnOutConf_4(u_int16_t value)
{
return doWrite(ID_VAL2_AnOutConf_4,  &value);
}


int addWrite_VAL2_AnOutConf_4(u_int16_t value)
{
return addWrite(ID_VAL2_AnOutConf_4, &value);
}


int getStatus_VAL2_AnOutConf_4()
{
return getStatus(ID_VAL2_AnOutConf_4);
}


int doWrite_RES2_AnOutStts_1(int16_t value)
{
return doWrite(ID_RES2_AnOutStts_1,  &value);
}


int addWrite_RES2_AnOutStts_1(int16_t value)
{
return addWrite(ID_RES2_AnOutStts_1, &value);
}


int getStatus_RES2_AnOutStts_1()
{
return getStatus(ID_RES2_AnOutStts_1);
}


int doWrite_RES2_AnOutStts_2(int16_t value)
{
return doWrite(ID_RES2_AnOutStts_2,  &value);
}


int addWrite_RES2_AnOutStts_2(int16_t value)
{
return addWrite(ID_RES2_AnOutStts_2, &value);
}


int getStatus_RES2_AnOutStts_2()
{
return getStatus(ID_RES2_AnOutStts_2);
}


int doWrite_RES2_AnOutStts_3(int16_t value)
{
return doWrite(ID_RES2_AnOutStts_3,  &value);
}


int addWrite_RES2_AnOutStts_3(int16_t value)
{
return addWrite(ID_RES2_AnOutStts_3, &value);
}


int getStatus_RES2_AnOutStts_3()
{
return getStatus(ID_RES2_AnOutStts_3);
}


int doWrite_RES2_AnOutStts_4(int16_t value)
{
return doWrite(ID_RES2_AnOutStts_4,  &value);
}


int addWrite_RES2_AnOutStts_4(int16_t value)
{
return addWrite(ID_RES2_AnOutStts_4, &value);
}


int getStatus_RES2_AnOutStts_4()
{
return getStatus(ID_RES2_AnOutStts_4);
}


int doWrite_TST2_Tamb(int value)
{
return doWrite(ID_TST2_Tamb,  &value);
}


int addWrite_TST2_Tamb(int value)
{
return addWrite(ID_TST2_Tamb, &value);
}


int getStatus_TST2_Tamb()
{
return getStatus(ID_TST2_Tamb);
}


int doWrite_TST2_RPM(int value)
{
return doWrite(ID_TST2_RPM,  &value);
}


int addWrite_TST2_RPM(int value)
{
return addWrite(ID_TST2_RPM, &value);
}


int getStatus_TST2_RPM()
{
return getStatus(ID_TST2_RPM);
}


int doWrite_TST2_FWrevision(int value)
{
return doWrite(ID_TST2_FWrevision,  &value);
}


int addWrite_TST2_FWrevision(int value)
{
return addWrite(ID_TST2_FWrevision, &value);
}


int getStatus_TST2_FWrevision()
{
return getStatus(ID_TST2_FWrevision);
}


int doWrite_TST2_HWconfig(int value)
{
return doWrite(ID_TST2_HWconfig,  &value);
}


int addWrite_TST2_HWconfig(int value)
{
return addWrite(ID_TST2_HWconfig, &value);
}


int getStatus_TST2_HWconfig()
{
return getStatus(ID_TST2_HWconfig);
}


int doWrite_VAL2_Tamb(int16_t value)
{
return doWrite(ID_VAL2_Tamb,  &value);
}


int addWrite_VAL2_Tamb(int16_t value)
{
return addWrite(ID_VAL2_Tamb, &value);
}


int getStatus_VAL2_Tamb()
{
return getStatus(ID_VAL2_Tamb);
}


int doWrite_VAL2_RPM(u_int16_t value)
{
return doWrite(ID_VAL2_RPM,  &value);
}


int addWrite_VAL2_RPM(u_int16_t value)
{
return addWrite(ID_VAL2_RPM, &value);
}


int getStatus_VAL2_RPM()
{
return getStatus(ID_VAL2_RPM);
}


int doWrite_VAL2_FWrevision(u_int16_t value)
{
return doWrite(ID_VAL2_FWrevision,  &value);
}


int addWrite_VAL2_FWrevision(u_int16_t value)
{
return addWrite(ID_VAL2_FWrevision, &value);
}


int getStatus_VAL2_FWrevision()
{
return getStatus(ID_VAL2_FWrevision);
}


int doWrite_VAL2_HWconfig(u_int16_t value)
{
return doWrite(ID_VAL2_HWconfig,  &value);
}


int addWrite_VAL2_HWconfig(u_int16_t value)
{
return addWrite(ID_VAL2_HWconfig, &value);
}


int getStatus_VAL2_HWconfig()
{
return getStatus(ID_VAL2_HWconfig);
}


int doWrite_RES2_Tamb(int16_t value)
{
return doWrite(ID_RES2_Tamb,  &value);
}


int addWrite_RES2_Tamb(int16_t value)
{
return addWrite(ID_RES2_Tamb, &value);
}


int getStatus_RES2_Tamb()
{
return getStatus(ID_RES2_Tamb);
}


int doWrite_RES2_RPM(u_int16_t value)
{
return doWrite(ID_RES2_RPM,  &value);
}


int addWrite_RES2_RPM(u_int16_t value)
{
return addWrite(ID_RES2_RPM, &value);
}


int getStatus_RES2_RPM()
{
return getStatus(ID_RES2_RPM);
}


int doWrite_RES2_FWrevision(u_int16_t value)
{
return doWrite(ID_RES2_FWrevision,  &value);
}


int addWrite_RES2_FWrevision(u_int16_t value)
{
return addWrite(ID_RES2_FWrevision, &value);
}


int getStatus_RES2_FWrevision()
{
return getStatus(ID_RES2_FWrevision);
}


int doWrite_RES2_HWconfig(u_int16_t value)
{
return doWrite(ID_RES2_HWconfig,  &value);
}


int addWrite_RES2_HWconfig(u_int16_t value)
{
return addWrite(ID_RES2_HWconfig, &value);
}


int getStatus_RES2_HWconfig()
{
return getStatus(ID_RES2_HWconfig);
}


int doWrite_TST2_RTUS_WR(int value)
{
return doWrite(ID_TST2_RTUS_WR,  &value);
}


int addWrite_TST2_RTUS_WR(int value)
{
return addWrite(ID_TST2_RTUS_WR, &value);
}


int getStatus_TST2_RTUS_WR()
{
return getStatus(ID_TST2_RTUS_WR);
}


int doWrite_TST2_RTUS_RD(int value)
{
return doWrite(ID_TST2_RTUS_RD,  &value);
}


int addWrite_TST2_RTUS_RD(int value)
{
return addWrite(ID_TST2_RTUS_RD, &value);
}


int getStatus_TST2_RTUS_RD()
{
return getStatus(ID_TST2_RTUS_RD);
}


int doWrite_TST2_RTU1_WR(int value)
{
return doWrite(ID_TST2_RTU1_WR,  &value);
}


int addWrite_TST2_RTU1_WR(int value)
{
return addWrite(ID_TST2_RTU1_WR, &value);
}


int getStatus_TST2_RTU1_WR()
{
return getStatus(ID_TST2_RTU1_WR);
}


int doWrite_TST2_RTU1_RD(int value)
{
return doWrite(ID_TST2_RTU1_RD,  &value);
}


int addWrite_TST2_RTU1_RD(int value)
{
return addWrite(ID_TST2_RTU1_RD, &value);
}


int getStatus_TST2_RTU1_RD()
{
return getStatus(ID_TST2_RTU1_RD);
}


int doWrite_TST2_RTU3_WR(int value)
{
return doWrite(ID_TST2_RTU3_WR,  &value);
}


int addWrite_TST2_RTU3_WR(int value)
{
return addWrite(ID_TST2_RTU3_WR, &value);
}


int getStatus_TST2_RTU3_WR()
{
return getStatus(ID_TST2_RTU3_WR);
}


int doWrite_TST2_RTU3_RD(int value)
{
return doWrite(ID_TST2_RTU3_RD,  &value);
}


int addWrite_TST2_RTU3_RD(int value)
{
return addWrite(ID_TST2_RTU3_RD, &value);
}


int getStatus_TST2_RTU3_RD()
{
return getStatus(ID_TST2_RTU3_RD);
}


int doWrite_TST2_CAN1_WR(int value)
{
return doWrite(ID_TST2_CAN1_WR,  &value);
}


int addWrite_TST2_CAN1_WR(int value)
{
return addWrite(ID_TST2_CAN1_WR, &value);
}


int getStatus_TST2_CAN1_WR()
{
return getStatus(ID_TST2_CAN1_WR);
}


int doWrite_TST2_CAN1_RD(int value)
{
return doWrite(ID_TST2_CAN1_RD,  &value);
}


int addWrite_TST2_CAN1_RD(int value)
{
return addWrite(ID_TST2_CAN1_RD, &value);
}


int getStatus_TST2_CAN1_RD()
{
return getStatus(ID_TST2_CAN1_RD);
}


int doWrite_VAL2_RTUS_WR(int value)
{
return doWrite(ID_VAL2_RTUS_WR,  &value);
}


int addWrite_VAL2_RTUS_WR(int value)
{
return addWrite(ID_VAL2_RTUS_WR, &value);
}


int getStatus_VAL2_RTUS_WR()
{
return getStatus(ID_VAL2_RTUS_WR);
}


int doWrite_VAL2_RTUS_RD(int value)
{
return doWrite(ID_VAL2_RTUS_RD,  &value);
}


int addWrite_VAL2_RTUS_RD(int value)
{
return addWrite(ID_VAL2_RTUS_RD, &value);
}


int getStatus_VAL2_RTUS_RD()
{
return getStatus(ID_VAL2_RTUS_RD);
}


int doWrite_VAL2_RTU1_WR(int value)
{
return doWrite(ID_VAL2_RTU1_WR,  &value);
}


int addWrite_VAL2_RTU1_WR(int value)
{
return addWrite(ID_VAL2_RTU1_WR, &value);
}


int getStatus_VAL2_RTU1_WR()
{
return getStatus(ID_VAL2_RTU1_WR);
}


int doWrite_VAL2_RTU1_RD(int value)
{
return doWrite(ID_VAL2_RTU1_RD,  &value);
}


int addWrite_VAL2_RTU1_RD(int value)
{
return addWrite(ID_VAL2_RTU1_RD, &value);
}


int getStatus_VAL2_RTU1_RD()
{
return getStatus(ID_VAL2_RTU1_RD);
}


int doWrite_VAL2_RTU3_WR(int value)
{
return doWrite(ID_VAL2_RTU3_WR,  &value);
}


int addWrite_VAL2_RTU3_WR(int value)
{
return addWrite(ID_VAL2_RTU3_WR, &value);
}


int getStatus_VAL2_RTU3_WR()
{
return getStatus(ID_VAL2_RTU3_WR);
}


int doWrite_VAL2_RTU3_RD(int value)
{
return doWrite(ID_VAL2_RTU3_RD,  &value);
}


int addWrite_VAL2_RTU3_RD(int value)
{
return addWrite(ID_VAL2_RTU3_RD, &value);
}


int getStatus_VAL2_RTU3_RD()
{
return getStatus(ID_VAL2_RTU3_RD);
}


int doWrite_VAL2_CAN1_WR(int value)
{
return doWrite(ID_VAL2_CAN1_WR,  &value);
}


int addWrite_VAL2_CAN1_WR(int value)
{
return addWrite(ID_VAL2_CAN1_WR, &value);
}


int getStatus_VAL2_CAN1_WR()
{
return getStatus(ID_VAL2_CAN1_WR);
}


int doWrite_VAL2_CAN1_RD(int value)
{
return doWrite(ID_VAL2_CAN1_RD,  &value);
}


int addWrite_VAL2_CAN1_RD(int value)
{
return addWrite(ID_VAL2_CAN1_RD, &value);
}


int getStatus_VAL2_CAN1_RD()
{
return getStatus(ID_VAL2_CAN1_RD);
}


int doWrite_RES2_RTUS_WR(int value)
{
return doWrite(ID_RES2_RTUS_WR,  &value);
}


int addWrite_RES2_RTUS_WR(int value)
{
return addWrite(ID_RES2_RTUS_WR, &value);
}


int getStatus_RES2_RTUS_WR()
{
return getStatus(ID_RES2_RTUS_WR);
}


int doWrite_RES2_RTUS_RD(int value)
{
return doWrite(ID_RES2_RTUS_RD,  &value);
}


int addWrite_RES2_RTUS_RD(int value)
{
return addWrite(ID_RES2_RTUS_RD, &value);
}


int getStatus_RES2_RTUS_RD()
{
return getStatus(ID_RES2_RTUS_RD);
}


int doWrite_RES2_RTU1_WR(int value)
{
return doWrite(ID_RES2_RTU1_WR,  &value);
}


int addWrite_RES2_RTU1_WR(int value)
{
return addWrite(ID_RES2_RTU1_WR, &value);
}


int getStatus_RES2_RTU1_WR()
{
return getStatus(ID_RES2_RTU1_WR);
}


int doWrite_RES2_RTU1_RD(int value)
{
return doWrite(ID_RES2_RTU1_RD,  &value);
}


int addWrite_RES2_RTU1_RD(int value)
{
return addWrite(ID_RES2_RTU1_RD, &value);
}


int getStatus_RES2_RTU1_RD()
{
return getStatus(ID_RES2_RTU1_RD);
}


int doWrite_RES2_RTU3_WR(int value)
{
return doWrite(ID_RES2_RTU3_WR,  &value);
}


int addWrite_RES2_RTU3_WR(int value)
{
return addWrite(ID_RES2_RTU3_WR, &value);
}


int getStatus_RES2_RTU3_WR()
{
return getStatus(ID_RES2_RTU3_WR);
}


int doWrite_RES2_RTU3_RD(int value)
{
return doWrite(ID_RES2_RTU3_RD,  &value);
}


int addWrite_RES2_RTU3_RD(int value)
{
return addWrite(ID_RES2_RTU3_RD, &value);
}


int getStatus_RES2_RTU3_RD()
{
return getStatus(ID_RES2_RTU3_RD);
}


int doWrite_RES2_CAN1_WR(int value)
{
return doWrite(ID_RES2_CAN1_WR,  &value);
}


int addWrite_RES2_CAN1_WR(int value)
{
return addWrite(ID_RES2_CAN1_WR, &value);
}


int getStatus_RES2_CAN1_WR()
{
return getStatus(ID_RES2_CAN1_WR);
}


int doWrite_RES2_CAN1_RD(int value)
{
return doWrite(ID_RES2_CAN1_RD,  &value);
}


int addWrite_RES2_CAN1_RD(int value)
{
return addWrite(ID_RES2_CAN1_RD, &value);
}


int getStatus_RES2_CAN1_RD()
{
return getStatus(ID_RES2_CAN1_RD);
}


int doWrite_TEST2_STATUS(u_int16_t value)
{
return doWrite(ID_TEST2_STATUS,  &value);
}


int addWrite_TEST2_STATUS(u_int16_t value)
{
return addWrite(ID_TEST2_STATUS, &value);
}


int getStatus_TEST2_STATUS()
{
return getStatus(ID_TEST2_STATUS);
}


int doWrite_TESTx_COMMAND(u_int16_t value)
{
return doWrite(ID_TESTx_COMMAND,  &value);
}


int addWrite_TESTx_COMMAND(u_int16_t value)
{
return addWrite(ID_TESTx_COMMAND, &value);
}


int getStatus_TESTx_COMMAND()
{
return getStatus(ID_TESTx_COMMAND);
}


int doWrite_TSTx_DigIn_1(int value)
{
return doWrite(ID_TSTx_DigIn_1,  &value);
}


int addWrite_TSTx_DigIn_1(int value)
{
return addWrite(ID_TSTx_DigIn_1, &value);
}


int getStatus_TSTx_DigIn_1()
{
return getStatus(ID_TSTx_DigIn_1);
}


int doWrite_TSTx_DigIn_2(int value)
{
return doWrite(ID_TSTx_DigIn_2,  &value);
}


int addWrite_TSTx_DigIn_2(int value)
{
return addWrite(ID_TSTx_DigIn_2, &value);
}


int getStatus_TSTx_DigIn_2()
{
return getStatus(ID_TSTx_DigIn_2);
}


int doWrite_TSTx_DigIn_3(int value)
{
return doWrite(ID_TSTx_DigIn_3,  &value);
}


int addWrite_TSTx_DigIn_3(int value)
{
return addWrite(ID_TSTx_DigIn_3, &value);
}


int getStatus_TSTx_DigIn_3()
{
return getStatus(ID_TSTx_DigIn_3);
}


int doWrite_TSTx_DigIn_4(int value)
{
return doWrite(ID_TSTx_DigIn_4,  &value);
}


int addWrite_TSTx_DigIn_4(int value)
{
return addWrite(ID_TSTx_DigIn_4, &value);
}


int getStatus_TSTx_DigIn_4()
{
return getStatus(ID_TSTx_DigIn_4);
}


int doWrite_TSTx_DigIn_5(int value)
{
return doWrite(ID_TSTx_DigIn_5,  &value);
}


int addWrite_TSTx_DigIn_5(int value)
{
return addWrite(ID_TSTx_DigIn_5, &value);
}


int getStatus_TSTx_DigIn_5()
{
return getStatus(ID_TSTx_DigIn_5);
}


int doWrite_TSTx_DigIn_6(int value)
{
return doWrite(ID_TSTx_DigIn_6,  &value);
}


int addWrite_TSTx_DigIn_6(int value)
{
return addWrite(ID_TSTx_DigIn_6, &value);
}


int getStatus_TSTx_DigIn_6()
{
return getStatus(ID_TSTx_DigIn_6);
}


int doWrite_TSTx_DigIn_7(int value)
{
return doWrite(ID_TSTx_DigIn_7,  &value);
}


int addWrite_TSTx_DigIn_7(int value)
{
return addWrite(ID_TSTx_DigIn_7, &value);
}


int getStatus_TSTx_DigIn_7()
{
return getStatus(ID_TSTx_DigIn_7);
}


int doWrite_TSTx_DigIn_8(int value)
{
return doWrite(ID_TSTx_DigIn_8,  &value);
}


int addWrite_TSTx_DigIn_8(int value)
{
return addWrite(ID_TSTx_DigIn_8, &value);
}


int getStatus_TSTx_DigIn_8()
{
return getStatus(ID_TSTx_DigIn_8);
}


int doWrite_TSTx_DigIn_9(int value)
{
return doWrite(ID_TSTx_DigIn_9,  &value);
}


int addWrite_TSTx_DigIn_9(int value)
{
return addWrite(ID_TSTx_DigIn_9, &value);
}


int getStatus_TSTx_DigIn_9()
{
return getStatus(ID_TSTx_DigIn_9);
}


int doWrite_TSTx_DigIn_10(int value)
{
return doWrite(ID_TSTx_DigIn_10,  &value);
}


int addWrite_TSTx_DigIn_10(int value)
{
return addWrite(ID_TSTx_DigIn_10, &value);
}


int getStatus_TSTx_DigIn_10()
{
return getStatus(ID_TSTx_DigIn_10);
}


int doWrite_TSTx_DigIn_11(int value)
{
return doWrite(ID_TSTx_DigIn_11,  &value);
}


int addWrite_TSTx_DigIn_11(int value)
{
return addWrite(ID_TSTx_DigIn_11, &value);
}


int getStatus_TSTx_DigIn_11()
{
return getStatus(ID_TSTx_DigIn_11);
}


int doWrite_TSTx_DigIn_12(int value)
{
return doWrite(ID_TSTx_DigIn_12,  &value);
}


int addWrite_TSTx_DigIn_12(int value)
{
return addWrite(ID_TSTx_DigIn_12, &value);
}


int getStatus_TSTx_DigIn_12()
{
return getStatus(ID_TSTx_DigIn_12);
}


int doWrite_TSTx_DigIn_13(int value)
{
return doWrite(ID_TSTx_DigIn_13,  &value);
}


int addWrite_TSTx_DigIn_13(int value)
{
return addWrite(ID_TSTx_DigIn_13, &value);
}


int getStatus_TSTx_DigIn_13()
{
return getStatus(ID_TSTx_DigIn_13);
}


int doWrite_TSTx_DigIn_14(int value)
{
return doWrite(ID_TSTx_DigIn_14,  &value);
}


int addWrite_TSTx_DigIn_14(int value)
{
return addWrite(ID_TSTx_DigIn_14, &value);
}


int getStatus_TSTx_DigIn_14()
{
return getStatus(ID_TSTx_DigIn_14);
}


int doWrite_TSTx_DigIn_15(int value)
{
return doWrite(ID_TSTx_DigIn_15,  &value);
}


int addWrite_TSTx_DigIn_15(int value)
{
return addWrite(ID_TSTx_DigIn_15, &value);
}


int getStatus_TSTx_DigIn_15()
{
return getStatus(ID_TSTx_DigIn_15);
}


int doWrite_TSTx_DigIn_16(int value)
{
return doWrite(ID_TSTx_DigIn_16,  &value);
}


int addWrite_TSTx_DigIn_16(int value)
{
return addWrite(ID_TSTx_DigIn_16, &value);
}


int getStatus_TSTx_DigIn_16()
{
return getStatus(ID_TSTx_DigIn_16);
}


int doWrite_VALx_DigIn_1(int value)
{
return doWrite(ID_VALx_DigIn_1,  &value);
}


int addWrite_VALx_DigIn_1(int value)
{
return addWrite(ID_VALx_DigIn_1, &value);
}


int getStatus_VALx_DigIn_1()
{
return getStatus(ID_VALx_DigIn_1);
}


int doWrite_VALx_DigIn_2(int value)
{
return doWrite(ID_VALx_DigIn_2,  &value);
}


int addWrite_VALx_DigIn_2(int value)
{
return addWrite(ID_VALx_DigIn_2, &value);
}


int getStatus_VALx_DigIn_2()
{
return getStatus(ID_VALx_DigIn_2);
}


int doWrite_VALx_DigIn_3(int value)
{
return doWrite(ID_VALx_DigIn_3,  &value);
}


int addWrite_VALx_DigIn_3(int value)
{
return addWrite(ID_VALx_DigIn_3, &value);
}


int getStatus_VALx_DigIn_3()
{
return getStatus(ID_VALx_DigIn_3);
}


int doWrite_VALx_DigIn_4(int value)
{
return doWrite(ID_VALx_DigIn_4,  &value);
}


int addWrite_VALx_DigIn_4(int value)
{
return addWrite(ID_VALx_DigIn_4, &value);
}


int getStatus_VALx_DigIn_4()
{
return getStatus(ID_VALx_DigIn_4);
}


int doWrite_VALx_DigIn_5(int value)
{
return doWrite(ID_VALx_DigIn_5,  &value);
}


int addWrite_VALx_DigIn_5(int value)
{
return addWrite(ID_VALx_DigIn_5, &value);
}


int getStatus_VALx_DigIn_5()
{
return getStatus(ID_VALx_DigIn_5);
}


int doWrite_VALx_DigIn_6(int value)
{
return doWrite(ID_VALx_DigIn_6,  &value);
}


int addWrite_VALx_DigIn_6(int value)
{
return addWrite(ID_VALx_DigIn_6, &value);
}


int getStatus_VALx_DigIn_6()
{
return getStatus(ID_VALx_DigIn_6);
}


int doWrite_VALx_DigIn_7(int value)
{
return doWrite(ID_VALx_DigIn_7,  &value);
}


int addWrite_VALx_DigIn_7(int value)
{
return addWrite(ID_VALx_DigIn_7, &value);
}


int getStatus_VALx_DigIn_7()
{
return getStatus(ID_VALx_DigIn_7);
}


int doWrite_VALx_DigIn_8(int value)
{
return doWrite(ID_VALx_DigIn_8,  &value);
}


int addWrite_VALx_DigIn_8(int value)
{
return addWrite(ID_VALx_DigIn_8, &value);
}


int getStatus_VALx_DigIn_8()
{
return getStatus(ID_VALx_DigIn_8);
}


int doWrite_VALx_DigIn_9(int value)
{
return doWrite(ID_VALx_DigIn_9,  &value);
}


int addWrite_VALx_DigIn_9(int value)
{
return addWrite(ID_VALx_DigIn_9, &value);
}


int getStatus_VALx_DigIn_9()
{
return getStatus(ID_VALx_DigIn_9);
}


int doWrite_VALx_DigIn_10(int value)
{
return doWrite(ID_VALx_DigIn_10,  &value);
}


int addWrite_VALx_DigIn_10(int value)
{
return addWrite(ID_VALx_DigIn_10, &value);
}


int getStatus_VALx_DigIn_10()
{
return getStatus(ID_VALx_DigIn_10);
}


int doWrite_VALx_DigIn_11(int value)
{
return doWrite(ID_VALx_DigIn_11,  &value);
}


int addWrite_VALx_DigIn_11(int value)
{
return addWrite(ID_VALx_DigIn_11, &value);
}


int getStatus_VALx_DigIn_11()
{
return getStatus(ID_VALx_DigIn_11);
}


int doWrite_VALx_DigIn_12(int value)
{
return doWrite(ID_VALx_DigIn_12,  &value);
}


int addWrite_VALx_DigIn_12(int value)
{
return addWrite(ID_VALx_DigIn_12, &value);
}


int getStatus_VALx_DigIn_12()
{
return getStatus(ID_VALx_DigIn_12);
}


int doWrite_VALx_DigIn_13(int value)
{
return doWrite(ID_VALx_DigIn_13,  &value);
}


int addWrite_VALx_DigIn_13(int value)
{
return addWrite(ID_VALx_DigIn_13, &value);
}


int getStatus_VALx_DigIn_13()
{
return getStatus(ID_VALx_DigIn_13);
}


int doWrite_VALx_DigIn_14(int value)
{
return doWrite(ID_VALx_DigIn_14,  &value);
}


int addWrite_VALx_DigIn_14(int value)
{
return addWrite(ID_VALx_DigIn_14, &value);
}


int getStatus_VALx_DigIn_14()
{
return getStatus(ID_VALx_DigIn_14);
}


int doWrite_VALx_DigIn_15(int value)
{
return doWrite(ID_VALx_DigIn_15,  &value);
}


int addWrite_VALx_DigIn_15(int value)
{
return addWrite(ID_VALx_DigIn_15, &value);
}


int getStatus_VALx_DigIn_15()
{
return getStatus(ID_VALx_DigIn_15);
}


int doWrite_VALx_DigIn_16(int value)
{
return doWrite(ID_VALx_DigIn_16,  &value);
}


int addWrite_VALx_DigIn_16(int value)
{
return addWrite(ID_VALx_DigIn_16, &value);
}


int getStatus_VALx_DigIn_16()
{
return getStatus(ID_VALx_DigIn_16);
}


int doWrite_RESx_DigIn_1(int value)
{
return doWrite(ID_RESx_DigIn_1,  &value);
}


int addWrite_RESx_DigIn_1(int value)
{
return addWrite(ID_RESx_DigIn_1, &value);
}


int getStatus_RESx_DigIn_1()
{
return getStatus(ID_RESx_DigIn_1);
}


int doWrite_RESx_DigIn_2(int value)
{
return doWrite(ID_RESx_DigIn_2,  &value);
}


int addWrite_RESx_DigIn_2(int value)
{
return addWrite(ID_RESx_DigIn_2, &value);
}


int getStatus_RESx_DigIn_2()
{
return getStatus(ID_RESx_DigIn_2);
}


int doWrite_RESx_DigIn_3(int value)
{
return doWrite(ID_RESx_DigIn_3,  &value);
}


int addWrite_RESx_DigIn_3(int value)
{
return addWrite(ID_RESx_DigIn_3, &value);
}


int getStatus_RESx_DigIn_3()
{
return getStatus(ID_RESx_DigIn_3);
}


int doWrite_RESx_DigIn_4(int value)
{
return doWrite(ID_RESx_DigIn_4,  &value);
}


int addWrite_RESx_DigIn_4(int value)
{
return addWrite(ID_RESx_DigIn_4, &value);
}


int getStatus_RESx_DigIn_4()
{
return getStatus(ID_RESx_DigIn_4);
}


int doWrite_RESx_DigIn_5(int value)
{
return doWrite(ID_RESx_DigIn_5,  &value);
}


int addWrite_RESx_DigIn_5(int value)
{
return addWrite(ID_RESx_DigIn_5, &value);
}


int getStatus_RESx_DigIn_5()
{
return getStatus(ID_RESx_DigIn_5);
}


int doWrite_RESx_DigIn_6(int value)
{
return doWrite(ID_RESx_DigIn_6,  &value);
}


int addWrite_RESx_DigIn_6(int value)
{
return addWrite(ID_RESx_DigIn_6, &value);
}


int getStatus_RESx_DigIn_6()
{
return getStatus(ID_RESx_DigIn_6);
}


int doWrite_RESx_DigIn_7(int value)
{
return doWrite(ID_RESx_DigIn_7,  &value);
}


int addWrite_RESx_DigIn_7(int value)
{
return addWrite(ID_RESx_DigIn_7, &value);
}


int getStatus_RESx_DigIn_7()
{
return getStatus(ID_RESx_DigIn_7);
}


int doWrite_RESx_DigIn_8(int value)
{
return doWrite(ID_RESx_DigIn_8,  &value);
}


int addWrite_RESx_DigIn_8(int value)
{
return addWrite(ID_RESx_DigIn_8, &value);
}


int getStatus_RESx_DigIn_8()
{
return getStatus(ID_RESx_DigIn_8);
}


int doWrite_RESx_DigIn_9(int value)
{
return doWrite(ID_RESx_DigIn_9,  &value);
}


int addWrite_RESx_DigIn_9(int value)
{
return addWrite(ID_RESx_DigIn_9, &value);
}


int getStatus_RESx_DigIn_9()
{
return getStatus(ID_RESx_DigIn_9);
}


int doWrite_RESx_DigIn_10(int value)
{
return doWrite(ID_RESx_DigIn_10,  &value);
}


int addWrite_RESx_DigIn_10(int value)
{
return addWrite(ID_RESx_DigIn_10, &value);
}


int getStatus_RESx_DigIn_10()
{
return getStatus(ID_RESx_DigIn_10);
}


int doWrite_RESx_DigIn_11(int value)
{
return doWrite(ID_RESx_DigIn_11,  &value);
}


int addWrite_RESx_DigIn_11(int value)
{
return addWrite(ID_RESx_DigIn_11, &value);
}


int getStatus_RESx_DigIn_11()
{
return getStatus(ID_RESx_DigIn_11);
}


int doWrite_RESx_DigIn_12(int value)
{
return doWrite(ID_RESx_DigIn_12,  &value);
}


int addWrite_RESx_DigIn_12(int value)
{
return addWrite(ID_RESx_DigIn_12, &value);
}


int getStatus_RESx_DigIn_12()
{
return getStatus(ID_RESx_DigIn_12);
}


int doWrite_RESx_DigIn_13(int value)
{
return doWrite(ID_RESx_DigIn_13,  &value);
}


int addWrite_RESx_DigIn_13(int value)
{
return addWrite(ID_RESx_DigIn_13, &value);
}


int getStatus_RESx_DigIn_13()
{
return getStatus(ID_RESx_DigIn_13);
}


int doWrite_RESx_DigIn_14(int value)
{
return doWrite(ID_RESx_DigIn_14,  &value);
}


int addWrite_RESx_DigIn_14(int value)
{
return addWrite(ID_RESx_DigIn_14, &value);
}


int getStatus_RESx_DigIn_14()
{
return getStatus(ID_RESx_DigIn_14);
}


int doWrite_RESx_DigIn_15(int value)
{
return doWrite(ID_RESx_DigIn_15,  &value);
}


int addWrite_RESx_DigIn_15(int value)
{
return addWrite(ID_RESx_DigIn_15, &value);
}


int getStatus_RESx_DigIn_15()
{
return getStatus(ID_RESx_DigIn_15);
}


int doWrite_RESx_DigIn_16(int value)
{
return doWrite(ID_RESx_DigIn_16,  &value);
}


int addWrite_RESx_DigIn_16(int value)
{
return addWrite(ID_RESx_DigIn_16, &value);
}


int getStatus_RESx_DigIn_16()
{
return getStatus(ID_RESx_DigIn_16);
}


int doWrite_TSTx_DigOut_1(int value)
{
return doWrite(ID_TSTx_DigOut_1,  &value);
}


int addWrite_TSTx_DigOut_1(int value)
{
return addWrite(ID_TSTx_DigOut_1, &value);
}


int getStatus_TSTx_DigOut_1()
{
return getStatus(ID_TSTx_DigOut_1);
}


int doWrite_TSTx_DigOut_2(int value)
{
return doWrite(ID_TSTx_DigOut_2,  &value);
}


int addWrite_TSTx_DigOut_2(int value)
{
return addWrite(ID_TSTx_DigOut_2, &value);
}


int getStatus_TSTx_DigOut_2()
{
return getStatus(ID_TSTx_DigOut_2);
}


int doWrite_TSTx_DigOut_3(int value)
{
return doWrite(ID_TSTx_DigOut_3,  &value);
}


int addWrite_TSTx_DigOut_3(int value)
{
return addWrite(ID_TSTx_DigOut_3, &value);
}


int getStatus_TSTx_DigOut_3()
{
return getStatus(ID_TSTx_DigOut_3);
}


int doWrite_TSTx_DigOut_4(int value)
{
return doWrite(ID_TSTx_DigOut_4,  &value);
}


int addWrite_TSTx_DigOut_4(int value)
{
return addWrite(ID_TSTx_DigOut_4, &value);
}


int getStatus_TSTx_DigOut_4()
{
return getStatus(ID_TSTx_DigOut_4);
}


int doWrite_TSTx_DigOut_5(int value)
{
return doWrite(ID_TSTx_DigOut_5,  &value);
}


int addWrite_TSTx_DigOut_5(int value)
{
return addWrite(ID_TSTx_DigOut_5, &value);
}


int getStatus_TSTx_DigOut_5()
{
return getStatus(ID_TSTx_DigOut_5);
}


int doWrite_TSTx_DigOut_6(int value)
{
return doWrite(ID_TSTx_DigOut_6,  &value);
}


int addWrite_TSTx_DigOut_6(int value)
{
return addWrite(ID_TSTx_DigOut_6, &value);
}


int getStatus_TSTx_DigOut_6()
{
return getStatus(ID_TSTx_DigOut_6);
}


int doWrite_TSTx_DigOut_7(int value)
{
return doWrite(ID_TSTx_DigOut_7,  &value);
}


int addWrite_TSTx_DigOut_7(int value)
{
return addWrite(ID_TSTx_DigOut_7, &value);
}


int getStatus_TSTx_DigOut_7()
{
return getStatus(ID_TSTx_DigOut_7);
}


int doWrite_TSTx_DigOut_8(int value)
{
return doWrite(ID_TSTx_DigOut_8,  &value);
}


int addWrite_TSTx_DigOut_8(int value)
{
return addWrite(ID_TSTx_DigOut_8, &value);
}


int getStatus_TSTx_DigOut_8()
{
return getStatus(ID_TSTx_DigOut_8);
}


int doWrite_TSTx_DigOut_9(int value)
{
return doWrite(ID_TSTx_DigOut_9,  &value);
}


int addWrite_TSTx_DigOut_9(int value)
{
return addWrite(ID_TSTx_DigOut_9, &value);
}


int getStatus_TSTx_DigOut_9()
{
return getStatus(ID_TSTx_DigOut_9);
}


int doWrite_TSTx_DigOut_10(int value)
{
return doWrite(ID_TSTx_DigOut_10,  &value);
}


int addWrite_TSTx_DigOut_10(int value)
{
return addWrite(ID_TSTx_DigOut_10, &value);
}


int getStatus_TSTx_DigOut_10()
{
return getStatus(ID_TSTx_DigOut_10);
}


int doWrite_TSTx_DigOut_11(int value)
{
return doWrite(ID_TSTx_DigOut_11,  &value);
}


int addWrite_TSTx_DigOut_11(int value)
{
return addWrite(ID_TSTx_DigOut_11, &value);
}


int getStatus_TSTx_DigOut_11()
{
return getStatus(ID_TSTx_DigOut_11);
}


int doWrite_TSTx_DigOut_12(int value)
{
return doWrite(ID_TSTx_DigOut_12,  &value);
}


int addWrite_TSTx_DigOut_12(int value)
{
return addWrite(ID_TSTx_DigOut_12, &value);
}


int getStatus_TSTx_DigOut_12()
{
return getStatus(ID_TSTx_DigOut_12);
}


int doWrite_TSTx_DigOut_13(int value)
{
return doWrite(ID_TSTx_DigOut_13,  &value);
}


int addWrite_TSTx_DigOut_13(int value)
{
return addWrite(ID_TSTx_DigOut_13, &value);
}


int getStatus_TSTx_DigOut_13()
{
return getStatus(ID_TSTx_DigOut_13);
}


int doWrite_TSTx_DigOut_14(int value)
{
return doWrite(ID_TSTx_DigOut_14,  &value);
}


int addWrite_TSTx_DigOut_14(int value)
{
return addWrite(ID_TSTx_DigOut_14, &value);
}


int getStatus_TSTx_DigOut_14()
{
return getStatus(ID_TSTx_DigOut_14);
}


int doWrite_TSTx_DigOut_15(int value)
{
return doWrite(ID_TSTx_DigOut_15,  &value);
}


int addWrite_TSTx_DigOut_15(int value)
{
return addWrite(ID_TSTx_DigOut_15, &value);
}


int getStatus_TSTx_DigOut_15()
{
return getStatus(ID_TSTx_DigOut_15);
}


int doWrite_TSTx_DigOut_16(int value)
{
return doWrite(ID_TSTx_DigOut_16,  &value);
}


int addWrite_TSTx_DigOut_16(int value)
{
return addWrite(ID_TSTx_DigOut_16, &value);
}


int getStatus_TSTx_DigOut_16()
{
return getStatus(ID_TSTx_DigOut_16);
}


int doWrite_VALx_DigOut_1(int value)
{
return doWrite(ID_VALx_DigOut_1,  &value);
}


int addWrite_VALx_DigOut_1(int value)
{
return addWrite(ID_VALx_DigOut_1, &value);
}


int getStatus_VALx_DigOut_1()
{
return getStatus(ID_VALx_DigOut_1);
}


int doWrite_VALx_DigOut_2(int value)
{
return doWrite(ID_VALx_DigOut_2,  &value);
}


int addWrite_VALx_DigOut_2(int value)
{
return addWrite(ID_VALx_DigOut_2, &value);
}


int getStatus_VALx_DigOut_2()
{
return getStatus(ID_VALx_DigOut_2);
}


int doWrite_VALx_DigOut_3(int value)
{
return doWrite(ID_VALx_DigOut_3,  &value);
}


int addWrite_VALx_DigOut_3(int value)
{
return addWrite(ID_VALx_DigOut_3, &value);
}


int getStatus_VALx_DigOut_3()
{
return getStatus(ID_VALx_DigOut_3);
}


int doWrite_VALx_DigOut_4(int value)
{
return doWrite(ID_VALx_DigOut_4,  &value);
}


int addWrite_VALx_DigOut_4(int value)
{
return addWrite(ID_VALx_DigOut_4, &value);
}


int getStatus_VALx_DigOut_4()
{
return getStatus(ID_VALx_DigOut_4);
}


int doWrite_VALx_DigOut_5(int value)
{
return doWrite(ID_VALx_DigOut_5,  &value);
}


int addWrite_VALx_DigOut_5(int value)
{
return addWrite(ID_VALx_DigOut_5, &value);
}


int getStatus_VALx_DigOut_5()
{
return getStatus(ID_VALx_DigOut_5);
}


int doWrite_VALx_DigOut_6(int value)
{
return doWrite(ID_VALx_DigOut_6,  &value);
}


int addWrite_VALx_DigOut_6(int value)
{
return addWrite(ID_VALx_DigOut_6, &value);
}


int getStatus_VALx_DigOut_6()
{
return getStatus(ID_VALx_DigOut_6);
}


int doWrite_VALx_DigOut_7(int value)
{
return doWrite(ID_VALx_DigOut_7,  &value);
}


int addWrite_VALx_DigOut_7(int value)
{
return addWrite(ID_VALx_DigOut_7, &value);
}


int getStatus_VALx_DigOut_7()
{
return getStatus(ID_VALx_DigOut_7);
}


int doWrite_VALx_DigOut_8(int value)
{
return doWrite(ID_VALx_DigOut_8,  &value);
}


int addWrite_VALx_DigOut_8(int value)
{
return addWrite(ID_VALx_DigOut_8, &value);
}


int getStatus_VALx_DigOut_8()
{
return getStatus(ID_VALx_DigOut_8);
}


int doWrite_VALx_DigOut_9(int value)
{
return doWrite(ID_VALx_DigOut_9,  &value);
}


int addWrite_VALx_DigOut_9(int value)
{
return addWrite(ID_VALx_DigOut_9, &value);
}


int getStatus_VALx_DigOut_9()
{
return getStatus(ID_VALx_DigOut_9);
}


int doWrite_VALx_DigOut_10(int value)
{
return doWrite(ID_VALx_DigOut_10,  &value);
}


int addWrite_VALx_DigOut_10(int value)
{
return addWrite(ID_VALx_DigOut_10, &value);
}


int getStatus_VALx_DigOut_10()
{
return getStatus(ID_VALx_DigOut_10);
}


int doWrite_VALx_DigOut_11(int value)
{
return doWrite(ID_VALx_DigOut_11,  &value);
}


int addWrite_VALx_DigOut_11(int value)
{
return addWrite(ID_VALx_DigOut_11, &value);
}


int getStatus_VALx_DigOut_11()
{
return getStatus(ID_VALx_DigOut_11);
}


int doWrite_VALx_DigOut_12(int value)
{
return doWrite(ID_VALx_DigOut_12,  &value);
}


int addWrite_VALx_DigOut_12(int value)
{
return addWrite(ID_VALx_DigOut_12, &value);
}


int getStatus_VALx_DigOut_12()
{
return getStatus(ID_VALx_DigOut_12);
}


int doWrite_VALx_DigOut_13(int value)
{
return doWrite(ID_VALx_DigOut_13,  &value);
}


int addWrite_VALx_DigOut_13(int value)
{
return addWrite(ID_VALx_DigOut_13, &value);
}


int getStatus_VALx_DigOut_13()
{
return getStatus(ID_VALx_DigOut_13);
}


int doWrite_VALx_DigOut_14(int value)
{
return doWrite(ID_VALx_DigOut_14,  &value);
}


int addWrite_VALx_DigOut_14(int value)
{
return addWrite(ID_VALx_DigOut_14, &value);
}


int getStatus_VALx_DigOut_14()
{
return getStatus(ID_VALx_DigOut_14);
}


int doWrite_VALx_DigOut_15(int value)
{
return doWrite(ID_VALx_DigOut_15,  &value);
}


int addWrite_VALx_DigOut_15(int value)
{
return addWrite(ID_VALx_DigOut_15, &value);
}


int getStatus_VALx_DigOut_15()
{
return getStatus(ID_VALx_DigOut_15);
}


int doWrite_VALx_DigOut_16(int value)
{
return doWrite(ID_VALx_DigOut_16,  &value);
}


int addWrite_VALx_DigOut_16(int value)
{
return addWrite(ID_VALx_DigOut_16, &value);
}


int getStatus_VALx_DigOut_16()
{
return getStatus(ID_VALx_DigOut_16);
}


int doWrite_TSTx_AnIn_1(int value)
{
return doWrite(ID_TSTx_AnIn_1,  &value);
}


int addWrite_TSTx_AnIn_1(int value)
{
return addWrite(ID_TSTx_AnIn_1, &value);
}


int getStatus_TSTx_AnIn_1()
{
return getStatus(ID_TSTx_AnIn_1);
}


int doWrite_TSTx_AnIn_2(int value)
{
return doWrite(ID_TSTx_AnIn_2,  &value);
}


int addWrite_TSTx_AnIn_2(int value)
{
return addWrite(ID_TSTx_AnIn_2, &value);
}


int getStatus_TSTx_AnIn_2()
{
return getStatus(ID_TSTx_AnIn_2);
}


int doWrite_TSTx_AnIn_3(int value)
{
return doWrite(ID_TSTx_AnIn_3,  &value);
}


int addWrite_TSTx_AnIn_3(int value)
{
return addWrite(ID_TSTx_AnIn_3, &value);
}


int getStatus_TSTx_AnIn_3()
{
return getStatus(ID_TSTx_AnIn_3);
}


int doWrite_TSTx_AnIn_4(int value)
{
return doWrite(ID_TSTx_AnIn_4,  &value);
}


int addWrite_TSTx_AnIn_4(int value)
{
return addWrite(ID_TSTx_AnIn_4, &value);
}


int getStatus_TSTx_AnIn_4()
{
return getStatus(ID_TSTx_AnIn_4);
}


int doWrite_TSTx_AnIn_5(int value)
{
return doWrite(ID_TSTx_AnIn_5,  &value);
}


int addWrite_TSTx_AnIn_5(int value)
{
return addWrite(ID_TSTx_AnIn_5, &value);
}


int getStatus_TSTx_AnIn_5()
{
return getStatus(ID_TSTx_AnIn_5);
}


int doWrite_TSTx_AnIn_6(int value)
{
return doWrite(ID_TSTx_AnIn_6,  &value);
}


int addWrite_TSTx_AnIn_6(int value)
{
return addWrite(ID_TSTx_AnIn_6, &value);
}


int getStatus_TSTx_AnIn_6()
{
return getStatus(ID_TSTx_AnIn_6);
}


int doWrite_TSTx_AnIn_7(int value)
{
return doWrite(ID_TSTx_AnIn_7,  &value);
}


int addWrite_TSTx_AnIn_7(int value)
{
return addWrite(ID_TSTx_AnIn_7, &value);
}


int getStatus_TSTx_AnIn_7()
{
return getStatus(ID_TSTx_AnIn_7);
}


int doWrite_TSTx_AnIn_8(int value)
{
return doWrite(ID_TSTx_AnIn_8,  &value);
}


int addWrite_TSTx_AnIn_8(int value)
{
return addWrite(ID_TSTx_AnIn_8, &value);
}


int getStatus_TSTx_AnIn_8()
{
return getStatus(ID_TSTx_AnIn_8);
}


int doWrite_TSTx_AnIn_9(int value)
{
return doWrite(ID_TSTx_AnIn_9,  &value);
}


int addWrite_TSTx_AnIn_9(int value)
{
return addWrite(ID_TSTx_AnIn_9, &value);
}


int getStatus_TSTx_AnIn_9()
{
return getStatus(ID_TSTx_AnIn_9);
}


int doWrite_TSTx_AnIn_10(int value)
{
return doWrite(ID_TSTx_AnIn_10,  &value);
}


int addWrite_TSTx_AnIn_10(int value)
{
return addWrite(ID_TSTx_AnIn_10, &value);
}


int getStatus_TSTx_AnIn_10()
{
return getStatus(ID_TSTx_AnIn_10);
}


int doWrite_TSTx_AnIn_11(int value)
{
return doWrite(ID_TSTx_AnIn_11,  &value);
}


int addWrite_TSTx_AnIn_11(int value)
{
return addWrite(ID_TSTx_AnIn_11, &value);
}


int getStatus_TSTx_AnIn_11()
{
return getStatus(ID_TSTx_AnIn_11);
}


int doWrite_TSTx_AnIn_12(int value)
{
return doWrite(ID_TSTx_AnIn_12,  &value);
}


int addWrite_TSTx_AnIn_12(int value)
{
return addWrite(ID_TSTx_AnIn_12, &value);
}


int getStatus_TSTx_AnIn_12()
{
return getStatus(ID_TSTx_AnIn_12);
}


int doWrite_VALx_AnIn_1(int16_t value)
{
return doWrite(ID_VALx_AnIn_1,  &value);
}


int addWrite_VALx_AnIn_1(int16_t value)
{
return addWrite(ID_VALx_AnIn_1, &value);
}


int getStatus_VALx_AnIn_1()
{
return getStatus(ID_VALx_AnIn_1);
}


int doWrite_VALx_AnIn_2(int16_t value)
{
return doWrite(ID_VALx_AnIn_2,  &value);
}


int addWrite_VALx_AnIn_2(int16_t value)
{
return addWrite(ID_VALx_AnIn_2, &value);
}


int getStatus_VALx_AnIn_2()
{
return getStatus(ID_VALx_AnIn_2);
}


int doWrite_VALx_AnIn_3(int16_t value)
{
return doWrite(ID_VALx_AnIn_3,  &value);
}


int addWrite_VALx_AnIn_3(int16_t value)
{
return addWrite(ID_VALx_AnIn_3, &value);
}


int getStatus_VALx_AnIn_3()
{
return getStatus(ID_VALx_AnIn_3);
}


int doWrite_VALx_AnIn_4(int16_t value)
{
return doWrite(ID_VALx_AnIn_4,  &value);
}


int addWrite_VALx_AnIn_4(int16_t value)
{
return addWrite(ID_VALx_AnIn_4, &value);
}


int getStatus_VALx_AnIn_4()
{
return getStatus(ID_VALx_AnIn_4);
}


int doWrite_VALx_AnIn_5(int16_t value)
{
return doWrite(ID_VALx_AnIn_5,  &value);
}


int addWrite_VALx_AnIn_5(int16_t value)
{
return addWrite(ID_VALx_AnIn_5, &value);
}


int getStatus_VALx_AnIn_5()
{
return getStatus(ID_VALx_AnIn_5);
}


int doWrite_VALx_AnIn_6(int16_t value)
{
return doWrite(ID_VALx_AnIn_6,  &value);
}


int addWrite_VALx_AnIn_6(int16_t value)
{
return addWrite(ID_VALx_AnIn_6, &value);
}


int getStatus_VALx_AnIn_6()
{
return getStatus(ID_VALx_AnIn_6);
}


int doWrite_VALx_AnIn_7(int16_t value)
{
return doWrite(ID_VALx_AnIn_7,  &value);
}


int addWrite_VALx_AnIn_7(int16_t value)
{
return addWrite(ID_VALx_AnIn_7, &value);
}


int getStatus_VALx_AnIn_7()
{
return getStatus(ID_VALx_AnIn_7);
}


int doWrite_VALx_AnIn_8(int16_t value)
{
return doWrite(ID_VALx_AnIn_8,  &value);
}


int addWrite_VALx_AnIn_8(int16_t value)
{
return addWrite(ID_VALx_AnIn_8, &value);
}


int getStatus_VALx_AnIn_8()
{
return getStatus(ID_VALx_AnIn_8);
}


int doWrite_VALx_AnIn_9(int16_t value)
{
return doWrite(ID_VALx_AnIn_9,  &value);
}


int addWrite_VALx_AnIn_9(int16_t value)
{
return addWrite(ID_VALx_AnIn_9, &value);
}


int getStatus_VALx_AnIn_9()
{
return getStatus(ID_VALx_AnIn_9);
}


int doWrite_VALx_AnIn_10(int16_t value)
{
return doWrite(ID_VALx_AnIn_10,  &value);
}


int addWrite_VALx_AnIn_10(int16_t value)
{
return addWrite(ID_VALx_AnIn_10, &value);
}


int getStatus_VALx_AnIn_10()
{
return getStatus(ID_VALx_AnIn_10);
}


int doWrite_VALx_AnIn_11(int16_t value)
{
return doWrite(ID_VALx_AnIn_11,  &value);
}


int addWrite_VALx_AnIn_11(int16_t value)
{
return addWrite(ID_VALx_AnIn_11, &value);
}


int getStatus_VALx_AnIn_11()
{
return getStatus(ID_VALx_AnIn_11);
}


int doWrite_VALx_AnIn_12(int16_t value)
{
return doWrite(ID_VALx_AnIn_12,  &value);
}


int addWrite_VALx_AnIn_12(int16_t value)
{
return addWrite(ID_VALx_AnIn_12, &value);
}


int getStatus_VALx_AnIn_12()
{
return getStatus(ID_VALx_AnIn_12);
}


int doWrite_VALx_AnInConf_1(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_1,  &value);
}


int addWrite_VALx_AnInConf_1(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_1, &value);
}


int getStatus_VALx_AnInConf_1()
{
return getStatus(ID_VALx_AnInConf_1);
}


int doWrite_VALx_AnInConf_2(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_2,  &value);
}


int addWrite_VALx_AnInConf_2(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_2, &value);
}


int getStatus_VALx_AnInConf_2()
{
return getStatus(ID_VALx_AnInConf_2);
}


int doWrite_VALx_AnInConf_3(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_3,  &value);
}


int addWrite_VALx_AnInConf_3(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_3, &value);
}


int getStatus_VALx_AnInConf_3()
{
return getStatus(ID_VALx_AnInConf_3);
}


int doWrite_VALx_AnInConf_4(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_4,  &value);
}


int addWrite_VALx_AnInConf_4(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_4, &value);
}


int getStatus_VALx_AnInConf_4()
{
return getStatus(ID_VALx_AnInConf_4);
}


int doWrite_VALx_AnInConf_5(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_5,  &value);
}


int addWrite_VALx_AnInConf_5(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_5, &value);
}


int getStatus_VALx_AnInConf_5()
{
return getStatus(ID_VALx_AnInConf_5);
}


int doWrite_VALx_AnInConf_6(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_6,  &value);
}


int addWrite_VALx_AnInConf_6(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_6, &value);
}


int getStatus_VALx_AnInConf_6()
{
return getStatus(ID_VALx_AnInConf_6);
}


int doWrite_VALx_AnInConf_7(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_7,  &value);
}


int addWrite_VALx_AnInConf_7(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_7, &value);
}


int getStatus_VALx_AnInConf_7()
{
return getStatus(ID_VALx_AnInConf_7);
}


int doWrite_VALx_AnInConf_8(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_8,  &value);
}


int addWrite_VALx_AnInConf_8(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_8, &value);
}


int getStatus_VALx_AnInConf_8()
{
return getStatus(ID_VALx_AnInConf_8);
}


int doWrite_VALx_AnInConf_9(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_9,  &value);
}


int addWrite_VALx_AnInConf_9(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_9, &value);
}


int getStatus_VALx_AnInConf_9()
{
return getStatus(ID_VALx_AnInConf_9);
}


int doWrite_VALx_AnInConf_10(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_10,  &value);
}


int addWrite_VALx_AnInConf_10(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_10, &value);
}


int getStatus_VALx_AnInConf_10()
{
return getStatus(ID_VALx_AnInConf_10);
}


int doWrite_VALx_AnInConf_11(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_11,  &value);
}


int addWrite_VALx_AnInConf_11(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_11, &value);
}


int getStatus_VALx_AnInConf_11()
{
return getStatus(ID_VALx_AnInConf_11);
}


int doWrite_VALx_AnInConf_12(u_int16_t value)
{
return doWrite(ID_VALx_AnInConf_12,  &value);
}


int addWrite_VALx_AnInConf_12(u_int16_t value)
{
return addWrite(ID_VALx_AnInConf_12, &value);
}


int getStatus_VALx_AnInConf_12()
{
return getStatus(ID_VALx_AnInConf_12);
}


int doWrite_VALx_AnInFltr_1(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_1,  &value);
}


int addWrite_VALx_AnInFltr_1(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_1, &value);
}


int getStatus_VALx_AnInFltr_1()
{
return getStatus(ID_VALx_AnInFltr_1);
}


int doWrite_VALx_AnInFltr_2(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_2,  &value);
}


int addWrite_VALx_AnInFltr_2(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_2, &value);
}


int getStatus_VALx_AnInFltr_2()
{
return getStatus(ID_VALx_AnInFltr_2);
}


int doWrite_VALx_AnInFltr_3(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_3,  &value);
}


int addWrite_VALx_AnInFltr_3(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_3, &value);
}


int getStatus_VALx_AnInFltr_3()
{
return getStatus(ID_VALx_AnInFltr_3);
}


int doWrite_VALx_AnInFltr_4(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_4,  &value);
}


int addWrite_VALx_AnInFltr_4(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_4, &value);
}


int getStatus_VALx_AnInFltr_4()
{
return getStatus(ID_VALx_AnInFltr_4);
}


int doWrite_VALx_AnInFltr_5(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_5,  &value);
}


int addWrite_VALx_AnInFltr_5(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_5, &value);
}


int getStatus_VALx_AnInFltr_5()
{
return getStatus(ID_VALx_AnInFltr_5);
}


int doWrite_VALx_AnInFltr_6(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_6,  &value);
}


int addWrite_VALx_AnInFltr_6(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_6, &value);
}


int getStatus_VALx_AnInFltr_6()
{
return getStatus(ID_VALx_AnInFltr_6);
}


int doWrite_VALx_AnInFltr_7(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_7,  &value);
}


int addWrite_VALx_AnInFltr_7(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_7, &value);
}


int getStatus_VALx_AnInFltr_7()
{
return getStatus(ID_VALx_AnInFltr_7);
}


int doWrite_VALx_AnInFltr_8(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_8,  &value);
}


int addWrite_VALx_AnInFltr_8(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_8, &value);
}


int getStatus_VALx_AnInFltr_8()
{
return getStatus(ID_VALx_AnInFltr_8);
}


int doWrite_VALx_AnInFltr_9(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_9,  &value);
}


int addWrite_VALx_AnInFltr_9(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_9, &value);
}


int getStatus_VALx_AnInFltr_9()
{
return getStatus(ID_VALx_AnInFltr_9);
}


int doWrite_VALx_AnInFltr_10(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_10,  &value);
}


int addWrite_VALx_AnInFltr_10(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_10, &value);
}


int getStatus_VALx_AnInFltr_10()
{
return getStatus(ID_VALx_AnInFltr_10);
}


int doWrite_VALx_AnInFltr_11(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_11,  &value);
}


int addWrite_VALx_AnInFltr_11(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_11, &value);
}


int getStatus_VALx_AnInFltr_11()
{
return getStatus(ID_VALx_AnInFltr_11);
}


int doWrite_VALx_AnInFltr_12(u_int16_t value)
{
return doWrite(ID_VALx_AnInFltr_12,  &value);
}


int addWrite_VALx_AnInFltr_12(u_int16_t value)
{
return addWrite(ID_VALx_AnInFltr_12, &value);
}


int getStatus_VALx_AnInFltr_12()
{
return getStatus(ID_VALx_AnInFltr_12);
}


int doWrite_RESx_AnIn_1(int16_t value)
{
return doWrite(ID_RESx_AnIn_1,  &value);
}


int addWrite_RESx_AnIn_1(int16_t value)
{
return addWrite(ID_RESx_AnIn_1, &value);
}


int getStatus_RESx_AnIn_1()
{
return getStatus(ID_RESx_AnIn_1);
}


int doWrite_RESx_AnIn_2(int16_t value)
{
return doWrite(ID_RESx_AnIn_2,  &value);
}


int addWrite_RESx_AnIn_2(int16_t value)
{
return addWrite(ID_RESx_AnIn_2, &value);
}


int getStatus_RESx_AnIn_2()
{
return getStatus(ID_RESx_AnIn_2);
}


int doWrite_RESx_AnIn_3(int16_t value)
{
return doWrite(ID_RESx_AnIn_3,  &value);
}


int addWrite_RESx_AnIn_3(int16_t value)
{
return addWrite(ID_RESx_AnIn_3, &value);
}


int getStatus_RESx_AnIn_3()
{
return getStatus(ID_RESx_AnIn_3);
}


int doWrite_RESx_AnIn_4(int16_t value)
{
return doWrite(ID_RESx_AnIn_4,  &value);
}


int addWrite_RESx_AnIn_4(int16_t value)
{
return addWrite(ID_RESx_AnIn_4, &value);
}


int getStatus_RESx_AnIn_4()
{
return getStatus(ID_RESx_AnIn_4);
}


int doWrite_RESx_AnIn_5(int16_t value)
{
return doWrite(ID_RESx_AnIn_5,  &value);
}


int addWrite_RESx_AnIn_5(int16_t value)
{
return addWrite(ID_RESx_AnIn_5, &value);
}


int getStatus_RESx_AnIn_5()
{
return getStatus(ID_RESx_AnIn_5);
}


int doWrite_RESx_AnIn_6(int16_t value)
{
return doWrite(ID_RESx_AnIn_6,  &value);
}


int addWrite_RESx_AnIn_6(int16_t value)
{
return addWrite(ID_RESx_AnIn_6, &value);
}


int getStatus_RESx_AnIn_6()
{
return getStatus(ID_RESx_AnIn_6);
}


int doWrite_RESx_AnIn_7(int16_t value)
{
return doWrite(ID_RESx_AnIn_7,  &value);
}


int addWrite_RESx_AnIn_7(int16_t value)
{
return addWrite(ID_RESx_AnIn_7, &value);
}


int getStatus_RESx_AnIn_7()
{
return getStatus(ID_RESx_AnIn_7);
}


int doWrite_RESx_AnIn_8(int16_t value)
{
return doWrite(ID_RESx_AnIn_8,  &value);
}


int addWrite_RESx_AnIn_8(int16_t value)
{
return addWrite(ID_RESx_AnIn_8, &value);
}


int getStatus_RESx_AnIn_8()
{
return getStatus(ID_RESx_AnIn_8);
}


int doWrite_RESx_AnIn_9(int16_t value)
{
return doWrite(ID_RESx_AnIn_9,  &value);
}


int addWrite_RESx_AnIn_9(int16_t value)
{
return addWrite(ID_RESx_AnIn_9, &value);
}


int getStatus_RESx_AnIn_9()
{
return getStatus(ID_RESx_AnIn_9);
}


int doWrite_RESx_AnIn_10(int16_t value)
{
return doWrite(ID_RESx_AnIn_10,  &value);
}


int addWrite_RESx_AnIn_10(int16_t value)
{
return addWrite(ID_RESx_AnIn_10, &value);
}


int getStatus_RESx_AnIn_10()
{
return getStatus(ID_RESx_AnIn_10);
}


int doWrite_RESx_AnIn_11(int16_t value)
{
return doWrite(ID_RESx_AnIn_11,  &value);
}


int addWrite_RESx_AnIn_11(int16_t value)
{
return addWrite(ID_RESx_AnIn_11, &value);
}


int getStatus_RESx_AnIn_11()
{
return getStatus(ID_RESx_AnIn_11);
}


int doWrite_RESx_AnIn_12(int16_t value)
{
return doWrite(ID_RESx_AnIn_12,  &value);
}


int addWrite_RESx_AnIn_12(int16_t value)
{
return addWrite(ID_RESx_AnIn_12, &value);
}


int getStatus_RESx_AnIn_12()
{
return getStatus(ID_RESx_AnIn_12);
}


int doWrite_RESx_AnInStts_1(int16_t value)
{
return doWrite(ID_RESx_AnInStts_1,  &value);
}


int addWrite_RESx_AnInStts_1(int16_t value)
{
return addWrite(ID_RESx_AnInStts_1, &value);
}


int getStatus_RESx_AnInStts_1()
{
return getStatus(ID_RESx_AnInStts_1);
}


int doWrite_RESx_AnInStts_2(int16_t value)
{
return doWrite(ID_RESx_AnInStts_2,  &value);
}


int addWrite_RESx_AnInStts_2(int16_t value)
{
return addWrite(ID_RESx_AnInStts_2, &value);
}


int getStatus_RESx_AnInStts_2()
{
return getStatus(ID_RESx_AnInStts_2);
}


int doWrite_RESx_AnInStts_3(int16_t value)
{
return doWrite(ID_RESx_AnInStts_3,  &value);
}


int addWrite_RESx_AnInStts_3(int16_t value)
{
return addWrite(ID_RESx_AnInStts_3, &value);
}


int getStatus_RESx_AnInStts_3()
{
return getStatus(ID_RESx_AnInStts_3);
}


int doWrite_RESx_AnInStts_4(int16_t value)
{
return doWrite(ID_RESx_AnInStts_4,  &value);
}


int addWrite_RESx_AnInStts_4(int16_t value)
{
return addWrite(ID_RESx_AnInStts_4, &value);
}


int getStatus_RESx_AnInStts_4()
{
return getStatus(ID_RESx_AnInStts_4);
}


int doWrite_RESx_AnInStts_5(int16_t value)
{
return doWrite(ID_RESx_AnInStts_5,  &value);
}


int addWrite_RESx_AnInStts_5(int16_t value)
{
return addWrite(ID_RESx_AnInStts_5, &value);
}


int getStatus_RESx_AnInStts_5()
{
return getStatus(ID_RESx_AnInStts_5);
}


int doWrite_RESx_AnInStts_6(int16_t value)
{
return doWrite(ID_RESx_AnInStts_6,  &value);
}


int addWrite_RESx_AnInStts_6(int16_t value)
{
return addWrite(ID_RESx_AnInStts_6, &value);
}


int getStatus_RESx_AnInStts_6()
{
return getStatus(ID_RESx_AnInStts_6);
}


int doWrite_RESx_AnInStts_7(int16_t value)
{
return doWrite(ID_RESx_AnInStts_7,  &value);
}


int addWrite_RESx_AnInStts_7(int16_t value)
{
return addWrite(ID_RESx_AnInStts_7, &value);
}


int getStatus_RESx_AnInStts_7()
{
return getStatus(ID_RESx_AnInStts_7);
}


int doWrite_RESx_AnInStts_8(int16_t value)
{
return doWrite(ID_RESx_AnInStts_8,  &value);
}


int addWrite_RESx_AnInStts_8(int16_t value)
{
return addWrite(ID_RESx_AnInStts_8, &value);
}


int getStatus_RESx_AnInStts_8()
{
return getStatus(ID_RESx_AnInStts_8);
}


int doWrite_RESx_AnInStts_9(int16_t value)
{
return doWrite(ID_RESx_AnInStts_9,  &value);
}


int addWrite_RESx_AnInStts_9(int16_t value)
{
return addWrite(ID_RESx_AnInStts_9, &value);
}


int getStatus_RESx_AnInStts_9()
{
return getStatus(ID_RESx_AnInStts_9);
}


int doWrite_RESx_AnInStts_10(int16_t value)
{
return doWrite(ID_RESx_AnInStts_10,  &value);
}


int addWrite_RESx_AnInStts_10(int16_t value)
{
return addWrite(ID_RESx_AnInStts_10, &value);
}


int getStatus_RESx_AnInStts_10()
{
return getStatus(ID_RESx_AnInStts_10);
}


int doWrite_RESx_AnInStts_11(int16_t value)
{
return doWrite(ID_RESx_AnInStts_11,  &value);
}


int addWrite_RESx_AnInStts_11(int16_t value)
{
return addWrite(ID_RESx_AnInStts_11, &value);
}


int getStatus_RESx_AnInStts_11()
{
return getStatus(ID_RESx_AnInStts_11);
}


int doWrite_RESx_AnInStts_12(int16_t value)
{
return doWrite(ID_RESx_AnInStts_12,  &value);
}


int addWrite_RESx_AnInStts_12(int16_t value)
{
return addWrite(ID_RESx_AnInStts_12, &value);
}


int getStatus_RESx_AnInStts_12()
{
return getStatus(ID_RESx_AnInStts_12);
}


int doWrite_TSTx_AnOut_1(int value)
{
return doWrite(ID_TSTx_AnOut_1,  &value);
}


int addWrite_TSTx_AnOut_1(int value)
{
return addWrite(ID_TSTx_AnOut_1, &value);
}


int getStatus_TSTx_AnOut_1()
{
return getStatus(ID_TSTx_AnOut_1);
}


int doWrite_TSTx_AnOut_2(int value)
{
return doWrite(ID_TSTx_AnOut_2,  &value);
}


int addWrite_TSTx_AnOut_2(int value)
{
return addWrite(ID_TSTx_AnOut_2, &value);
}


int getStatus_TSTx_AnOut_2()
{
return getStatus(ID_TSTx_AnOut_2);
}


int doWrite_TSTx_AnOut_3(int value)
{
return doWrite(ID_TSTx_AnOut_3,  &value);
}


int addWrite_TSTx_AnOut_3(int value)
{
return addWrite(ID_TSTx_AnOut_3, &value);
}


int getStatus_TSTx_AnOut_3()
{
return getStatus(ID_TSTx_AnOut_3);
}


int doWrite_TSTx_AnOut_4(int value)
{
return doWrite(ID_TSTx_AnOut_4,  &value);
}


int addWrite_TSTx_AnOut_4(int value)
{
return addWrite(ID_TSTx_AnOut_4, &value);
}


int getStatus_TSTx_AnOut_4()
{
return getStatus(ID_TSTx_AnOut_4);
}


int doWrite_VALx_AnOut_1(int16_t value)
{
return doWrite(ID_VALx_AnOut_1,  &value);
}


int addWrite_VALx_AnOut_1(int16_t value)
{
return addWrite(ID_VALx_AnOut_1, &value);
}


int getStatus_VALx_AnOut_1()
{
return getStatus(ID_VALx_AnOut_1);
}


int doWrite_VALx_AnOut_2(int16_t value)
{
return doWrite(ID_VALx_AnOut_2,  &value);
}


int addWrite_VALx_AnOut_2(int16_t value)
{
return addWrite(ID_VALx_AnOut_2, &value);
}


int getStatus_VALx_AnOut_2()
{
return getStatus(ID_VALx_AnOut_2);
}


int doWrite_VALx_AnOut_3(int16_t value)
{
return doWrite(ID_VALx_AnOut_3,  &value);
}


int addWrite_VALx_AnOut_3(int16_t value)
{
return addWrite(ID_VALx_AnOut_3, &value);
}


int getStatus_VALx_AnOut_3()
{
return getStatus(ID_VALx_AnOut_3);
}


int doWrite_VALx_AnOut_4(int16_t value)
{
return doWrite(ID_VALx_AnOut_4,  &value);
}


int addWrite_VALx_AnOut_4(int16_t value)
{
return addWrite(ID_VALx_AnOut_4, &value);
}


int getStatus_VALx_AnOut_4()
{
return getStatus(ID_VALx_AnOut_4);
}


int doWrite_VALx_AnOutConf_1(u_int16_t value)
{
return doWrite(ID_VALx_AnOutConf_1,  &value);
}


int addWrite_VALx_AnOutConf_1(u_int16_t value)
{
return addWrite(ID_VALx_AnOutConf_1, &value);
}


int getStatus_VALx_AnOutConf_1()
{
return getStatus(ID_VALx_AnOutConf_1);
}


int doWrite_VALx_AnOutConf_2(u_int16_t value)
{
return doWrite(ID_VALx_AnOutConf_2,  &value);
}


int addWrite_VALx_AnOutConf_2(u_int16_t value)
{
return addWrite(ID_VALx_AnOutConf_2, &value);
}


int getStatus_VALx_AnOutConf_2()
{
return getStatus(ID_VALx_AnOutConf_2);
}


int doWrite_VALx_AnOutConf_3(u_int16_t value)
{
return doWrite(ID_VALx_AnOutConf_3,  &value);
}


int addWrite_VALx_AnOutConf_3(u_int16_t value)
{
return addWrite(ID_VALx_AnOutConf_3, &value);
}


int getStatus_VALx_AnOutConf_3()
{
return getStatus(ID_VALx_AnOutConf_3);
}


int doWrite_VALx_AnOutConf_4(u_int16_t value)
{
return doWrite(ID_VALx_AnOutConf_4,  &value);
}


int addWrite_VALx_AnOutConf_4(u_int16_t value)
{
return addWrite(ID_VALx_AnOutConf_4, &value);
}


int getStatus_VALx_AnOutConf_4()
{
return getStatus(ID_VALx_AnOutConf_4);
}


int doWrite_RESx_AnOutStts_1(int16_t value)
{
return doWrite(ID_RESx_AnOutStts_1,  &value);
}


int addWrite_RESx_AnOutStts_1(int16_t value)
{
return addWrite(ID_RESx_AnOutStts_1, &value);
}


int getStatus_RESx_AnOutStts_1()
{
return getStatus(ID_RESx_AnOutStts_1);
}


int doWrite_RESx_AnOutStts_2(int16_t value)
{
return doWrite(ID_RESx_AnOutStts_2,  &value);
}


int addWrite_RESx_AnOutStts_2(int16_t value)
{
return addWrite(ID_RESx_AnOutStts_2, &value);
}


int getStatus_RESx_AnOutStts_2()
{
return getStatus(ID_RESx_AnOutStts_2);
}


int doWrite_RESx_AnOutStts_3(int16_t value)
{
return doWrite(ID_RESx_AnOutStts_3,  &value);
}


int addWrite_RESx_AnOutStts_3(int16_t value)
{
return addWrite(ID_RESx_AnOutStts_3, &value);
}


int getStatus_RESx_AnOutStts_3()
{
return getStatus(ID_RESx_AnOutStts_3);
}


int doWrite_RESx_AnOutStts_4(int16_t value)
{
return doWrite(ID_RESx_AnOutStts_4,  &value);
}


int addWrite_RESx_AnOutStts_4(int16_t value)
{
return addWrite(ID_RESx_AnOutStts_4, &value);
}


int getStatus_RESx_AnOutStts_4()
{
return getStatus(ID_RESx_AnOutStts_4);
}


int doWrite_TSTx_Tamb(int value)
{
return doWrite(ID_TSTx_Tamb,  &value);
}


int addWrite_TSTx_Tamb(int value)
{
return addWrite(ID_TSTx_Tamb, &value);
}


int getStatus_TSTx_Tamb()
{
return getStatus(ID_TSTx_Tamb);
}


int doWrite_TSTx_RPM(int value)
{
return doWrite(ID_TSTx_RPM,  &value);
}


int addWrite_TSTx_RPM(int value)
{
return addWrite(ID_TSTx_RPM, &value);
}


int getStatus_TSTx_RPM()
{
return getStatus(ID_TSTx_RPM);
}


int doWrite_TSTx_FWrevision(int value)
{
return doWrite(ID_TSTx_FWrevision,  &value);
}


int addWrite_TSTx_FWrevision(int value)
{
return addWrite(ID_TSTx_FWrevision, &value);
}


int getStatus_TSTx_FWrevision()
{
return getStatus(ID_TSTx_FWrevision);
}


int doWrite_TSTx_HWconfig(int value)
{
return doWrite(ID_TSTx_HWconfig,  &value);
}


int addWrite_TSTx_HWconfig(int value)
{
return addWrite(ID_TSTx_HWconfig, &value);
}


int getStatus_TSTx_HWconfig()
{
return getStatus(ID_TSTx_HWconfig);
}


int doWrite_VALx_Tamb(int16_t value)
{
return doWrite(ID_VALx_Tamb,  &value);
}


int addWrite_VALx_Tamb(int16_t value)
{
return addWrite(ID_VALx_Tamb, &value);
}


int getStatus_VALx_Tamb()
{
return getStatus(ID_VALx_Tamb);
}


int doWrite_VALx_RPM(u_int16_t value)
{
return doWrite(ID_VALx_RPM,  &value);
}


int addWrite_VALx_RPM(u_int16_t value)
{
return addWrite(ID_VALx_RPM, &value);
}


int getStatus_VALx_RPM()
{
return getStatus(ID_VALx_RPM);
}


int doWrite_VALx_FWrevision(u_int16_t value)
{
return doWrite(ID_VALx_FWrevision,  &value);
}


int addWrite_VALx_FWrevision(u_int16_t value)
{
return addWrite(ID_VALx_FWrevision, &value);
}


int getStatus_VALx_FWrevision()
{
return getStatus(ID_VALx_FWrevision);
}


int doWrite_VALx_HWconfig(u_int16_t value)
{
return doWrite(ID_VALx_HWconfig,  &value);
}


int addWrite_VALx_HWconfig(u_int16_t value)
{
return addWrite(ID_VALx_HWconfig, &value);
}


int getStatus_VALx_HWconfig()
{
return getStatus(ID_VALx_HWconfig);
}


int doWrite_RESx_Tamb(int16_t value)
{
return doWrite(ID_RESx_Tamb,  &value);
}


int addWrite_RESx_Tamb(int16_t value)
{
return addWrite(ID_RESx_Tamb, &value);
}


int getStatus_RESx_Tamb()
{
return getStatus(ID_RESx_Tamb);
}


int doWrite_RESx_RPM(u_int16_t value)
{
return doWrite(ID_RESx_RPM,  &value);
}


int addWrite_RESx_RPM(u_int16_t value)
{
return addWrite(ID_RESx_RPM, &value);
}


int getStatus_RESx_RPM()
{
return getStatus(ID_RESx_RPM);
}


int doWrite_RESx_FWrevision(u_int16_t value)
{
return doWrite(ID_RESx_FWrevision,  &value);
}


int addWrite_RESx_FWrevision(u_int16_t value)
{
return addWrite(ID_RESx_FWrevision, &value);
}


int getStatus_RESx_FWrevision()
{
return getStatus(ID_RESx_FWrevision);
}


int doWrite_RESx_HWconfig(u_int16_t value)
{
return doWrite(ID_RESx_HWconfig,  &value);
}


int addWrite_RESx_HWconfig(u_int16_t value)
{
return addWrite(ID_RESx_HWconfig, &value);
}


int getStatus_RESx_HWconfig()
{
return getStatus(ID_RESx_HWconfig);
}


int doWrite_TSTx_RTUS_WR(int value)
{
return doWrite(ID_TSTx_RTUS_WR,  &value);
}


int addWrite_TSTx_RTUS_WR(int value)
{
return addWrite(ID_TSTx_RTUS_WR, &value);
}


int getStatus_TSTx_RTUS_WR()
{
return getStatus(ID_TSTx_RTUS_WR);
}


int doWrite_TSTx_RTUS_RD(int value)
{
return doWrite(ID_TSTx_RTUS_RD,  &value);
}


int addWrite_TSTx_RTUS_RD(int value)
{
return addWrite(ID_TSTx_RTUS_RD, &value);
}


int getStatus_TSTx_RTUS_RD()
{
return getStatus(ID_TSTx_RTUS_RD);
}


int doWrite_TSTx_RTU1_WR(int value)
{
return doWrite(ID_TSTx_RTU1_WR,  &value);
}


int addWrite_TSTx_RTU1_WR(int value)
{
return addWrite(ID_TSTx_RTU1_WR, &value);
}


int getStatus_TSTx_RTU1_WR()
{
return getStatus(ID_TSTx_RTU1_WR);
}


int doWrite_TSTx_RTU1_RD(int value)
{
return doWrite(ID_TSTx_RTU1_RD,  &value);
}


int addWrite_TSTx_RTU1_RD(int value)
{
return addWrite(ID_TSTx_RTU1_RD, &value);
}


int getStatus_TSTx_RTU1_RD()
{
return getStatus(ID_TSTx_RTU1_RD);
}


int doWrite_TSTx_RTU3_WR(int value)
{
return doWrite(ID_TSTx_RTU3_WR,  &value);
}


int addWrite_TSTx_RTU3_WR(int value)
{
return addWrite(ID_TSTx_RTU3_WR, &value);
}


int getStatus_TSTx_RTU3_WR()
{
return getStatus(ID_TSTx_RTU3_WR);
}


int doWrite_TSTx_RTU3_RD(int value)
{
return doWrite(ID_TSTx_RTU3_RD,  &value);
}


int addWrite_TSTx_RTU3_RD(int value)
{
return addWrite(ID_TSTx_RTU3_RD, &value);
}


int getStatus_TSTx_RTU3_RD()
{
return getStatus(ID_TSTx_RTU3_RD);
}


int doWrite_TSTx_CAN1_WR(int value)
{
return doWrite(ID_TSTx_CAN1_WR,  &value);
}


int addWrite_TSTx_CAN1_WR(int value)
{
return addWrite(ID_TSTx_CAN1_WR, &value);
}


int getStatus_TSTx_CAN1_WR()
{
return getStatus(ID_TSTx_CAN1_WR);
}


int doWrite_TSTx_CAN1_RD(int value)
{
return doWrite(ID_TSTx_CAN1_RD,  &value);
}


int addWrite_TSTx_CAN1_RD(int value)
{
return addWrite(ID_TSTx_CAN1_RD, &value);
}


int getStatus_TSTx_CAN1_RD()
{
return getStatus(ID_TSTx_CAN1_RD);
}


int doWrite_VALx_RTUS_WR(int value)
{
return doWrite(ID_VALx_RTUS_WR,  &value);
}


int addWrite_VALx_RTUS_WR(int value)
{
return addWrite(ID_VALx_RTUS_WR, &value);
}


int getStatus_VALx_RTUS_WR()
{
return getStatus(ID_VALx_RTUS_WR);
}


int doWrite_VALx_RTUS_RD(int value)
{
return doWrite(ID_VALx_RTUS_RD,  &value);
}


int addWrite_VALx_RTUS_RD(int value)
{
return addWrite(ID_VALx_RTUS_RD, &value);
}


int getStatus_VALx_RTUS_RD()
{
return getStatus(ID_VALx_RTUS_RD);
}


int doWrite_VALx_RTU1_WR(int value)
{
return doWrite(ID_VALx_RTU1_WR,  &value);
}


int addWrite_VALx_RTU1_WR(int value)
{
return addWrite(ID_VALx_RTU1_WR, &value);
}


int getStatus_VALx_RTU1_WR()
{
return getStatus(ID_VALx_RTU1_WR);
}


int doWrite_VALx_RTU1_RD(int value)
{
return doWrite(ID_VALx_RTU1_RD,  &value);
}


int addWrite_VALx_RTU1_RD(int value)
{
return addWrite(ID_VALx_RTU1_RD, &value);
}


int getStatus_VALx_RTU1_RD()
{
return getStatus(ID_VALx_RTU1_RD);
}


int doWrite_VALx_RTU3_WR(int value)
{
return doWrite(ID_VALx_RTU3_WR,  &value);
}


int addWrite_VALx_RTU3_WR(int value)
{
return addWrite(ID_VALx_RTU3_WR, &value);
}


int getStatus_VALx_RTU3_WR()
{
return getStatus(ID_VALx_RTU3_WR);
}


int doWrite_VALx_RTU3_RD(int value)
{
return doWrite(ID_VALx_RTU3_RD,  &value);
}


int addWrite_VALx_RTU3_RD(int value)
{
return addWrite(ID_VALx_RTU3_RD, &value);
}


int getStatus_VALx_RTU3_RD()
{
return getStatus(ID_VALx_RTU3_RD);
}


int doWrite_VALx_CAN1_WR(int value)
{
return doWrite(ID_VALx_CAN1_WR,  &value);
}


int addWrite_VALx_CAN1_WR(int value)
{
return addWrite(ID_VALx_CAN1_WR, &value);
}


int getStatus_VALx_CAN1_WR()
{
return getStatus(ID_VALx_CAN1_WR);
}


int doWrite_VALx_CAN1_RD(int value)
{
return doWrite(ID_VALx_CAN1_RD,  &value);
}


int addWrite_VALx_CAN1_RD(int value)
{
return addWrite(ID_VALx_CAN1_RD, &value);
}


int getStatus_VALx_CAN1_RD()
{
return getStatus(ID_VALx_CAN1_RD);
}


int doWrite_RESx_RTUS_WR(int value)
{
return doWrite(ID_RESx_RTUS_WR,  &value);
}


int addWrite_RESx_RTUS_WR(int value)
{
return addWrite(ID_RESx_RTUS_WR, &value);
}


int getStatus_RESx_RTUS_WR()
{
return getStatus(ID_RESx_RTUS_WR);
}


int doWrite_RESx_RTUS_RD(int value)
{
return doWrite(ID_RESx_RTUS_RD,  &value);
}


int addWrite_RESx_RTUS_RD(int value)
{
return addWrite(ID_RESx_RTUS_RD, &value);
}


int getStatus_RESx_RTUS_RD()
{
return getStatus(ID_RESx_RTUS_RD);
}


int doWrite_RESx_RTU1_WR(int value)
{
return doWrite(ID_RESx_RTU1_WR,  &value);
}


int addWrite_RESx_RTU1_WR(int value)
{
return addWrite(ID_RESx_RTU1_WR, &value);
}


int getStatus_RESx_RTU1_WR()
{
return getStatus(ID_RESx_RTU1_WR);
}


int doWrite_RESx_RTU1_RD(int value)
{
return doWrite(ID_RESx_RTU1_RD,  &value);
}


int addWrite_RESx_RTU1_RD(int value)
{
return addWrite(ID_RESx_RTU1_RD, &value);
}


int getStatus_RESx_RTU1_RD()
{
return getStatus(ID_RESx_RTU1_RD);
}


int doWrite_RESx_RTU3_WR(int value)
{
return doWrite(ID_RESx_RTU3_WR,  &value);
}


int addWrite_RESx_RTU3_WR(int value)
{
return addWrite(ID_RESx_RTU3_WR, &value);
}


int getStatus_RESx_RTU3_WR()
{
return getStatus(ID_RESx_RTU3_WR);
}


int doWrite_RESx_RTU3_RD(int value)
{
return doWrite(ID_RESx_RTU3_RD,  &value);
}


int addWrite_RESx_RTU3_RD(int value)
{
return addWrite(ID_RESx_RTU3_RD, &value);
}


int getStatus_RESx_RTU3_RD()
{
return getStatus(ID_RESx_RTU3_RD);
}


int doWrite_RESx_CAN1_WR(int value)
{
return doWrite(ID_RESx_CAN1_WR,  &value);
}


int addWrite_RESx_CAN1_WR(int value)
{
return addWrite(ID_RESx_CAN1_WR, &value);
}


int getStatus_RESx_CAN1_WR()
{
return getStatus(ID_RESx_CAN1_WR);
}


int doWrite_RESx_CAN1_RD(int value)
{
return doWrite(ID_RESx_CAN1_RD,  &value);
}


int addWrite_RESx_CAN1_RD(int value)
{
return addWrite(ID_RESx_CAN1_RD, &value);
}


int getStatus_RESx_CAN1_RD()
{
return getStatus(ID_RESx_CAN1_RD);
}


int doWrite_TESTx_STATUS(u_int16_t value)
{
return doWrite(ID_TESTx_STATUS,  &value);
}


int addWrite_TESTx_STATUS(u_int16_t value)
{
return addWrite(ID_TESTx_STATUS, &value);
}


int getStatus_TESTx_STATUS()
{
return getStatus(ID_TESTx_STATUS);
}


int doWrite_RTU0_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_RTU0_TYPE_PORT,  &value);
}


int addWrite_RTU0_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_RTU0_TYPE_PORT, &value);
}


int getStatus_RTU0_TYPE_PORT()
{
return getStatus(ID_RTU0_TYPE_PORT);
}


int doWrite_RTU0_BAUDRATE(u_int32_t value)
{
return doWrite(ID_RTU0_BAUDRATE,  &value);
}


int addWrite_RTU0_BAUDRATE(u_int32_t value)
{
return addWrite(ID_RTU0_BAUDRATE, &value);
}


int getStatus_RTU0_BAUDRATE()
{
return getStatus(ID_RTU0_BAUDRATE);
}


int doWrite_RTU0_STATUS(u_int32_t value)
{
return doWrite(ID_RTU0_STATUS,  &value);
}


int addWrite_RTU0_STATUS(u_int32_t value)
{
return addWrite(ID_RTU0_STATUS, &value);
}


int getStatus_RTU0_STATUS()
{
return getStatus(ID_RTU0_STATUS);
}


int doWrite_RTU0_READS(u_int32_t value)
{
return doWrite(ID_RTU0_READS,  &value);
}


int addWrite_RTU0_READS(u_int32_t value)
{
return addWrite(ID_RTU0_READS, &value);
}


int getStatus_RTU0_READS()
{
return getStatus(ID_RTU0_READS);
}


int doWrite_RTU0_WRITES(u_int32_t value)
{
return doWrite(ID_RTU0_WRITES,  &value);
}


int addWrite_RTU0_WRITES(u_int32_t value)
{
return addWrite(ID_RTU0_WRITES, &value);
}


int getStatus_RTU0_WRITES()
{
return getStatus(ID_RTU0_WRITES);
}


int doWrite_RTU0_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_RTU0_TIMEOUTS,  &value);
}


int addWrite_RTU0_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_RTU0_TIMEOUTS, &value);
}


int getStatus_RTU0_TIMEOUTS()
{
return getStatus(ID_RTU0_TIMEOUTS);
}


int doWrite_RTU0_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_RTU0_COMM_ERRORS,  &value);
}


int addWrite_RTU0_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_RTU0_COMM_ERRORS, &value);
}


int getStatus_RTU0_COMM_ERRORS()
{
return getStatus(ID_RTU0_COMM_ERRORS);
}


int doWrite_RTU0_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_RTU0_LAST_ERROR,  &value);
}


int addWrite_RTU0_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_RTU0_LAST_ERROR, &value);
}


int getStatus_RTU0_LAST_ERROR()
{
return getStatus(ID_RTU0_LAST_ERROR);
}


int doWrite_RTU0_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU0_WRITE_QUEUE,  &value);
}


int addWrite_RTU0_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU0_WRITE_QUEUE, &value);
}


int getStatus_RTU0_WRITE_QUEUE()
{
return getStatus(ID_RTU0_WRITE_QUEUE);
}


int doWrite_RTU0_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU0_READ_QUEUE,  &value);
}


int addWrite_RTU0_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU0_READ_QUEUE, &value);
}


int getStatus_RTU0_READ_QUEUE()
{
return getStatus(ID_RTU0_READ_QUEUE);
}


int doWrite_RTU1_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_RTU1_TYPE_PORT,  &value);
}


int addWrite_RTU1_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_RTU1_TYPE_PORT, &value);
}


int getStatus_RTU1_TYPE_PORT()
{
return getStatus(ID_RTU1_TYPE_PORT);
}


int doWrite_RTU1_BAUDRATE(u_int32_t value)
{
return doWrite(ID_RTU1_BAUDRATE,  &value);
}


int addWrite_RTU1_BAUDRATE(u_int32_t value)
{
return addWrite(ID_RTU1_BAUDRATE, &value);
}


int getStatus_RTU1_BAUDRATE()
{
return getStatus(ID_RTU1_BAUDRATE);
}


int doWrite_RTU1_STATUS(u_int32_t value)
{
return doWrite(ID_RTU1_STATUS,  &value);
}


int addWrite_RTU1_STATUS(u_int32_t value)
{
return addWrite(ID_RTU1_STATUS, &value);
}


int getStatus_RTU1_STATUS()
{
return getStatus(ID_RTU1_STATUS);
}


int doWrite_RTU1_READS(u_int32_t value)
{
return doWrite(ID_RTU1_READS,  &value);
}


int addWrite_RTU1_READS(u_int32_t value)
{
return addWrite(ID_RTU1_READS, &value);
}


int getStatus_RTU1_READS()
{
return getStatus(ID_RTU1_READS);
}


int doWrite_RTU1_WRITES(u_int32_t value)
{
return doWrite(ID_RTU1_WRITES,  &value);
}


int addWrite_RTU1_WRITES(u_int32_t value)
{
return addWrite(ID_RTU1_WRITES, &value);
}


int getStatus_RTU1_WRITES()
{
return getStatus(ID_RTU1_WRITES);
}


int doWrite_RTU1_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_RTU1_TIMEOUTS,  &value);
}


int addWrite_RTU1_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_RTU1_TIMEOUTS, &value);
}


int getStatus_RTU1_TIMEOUTS()
{
return getStatus(ID_RTU1_TIMEOUTS);
}


int doWrite_RTU1_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_RTU1_COMM_ERRORS,  &value);
}


int addWrite_RTU1_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_RTU1_COMM_ERRORS, &value);
}


int getStatus_RTU1_COMM_ERRORS()
{
return getStatus(ID_RTU1_COMM_ERRORS);
}


int doWrite_RTU1_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_RTU1_LAST_ERROR,  &value);
}


int addWrite_RTU1_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_RTU1_LAST_ERROR, &value);
}


int getStatus_RTU1_LAST_ERROR()
{
return getStatus(ID_RTU1_LAST_ERROR);
}


int doWrite_RTU1_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU1_WRITE_QUEUE,  &value);
}


int addWrite_RTU1_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU1_WRITE_QUEUE, &value);
}


int getStatus_RTU1_WRITE_QUEUE()
{
return getStatus(ID_RTU1_WRITE_QUEUE);
}


int doWrite_RTU1_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU1_READ_QUEUE,  &value);
}


int addWrite_RTU1_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU1_READ_QUEUE, &value);
}


int getStatus_RTU1_READ_QUEUE()
{
return getStatus(ID_RTU1_READ_QUEUE);
}


int doWrite_RTU3_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_RTU3_TYPE_PORT,  &value);
}


int addWrite_RTU3_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_RTU3_TYPE_PORT, &value);
}


int getStatus_RTU3_TYPE_PORT()
{
return getStatus(ID_RTU3_TYPE_PORT);
}


int doWrite_RTU3_BAUDRATE(u_int32_t value)
{
return doWrite(ID_RTU3_BAUDRATE,  &value);
}


int addWrite_RTU3_BAUDRATE(u_int32_t value)
{
return addWrite(ID_RTU3_BAUDRATE, &value);
}


int getStatus_RTU3_BAUDRATE()
{
return getStatus(ID_RTU3_BAUDRATE);
}


int doWrite_RTU3_STATUS(u_int32_t value)
{
return doWrite(ID_RTU3_STATUS,  &value);
}


int addWrite_RTU3_STATUS(u_int32_t value)
{
return addWrite(ID_RTU3_STATUS, &value);
}


int getStatus_RTU3_STATUS()
{
return getStatus(ID_RTU3_STATUS);
}


int doWrite_RTU3_READS(u_int32_t value)
{
return doWrite(ID_RTU3_READS,  &value);
}


int addWrite_RTU3_READS(u_int32_t value)
{
return addWrite(ID_RTU3_READS, &value);
}


int getStatus_RTU3_READS()
{
return getStatus(ID_RTU3_READS);
}


int doWrite_RTU3_WRITES(u_int32_t value)
{
return doWrite(ID_RTU3_WRITES,  &value);
}


int addWrite_RTU3_WRITES(u_int32_t value)
{
return addWrite(ID_RTU3_WRITES, &value);
}


int getStatus_RTU3_WRITES()
{
return getStatus(ID_RTU3_WRITES);
}


int doWrite_RTU3_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_RTU3_TIMEOUTS,  &value);
}


int addWrite_RTU3_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_RTU3_TIMEOUTS, &value);
}


int getStatus_RTU3_TIMEOUTS()
{
return getStatus(ID_RTU3_TIMEOUTS);
}


int doWrite_RTU3_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_RTU3_COMM_ERRORS,  &value);
}


int addWrite_RTU3_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_RTU3_COMM_ERRORS, &value);
}


int getStatus_RTU3_COMM_ERRORS()
{
return getStatus(ID_RTU3_COMM_ERRORS);
}


int doWrite_RTU3_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_RTU3_LAST_ERROR,  &value);
}


int addWrite_RTU3_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_RTU3_LAST_ERROR, &value);
}


int getStatus_RTU3_LAST_ERROR()
{
return getStatus(ID_RTU3_LAST_ERROR);
}


int doWrite_RTU3_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU3_WRITE_QUEUE,  &value);
}


int addWrite_RTU3_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU3_WRITE_QUEUE, &value);
}


int getStatus_RTU3_WRITE_QUEUE()
{
return getStatus(ID_RTU3_WRITE_QUEUE);
}


int doWrite_RTU3_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_RTU3_READ_QUEUE,  &value);
}


int addWrite_RTU3_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_RTU3_READ_QUEUE, &value);
}


int getStatus_RTU3_READ_QUEUE()
{
return getStatus(ID_RTU3_READ_QUEUE);
}


int doWrite_CAN0_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_CAN0_TYPE_PORT,  &value);
}


int addWrite_CAN0_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_CAN0_TYPE_PORT, &value);
}


int getStatus_CAN0_TYPE_PORT()
{
return getStatus(ID_CAN0_TYPE_PORT);
}


int doWrite_CAN0_BAUDRATE(u_int32_t value)
{
return doWrite(ID_CAN0_BAUDRATE,  &value);
}


int addWrite_CAN0_BAUDRATE(u_int32_t value)
{
return addWrite(ID_CAN0_BAUDRATE, &value);
}


int getStatus_CAN0_BAUDRATE()
{
return getStatus(ID_CAN0_BAUDRATE);
}


int doWrite_CAN0_STATUS(u_int32_t value)
{
return doWrite(ID_CAN0_STATUS,  &value);
}


int addWrite_CAN0_STATUS(u_int32_t value)
{
return addWrite(ID_CAN0_STATUS, &value);
}


int getStatus_CAN0_STATUS()
{
return getStatus(ID_CAN0_STATUS);
}


int doWrite_CAN0_READS(u_int32_t value)
{
return doWrite(ID_CAN0_READS,  &value);
}


int addWrite_CAN0_READS(u_int32_t value)
{
return addWrite(ID_CAN0_READS, &value);
}


int getStatus_CAN0_READS()
{
return getStatus(ID_CAN0_READS);
}


int doWrite_CAN0_WRITES(u_int32_t value)
{
return doWrite(ID_CAN0_WRITES,  &value);
}


int addWrite_CAN0_WRITES(u_int32_t value)
{
return addWrite(ID_CAN0_WRITES, &value);
}


int getStatus_CAN0_WRITES()
{
return getStatus(ID_CAN0_WRITES);
}


int doWrite_CAN0_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_CAN0_TIMEOUTS,  &value);
}


int addWrite_CAN0_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_CAN0_TIMEOUTS, &value);
}


int getStatus_CAN0_TIMEOUTS()
{
return getStatus(ID_CAN0_TIMEOUTS);
}


int doWrite_CAN0_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_CAN0_COMM_ERRORS,  &value);
}


int addWrite_CAN0_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_CAN0_COMM_ERRORS, &value);
}


int getStatus_CAN0_COMM_ERRORS()
{
return getStatus(ID_CAN0_COMM_ERRORS);
}


int doWrite_CAN0_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_CAN0_LAST_ERROR,  &value);
}


int addWrite_CAN0_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_CAN0_LAST_ERROR, &value);
}


int getStatus_CAN0_LAST_ERROR()
{
return getStatus(ID_CAN0_LAST_ERROR);
}


int doWrite_CAN0_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_CAN0_WRITE_QUEUE,  &value);
}


int addWrite_CAN0_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_CAN0_WRITE_QUEUE, &value);
}


int getStatus_CAN0_WRITE_QUEUE()
{
return getStatus(ID_CAN0_WRITE_QUEUE);
}


int doWrite_CAN0_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_CAN0_READ_QUEUE,  &value);
}


int addWrite_CAN0_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_CAN0_READ_QUEUE, &value);
}


int getStatus_CAN0_READ_QUEUE()
{
return getStatus(ID_CAN0_READ_QUEUE);
}


int doWrite_CAN1_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_CAN1_TYPE_PORT,  &value);
}


int addWrite_CAN1_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_CAN1_TYPE_PORT, &value);
}


int getStatus_CAN1_TYPE_PORT()
{
return getStatus(ID_CAN1_TYPE_PORT);
}


int doWrite_CAN1_BAUDRATE(u_int32_t value)
{
return doWrite(ID_CAN1_BAUDRATE,  &value);
}


int addWrite_CAN1_BAUDRATE(u_int32_t value)
{
return addWrite(ID_CAN1_BAUDRATE, &value);
}


int getStatus_CAN1_BAUDRATE()
{
return getStatus(ID_CAN1_BAUDRATE);
}


int doWrite_CAN1_STATUS(u_int32_t value)
{
return doWrite(ID_CAN1_STATUS,  &value);
}


int addWrite_CAN1_STATUS(u_int32_t value)
{
return addWrite(ID_CAN1_STATUS, &value);
}


int getStatus_CAN1_STATUS()
{
return getStatus(ID_CAN1_STATUS);
}


int doWrite_CAN1_READS(u_int32_t value)
{
return doWrite(ID_CAN1_READS,  &value);
}


int addWrite_CAN1_READS(u_int32_t value)
{
return addWrite(ID_CAN1_READS, &value);
}


int getStatus_CAN1_READS()
{
return getStatus(ID_CAN1_READS);
}


int doWrite_CAN1_WRITES(u_int32_t value)
{
return doWrite(ID_CAN1_WRITES,  &value);
}


int addWrite_CAN1_WRITES(u_int32_t value)
{
return addWrite(ID_CAN1_WRITES, &value);
}


int getStatus_CAN1_WRITES()
{
return getStatus(ID_CAN1_WRITES);
}


int doWrite_CAN1_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_CAN1_TIMEOUTS,  &value);
}


int addWrite_CAN1_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_CAN1_TIMEOUTS, &value);
}


int getStatus_CAN1_TIMEOUTS()
{
return getStatus(ID_CAN1_TIMEOUTS);
}


int doWrite_CAN1_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_CAN1_COMM_ERRORS,  &value);
}


int addWrite_CAN1_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_CAN1_COMM_ERRORS, &value);
}


int getStatus_CAN1_COMM_ERRORS()
{
return getStatus(ID_CAN1_COMM_ERRORS);
}


int doWrite_CAN1_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_CAN1_LAST_ERROR,  &value);
}


int addWrite_CAN1_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_CAN1_LAST_ERROR, &value);
}


int getStatus_CAN1_LAST_ERROR()
{
return getStatus(ID_CAN1_LAST_ERROR);
}


int doWrite_CAN1_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_CAN1_WRITE_QUEUE,  &value);
}


int addWrite_CAN1_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_CAN1_WRITE_QUEUE, &value);
}


int getStatus_CAN1_WRITE_QUEUE()
{
return getStatus(ID_CAN1_WRITE_QUEUE);
}


int doWrite_CAN1_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_CAN1_READ_QUEUE,  &value);
}


int addWrite_CAN1_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_CAN1_READ_QUEUE, &value);
}


int getStatus_CAN1_READ_QUEUE()
{
return getStatus(ID_CAN1_READ_QUEUE);
}


int doWrite_TCPS_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCPS_TYPE_PORT,  &value);
}


int addWrite_TCPS_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCPS_TYPE_PORT, &value);
}


int getStatus_TCPS_TYPE_PORT()
{
return getStatus(ID_TCPS_TYPE_PORT);
}


int doWrite_TCPS_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCPS_IP_ADDRESS,  &value);
}


int addWrite_TCPS_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCPS_IP_ADDRESS, &value);
}


int getStatus_TCPS_IP_ADDRESS()
{
return getStatus(ID_TCPS_IP_ADDRESS);
}


int doWrite_TCPS_STATUS(u_int32_t value)
{
return doWrite(ID_TCPS_STATUS,  &value);
}


int addWrite_TCPS_STATUS(u_int32_t value)
{
return addWrite(ID_TCPS_STATUS, &value);
}


int getStatus_TCPS_STATUS()
{
return getStatus(ID_TCPS_STATUS);
}


int doWrite_TCPS_READS(u_int32_t value)
{
return doWrite(ID_TCPS_READS,  &value);
}


int addWrite_TCPS_READS(u_int32_t value)
{
return addWrite(ID_TCPS_READS, &value);
}


int getStatus_TCPS_READS()
{
return getStatus(ID_TCPS_READS);
}


int doWrite_TCPS_WRITES(u_int32_t value)
{
return doWrite(ID_TCPS_WRITES,  &value);
}


int addWrite_TCPS_WRITES(u_int32_t value)
{
return addWrite(ID_TCPS_WRITES, &value);
}


int getStatus_TCPS_WRITES()
{
return getStatus(ID_TCPS_WRITES);
}


int doWrite_TCPS_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCPS_TIMEOUTS,  &value);
}


int addWrite_TCPS_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCPS_TIMEOUTS, &value);
}


int getStatus_TCPS_TIMEOUTS()
{
return getStatus(ID_TCPS_TIMEOUTS);
}


int doWrite_TCPS_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCPS_COMM_ERRORS,  &value);
}


int addWrite_TCPS_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCPS_COMM_ERRORS, &value);
}


int getStatus_TCPS_COMM_ERRORS()
{
return getStatus(ID_TCPS_COMM_ERRORS);
}


int doWrite_TCPS_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCPS_LAST_ERROR,  &value);
}


int addWrite_TCPS_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCPS_LAST_ERROR, &value);
}


int getStatus_TCPS_LAST_ERROR()
{
return getStatus(ID_TCPS_LAST_ERROR);
}


int doWrite_TCPS_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCPS_WRITE_QUEUE,  &value);
}


int addWrite_TCPS_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCPS_WRITE_QUEUE, &value);
}


int getStatus_TCPS_WRITE_QUEUE()
{
return getStatus(ID_TCPS_WRITE_QUEUE);
}


int doWrite_TCPS_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCPS_READ_QUEUE,  &value);
}


int addWrite_TCPS_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCPS_READ_QUEUE, &value);
}


int getStatus_TCPS_READ_QUEUE()
{
return getStatus(ID_TCPS_READ_QUEUE);
}


int doWrite_TCP0_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP0_TYPE_PORT,  &value);
}


int addWrite_TCP0_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP0_TYPE_PORT, &value);
}


int getStatus_TCP0_TYPE_PORT()
{
return getStatus(ID_TCP0_TYPE_PORT);
}


int doWrite_TCP0_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP0_IP_ADDRESS,  &value);
}


int addWrite_TCP0_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP0_IP_ADDRESS, &value);
}


int getStatus_TCP0_IP_ADDRESS()
{
return getStatus(ID_TCP0_IP_ADDRESS);
}


int doWrite_TCP0_STATUS(u_int32_t value)
{
return doWrite(ID_TCP0_STATUS,  &value);
}


int addWrite_TCP0_STATUS(u_int32_t value)
{
return addWrite(ID_TCP0_STATUS, &value);
}


int getStatus_TCP0_STATUS()
{
return getStatus(ID_TCP0_STATUS);
}


int doWrite_TCP0_READS(u_int32_t value)
{
return doWrite(ID_TCP0_READS,  &value);
}


int addWrite_TCP0_READS(u_int32_t value)
{
return addWrite(ID_TCP0_READS, &value);
}


int getStatus_TCP0_READS()
{
return getStatus(ID_TCP0_READS);
}


int doWrite_TCP0_WRITES(u_int32_t value)
{
return doWrite(ID_TCP0_WRITES,  &value);
}


int addWrite_TCP0_WRITES(u_int32_t value)
{
return addWrite(ID_TCP0_WRITES, &value);
}


int getStatus_TCP0_WRITES()
{
return getStatus(ID_TCP0_WRITES);
}


int doWrite_TCP0_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP0_TIMEOUTS,  &value);
}


int addWrite_TCP0_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP0_TIMEOUTS, &value);
}


int getStatus_TCP0_TIMEOUTS()
{
return getStatus(ID_TCP0_TIMEOUTS);
}


int doWrite_TCP0_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP0_COMM_ERRORS,  &value);
}


int addWrite_TCP0_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP0_COMM_ERRORS, &value);
}


int getStatus_TCP0_COMM_ERRORS()
{
return getStatus(ID_TCP0_COMM_ERRORS);
}


int doWrite_TCP0_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP0_LAST_ERROR,  &value);
}


int addWrite_TCP0_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP0_LAST_ERROR, &value);
}


int getStatus_TCP0_LAST_ERROR()
{
return getStatus(ID_TCP0_LAST_ERROR);
}


int doWrite_TCP0_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP0_WRITE_QUEUE,  &value);
}


int addWrite_TCP0_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP0_WRITE_QUEUE, &value);
}


int getStatus_TCP0_WRITE_QUEUE()
{
return getStatus(ID_TCP0_WRITE_QUEUE);
}


int doWrite_TCP0_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP0_READ_QUEUE,  &value);
}


int addWrite_TCP0_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP0_READ_QUEUE, &value);
}


int getStatus_TCP0_READ_QUEUE()
{
return getStatus(ID_TCP0_READ_QUEUE);
}


int doWrite_TCP1_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP1_TYPE_PORT,  &value);
}


int addWrite_TCP1_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP1_TYPE_PORT, &value);
}


int getStatus_TCP1_TYPE_PORT()
{
return getStatus(ID_TCP1_TYPE_PORT);
}


int doWrite_TCP1_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP1_IP_ADDRESS,  &value);
}


int addWrite_TCP1_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP1_IP_ADDRESS, &value);
}


int getStatus_TCP1_IP_ADDRESS()
{
return getStatus(ID_TCP1_IP_ADDRESS);
}


int doWrite_TCP1_STATUS(u_int32_t value)
{
return doWrite(ID_TCP1_STATUS,  &value);
}


int addWrite_TCP1_STATUS(u_int32_t value)
{
return addWrite(ID_TCP1_STATUS, &value);
}


int getStatus_TCP1_STATUS()
{
return getStatus(ID_TCP1_STATUS);
}


int doWrite_TCP1_READS(u_int32_t value)
{
return doWrite(ID_TCP1_READS,  &value);
}


int addWrite_TCP1_READS(u_int32_t value)
{
return addWrite(ID_TCP1_READS, &value);
}


int getStatus_TCP1_READS()
{
return getStatus(ID_TCP1_READS);
}


int doWrite_TCP1_WRITES(u_int32_t value)
{
return doWrite(ID_TCP1_WRITES,  &value);
}


int addWrite_TCP1_WRITES(u_int32_t value)
{
return addWrite(ID_TCP1_WRITES, &value);
}


int getStatus_TCP1_WRITES()
{
return getStatus(ID_TCP1_WRITES);
}


int doWrite_TCP1_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP1_TIMEOUTS,  &value);
}


int addWrite_TCP1_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP1_TIMEOUTS, &value);
}


int getStatus_TCP1_TIMEOUTS()
{
return getStatus(ID_TCP1_TIMEOUTS);
}


int doWrite_TCP1_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP1_COMM_ERRORS,  &value);
}


int addWrite_TCP1_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP1_COMM_ERRORS, &value);
}


int getStatus_TCP1_COMM_ERRORS()
{
return getStatus(ID_TCP1_COMM_ERRORS);
}


int doWrite_TCP1_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP1_LAST_ERROR,  &value);
}


int addWrite_TCP1_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP1_LAST_ERROR, &value);
}


int getStatus_TCP1_LAST_ERROR()
{
return getStatus(ID_TCP1_LAST_ERROR);
}


int doWrite_TCP1_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP1_WRITE_QUEUE,  &value);
}


int addWrite_TCP1_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP1_WRITE_QUEUE, &value);
}


int getStatus_TCP1_WRITE_QUEUE()
{
return getStatus(ID_TCP1_WRITE_QUEUE);
}


int doWrite_TCP1_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP1_READ_QUEUE,  &value);
}


int addWrite_TCP1_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP1_READ_QUEUE, &value);
}


int getStatus_TCP1_READ_QUEUE()
{
return getStatus(ID_TCP1_READ_QUEUE);
}


int doWrite_TCP2_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP2_TYPE_PORT,  &value);
}


int addWrite_TCP2_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP2_TYPE_PORT, &value);
}


int getStatus_TCP2_TYPE_PORT()
{
return getStatus(ID_TCP2_TYPE_PORT);
}


int doWrite_TCP2_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP2_IP_ADDRESS,  &value);
}


int addWrite_TCP2_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP2_IP_ADDRESS, &value);
}


int getStatus_TCP2_IP_ADDRESS()
{
return getStatus(ID_TCP2_IP_ADDRESS);
}


int doWrite_TCP2_STATUS(u_int32_t value)
{
return doWrite(ID_TCP2_STATUS,  &value);
}


int addWrite_TCP2_STATUS(u_int32_t value)
{
return addWrite(ID_TCP2_STATUS, &value);
}


int getStatus_TCP2_STATUS()
{
return getStatus(ID_TCP2_STATUS);
}


int doWrite_TCP2_READS(u_int32_t value)
{
return doWrite(ID_TCP2_READS,  &value);
}


int addWrite_TCP2_READS(u_int32_t value)
{
return addWrite(ID_TCP2_READS, &value);
}


int getStatus_TCP2_READS()
{
return getStatus(ID_TCP2_READS);
}


int doWrite_TCP2_WRITES(u_int32_t value)
{
return doWrite(ID_TCP2_WRITES,  &value);
}


int addWrite_TCP2_WRITES(u_int32_t value)
{
return addWrite(ID_TCP2_WRITES, &value);
}


int getStatus_TCP2_WRITES()
{
return getStatus(ID_TCP2_WRITES);
}


int doWrite_TCP2_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP2_TIMEOUTS,  &value);
}


int addWrite_TCP2_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP2_TIMEOUTS, &value);
}


int getStatus_TCP2_TIMEOUTS()
{
return getStatus(ID_TCP2_TIMEOUTS);
}


int doWrite_TCP2_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP2_COMM_ERRORS,  &value);
}


int addWrite_TCP2_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP2_COMM_ERRORS, &value);
}


int getStatus_TCP2_COMM_ERRORS()
{
return getStatus(ID_TCP2_COMM_ERRORS);
}


int doWrite_TCP2_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP2_LAST_ERROR,  &value);
}


int addWrite_TCP2_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP2_LAST_ERROR, &value);
}


int getStatus_TCP2_LAST_ERROR()
{
return getStatus(ID_TCP2_LAST_ERROR);
}


int doWrite_TCP2_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP2_WRITE_QUEUE,  &value);
}


int addWrite_TCP2_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP2_WRITE_QUEUE, &value);
}


int getStatus_TCP2_WRITE_QUEUE()
{
return getStatus(ID_TCP2_WRITE_QUEUE);
}


int doWrite_TCP2_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP2_READ_QUEUE,  &value);
}


int addWrite_TCP2_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP2_READ_QUEUE, &value);
}


int getStatus_TCP2_READ_QUEUE()
{
return getStatus(ID_TCP2_READ_QUEUE);
}


int doWrite_TCP3_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP3_TYPE_PORT,  &value);
}


int addWrite_TCP3_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP3_TYPE_PORT, &value);
}


int getStatus_TCP3_TYPE_PORT()
{
return getStatus(ID_TCP3_TYPE_PORT);
}


int doWrite_TCP3_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP3_IP_ADDRESS,  &value);
}


int addWrite_TCP3_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP3_IP_ADDRESS, &value);
}


int getStatus_TCP3_IP_ADDRESS()
{
return getStatus(ID_TCP3_IP_ADDRESS);
}


int doWrite_TCP3_STATUS(u_int32_t value)
{
return doWrite(ID_TCP3_STATUS,  &value);
}


int addWrite_TCP3_STATUS(u_int32_t value)
{
return addWrite(ID_TCP3_STATUS, &value);
}


int getStatus_TCP3_STATUS()
{
return getStatus(ID_TCP3_STATUS);
}


int doWrite_TCP3_READS(u_int32_t value)
{
return doWrite(ID_TCP3_READS,  &value);
}


int addWrite_TCP3_READS(u_int32_t value)
{
return addWrite(ID_TCP3_READS, &value);
}


int getStatus_TCP3_READS()
{
return getStatus(ID_TCP3_READS);
}


int doWrite_TCP3_WRITES(u_int32_t value)
{
return doWrite(ID_TCP3_WRITES,  &value);
}


int addWrite_TCP3_WRITES(u_int32_t value)
{
return addWrite(ID_TCP3_WRITES, &value);
}


int getStatus_TCP3_WRITES()
{
return getStatus(ID_TCP3_WRITES);
}


int doWrite_TCP3_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP3_TIMEOUTS,  &value);
}


int addWrite_TCP3_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP3_TIMEOUTS, &value);
}


int getStatus_TCP3_TIMEOUTS()
{
return getStatus(ID_TCP3_TIMEOUTS);
}


int doWrite_TCP3_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP3_COMM_ERRORS,  &value);
}


int addWrite_TCP3_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP3_COMM_ERRORS, &value);
}


int getStatus_TCP3_COMM_ERRORS()
{
return getStatus(ID_TCP3_COMM_ERRORS);
}


int doWrite_TCP3_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP3_LAST_ERROR,  &value);
}


int addWrite_TCP3_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP3_LAST_ERROR, &value);
}


int getStatus_TCP3_LAST_ERROR()
{
return getStatus(ID_TCP3_LAST_ERROR);
}


int doWrite_TCP3_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP3_WRITE_QUEUE,  &value);
}


int addWrite_TCP3_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP3_WRITE_QUEUE, &value);
}


int getStatus_TCP3_WRITE_QUEUE()
{
return getStatus(ID_TCP3_WRITE_QUEUE);
}


int doWrite_TCP3_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP3_READ_QUEUE,  &value);
}


int addWrite_TCP3_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP3_READ_QUEUE, &value);
}


int getStatus_TCP3_READ_QUEUE()
{
return getStatus(ID_TCP3_READ_QUEUE);
}


int doWrite_TCP4_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP4_TYPE_PORT,  &value);
}


int addWrite_TCP4_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP4_TYPE_PORT, &value);
}


int getStatus_TCP4_TYPE_PORT()
{
return getStatus(ID_TCP4_TYPE_PORT);
}


int doWrite_TCP4_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP4_IP_ADDRESS,  &value);
}


int addWrite_TCP4_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP4_IP_ADDRESS, &value);
}


int getStatus_TCP4_IP_ADDRESS()
{
return getStatus(ID_TCP4_IP_ADDRESS);
}


int doWrite_TCP4_STATUS(u_int32_t value)
{
return doWrite(ID_TCP4_STATUS,  &value);
}


int addWrite_TCP4_STATUS(u_int32_t value)
{
return addWrite(ID_TCP4_STATUS, &value);
}


int getStatus_TCP4_STATUS()
{
return getStatus(ID_TCP4_STATUS);
}


int doWrite_TCP4_READS(u_int32_t value)
{
return doWrite(ID_TCP4_READS,  &value);
}


int addWrite_TCP4_READS(u_int32_t value)
{
return addWrite(ID_TCP4_READS, &value);
}


int getStatus_TCP4_READS()
{
return getStatus(ID_TCP4_READS);
}


int doWrite_TCP4_WRITES(u_int32_t value)
{
return doWrite(ID_TCP4_WRITES,  &value);
}


int addWrite_TCP4_WRITES(u_int32_t value)
{
return addWrite(ID_TCP4_WRITES, &value);
}


int getStatus_TCP4_WRITES()
{
return getStatus(ID_TCP4_WRITES);
}


int doWrite_TCP4_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP4_TIMEOUTS,  &value);
}


int addWrite_TCP4_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP4_TIMEOUTS, &value);
}


int getStatus_TCP4_TIMEOUTS()
{
return getStatus(ID_TCP4_TIMEOUTS);
}


int doWrite_TCP4_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP4_COMM_ERRORS,  &value);
}


int addWrite_TCP4_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP4_COMM_ERRORS, &value);
}


int getStatus_TCP4_COMM_ERRORS()
{
return getStatus(ID_TCP4_COMM_ERRORS);
}


int doWrite_TCP4_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP4_LAST_ERROR,  &value);
}


int addWrite_TCP4_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP4_LAST_ERROR, &value);
}


int getStatus_TCP4_LAST_ERROR()
{
return getStatus(ID_TCP4_LAST_ERROR);
}


int doWrite_TCP4_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP4_WRITE_QUEUE,  &value);
}


int addWrite_TCP4_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP4_WRITE_QUEUE, &value);
}


int getStatus_TCP4_WRITE_QUEUE()
{
return getStatus(ID_TCP4_WRITE_QUEUE);
}


int doWrite_TCP4_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP4_READ_QUEUE,  &value);
}


int addWrite_TCP4_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP4_READ_QUEUE, &value);
}


int getStatus_TCP4_READ_QUEUE()
{
return getStatus(ID_TCP4_READ_QUEUE);
}


int doWrite_TCP5_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP5_TYPE_PORT,  &value);
}


int addWrite_TCP5_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP5_TYPE_PORT, &value);
}


int getStatus_TCP5_TYPE_PORT()
{
return getStatus(ID_TCP5_TYPE_PORT);
}


int doWrite_TCP5_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP5_IP_ADDRESS,  &value);
}


int addWrite_TCP5_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP5_IP_ADDRESS, &value);
}


int getStatus_TCP5_IP_ADDRESS()
{
return getStatus(ID_TCP5_IP_ADDRESS);
}


int doWrite_TCP5_STATUS(u_int32_t value)
{
return doWrite(ID_TCP5_STATUS,  &value);
}


int addWrite_TCP5_STATUS(u_int32_t value)
{
return addWrite(ID_TCP5_STATUS, &value);
}


int getStatus_TCP5_STATUS()
{
return getStatus(ID_TCP5_STATUS);
}


int doWrite_TCP5_READS(u_int32_t value)
{
return doWrite(ID_TCP5_READS,  &value);
}


int addWrite_TCP5_READS(u_int32_t value)
{
return addWrite(ID_TCP5_READS, &value);
}


int getStatus_TCP5_READS()
{
return getStatus(ID_TCP5_READS);
}


int doWrite_TCP5_WRITES(u_int32_t value)
{
return doWrite(ID_TCP5_WRITES,  &value);
}


int addWrite_TCP5_WRITES(u_int32_t value)
{
return addWrite(ID_TCP5_WRITES, &value);
}


int getStatus_TCP5_WRITES()
{
return getStatus(ID_TCP5_WRITES);
}


int doWrite_TCP5_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP5_TIMEOUTS,  &value);
}


int addWrite_TCP5_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP5_TIMEOUTS, &value);
}


int getStatus_TCP5_TIMEOUTS()
{
return getStatus(ID_TCP5_TIMEOUTS);
}


int doWrite_TCP5_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP5_COMM_ERRORS,  &value);
}


int addWrite_TCP5_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP5_COMM_ERRORS, &value);
}


int getStatus_TCP5_COMM_ERRORS()
{
return getStatus(ID_TCP5_COMM_ERRORS);
}


int doWrite_TCP5_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP5_LAST_ERROR,  &value);
}


int addWrite_TCP5_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP5_LAST_ERROR, &value);
}


int getStatus_TCP5_LAST_ERROR()
{
return getStatus(ID_TCP5_LAST_ERROR);
}


int doWrite_TCP5_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP5_WRITE_QUEUE,  &value);
}


int addWrite_TCP5_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP5_WRITE_QUEUE, &value);
}


int getStatus_TCP5_WRITE_QUEUE()
{
return getStatus(ID_TCP5_WRITE_QUEUE);
}


int doWrite_TCP5_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP5_READ_QUEUE,  &value);
}


int addWrite_TCP5_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP5_READ_QUEUE, &value);
}


int getStatus_TCP5_READ_QUEUE()
{
return getStatus(ID_TCP5_READ_QUEUE);
}


int doWrite_TCP6_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP6_TYPE_PORT,  &value);
}


int addWrite_TCP6_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP6_TYPE_PORT, &value);
}


int getStatus_TCP6_TYPE_PORT()
{
return getStatus(ID_TCP6_TYPE_PORT);
}


int doWrite_TCP6_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP6_IP_ADDRESS,  &value);
}


int addWrite_TCP6_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP6_IP_ADDRESS, &value);
}


int getStatus_TCP6_IP_ADDRESS()
{
return getStatus(ID_TCP6_IP_ADDRESS);
}


int doWrite_TCP6_STATUS(u_int32_t value)
{
return doWrite(ID_TCP6_STATUS,  &value);
}


int addWrite_TCP6_STATUS(u_int32_t value)
{
return addWrite(ID_TCP6_STATUS, &value);
}


int getStatus_TCP6_STATUS()
{
return getStatus(ID_TCP6_STATUS);
}


int doWrite_TCP6_READS(u_int32_t value)
{
return doWrite(ID_TCP6_READS,  &value);
}


int addWrite_TCP6_READS(u_int32_t value)
{
return addWrite(ID_TCP6_READS, &value);
}


int getStatus_TCP6_READS()
{
return getStatus(ID_TCP6_READS);
}


int doWrite_TCP6_WRITES(u_int32_t value)
{
return doWrite(ID_TCP6_WRITES,  &value);
}


int addWrite_TCP6_WRITES(u_int32_t value)
{
return addWrite(ID_TCP6_WRITES, &value);
}


int getStatus_TCP6_WRITES()
{
return getStatus(ID_TCP6_WRITES);
}


int doWrite_TCP6_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP6_TIMEOUTS,  &value);
}


int addWrite_TCP6_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP6_TIMEOUTS, &value);
}


int getStatus_TCP6_TIMEOUTS()
{
return getStatus(ID_TCP6_TIMEOUTS);
}


int doWrite_TCP6_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP6_COMM_ERRORS,  &value);
}


int addWrite_TCP6_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP6_COMM_ERRORS, &value);
}


int getStatus_TCP6_COMM_ERRORS()
{
return getStatus(ID_TCP6_COMM_ERRORS);
}


int doWrite_TCP6_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP6_LAST_ERROR,  &value);
}


int addWrite_TCP6_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP6_LAST_ERROR, &value);
}


int getStatus_TCP6_LAST_ERROR()
{
return getStatus(ID_TCP6_LAST_ERROR);
}


int doWrite_TCP6_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP6_WRITE_QUEUE,  &value);
}


int addWrite_TCP6_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP6_WRITE_QUEUE, &value);
}


int getStatus_TCP6_WRITE_QUEUE()
{
return getStatus(ID_TCP6_WRITE_QUEUE);
}


int doWrite_TCP6_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP6_READ_QUEUE,  &value);
}


int addWrite_TCP6_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP6_READ_QUEUE, &value);
}


int getStatus_TCP6_READ_QUEUE()
{
return getStatus(ID_TCP6_READ_QUEUE);
}


int doWrite_TCP7_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP7_TYPE_PORT,  &value);
}


int addWrite_TCP7_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP7_TYPE_PORT, &value);
}


int getStatus_TCP7_TYPE_PORT()
{
return getStatus(ID_TCP7_TYPE_PORT);
}


int doWrite_TCP7_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP7_IP_ADDRESS,  &value);
}


int addWrite_TCP7_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP7_IP_ADDRESS, &value);
}


int getStatus_TCP7_IP_ADDRESS()
{
return getStatus(ID_TCP7_IP_ADDRESS);
}


int doWrite_TCP7_STATUS(u_int32_t value)
{
return doWrite(ID_TCP7_STATUS,  &value);
}


int addWrite_TCP7_STATUS(u_int32_t value)
{
return addWrite(ID_TCP7_STATUS, &value);
}


int getStatus_TCP7_STATUS()
{
return getStatus(ID_TCP7_STATUS);
}


int doWrite_TCP7_READS(u_int32_t value)
{
return doWrite(ID_TCP7_READS,  &value);
}


int addWrite_TCP7_READS(u_int32_t value)
{
return addWrite(ID_TCP7_READS, &value);
}


int getStatus_TCP7_READS()
{
return getStatus(ID_TCP7_READS);
}


int doWrite_TCP7_WRITES(u_int32_t value)
{
return doWrite(ID_TCP7_WRITES,  &value);
}


int addWrite_TCP7_WRITES(u_int32_t value)
{
return addWrite(ID_TCP7_WRITES, &value);
}


int getStatus_TCP7_WRITES()
{
return getStatus(ID_TCP7_WRITES);
}


int doWrite_TCP7_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP7_TIMEOUTS,  &value);
}


int addWrite_TCP7_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP7_TIMEOUTS, &value);
}


int getStatus_TCP7_TIMEOUTS()
{
return getStatus(ID_TCP7_TIMEOUTS);
}


int doWrite_TCP7_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP7_COMM_ERRORS,  &value);
}


int addWrite_TCP7_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP7_COMM_ERRORS, &value);
}


int getStatus_TCP7_COMM_ERRORS()
{
return getStatus(ID_TCP7_COMM_ERRORS);
}


int doWrite_TCP7_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP7_LAST_ERROR,  &value);
}


int addWrite_TCP7_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP7_LAST_ERROR, &value);
}


int getStatus_TCP7_LAST_ERROR()
{
return getStatus(ID_TCP7_LAST_ERROR);
}


int doWrite_TCP7_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP7_WRITE_QUEUE,  &value);
}


int addWrite_TCP7_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP7_WRITE_QUEUE, &value);
}


int getStatus_TCP7_WRITE_QUEUE()
{
return getStatus(ID_TCP7_WRITE_QUEUE);
}


int doWrite_TCP7_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP7_READ_QUEUE,  &value);
}


int addWrite_TCP7_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP7_READ_QUEUE, &value);
}


int getStatus_TCP7_READ_QUEUE()
{
return getStatus(ID_TCP7_READ_QUEUE);
}


int doWrite_TCP8_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP8_TYPE_PORT,  &value);
}


int addWrite_TCP8_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP8_TYPE_PORT, &value);
}


int getStatus_TCP8_TYPE_PORT()
{
return getStatus(ID_TCP8_TYPE_PORT);
}


int doWrite_TCP8_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP8_IP_ADDRESS,  &value);
}


int addWrite_TCP8_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP8_IP_ADDRESS, &value);
}


int getStatus_TCP8_IP_ADDRESS()
{
return getStatus(ID_TCP8_IP_ADDRESS);
}


int doWrite_TCP8_STATUS(u_int32_t value)
{
return doWrite(ID_TCP8_STATUS,  &value);
}


int addWrite_TCP8_STATUS(u_int32_t value)
{
return addWrite(ID_TCP8_STATUS, &value);
}


int getStatus_TCP8_STATUS()
{
return getStatus(ID_TCP8_STATUS);
}


int doWrite_TCP8_READS(u_int32_t value)
{
return doWrite(ID_TCP8_READS,  &value);
}


int addWrite_TCP8_READS(u_int32_t value)
{
return addWrite(ID_TCP8_READS, &value);
}


int getStatus_TCP8_READS()
{
return getStatus(ID_TCP8_READS);
}


int doWrite_TCP8_WRITES(u_int32_t value)
{
return doWrite(ID_TCP8_WRITES,  &value);
}


int addWrite_TCP8_WRITES(u_int32_t value)
{
return addWrite(ID_TCP8_WRITES, &value);
}


int getStatus_TCP8_WRITES()
{
return getStatus(ID_TCP8_WRITES);
}


int doWrite_TCP8_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP8_TIMEOUTS,  &value);
}


int addWrite_TCP8_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP8_TIMEOUTS, &value);
}


int getStatus_TCP8_TIMEOUTS()
{
return getStatus(ID_TCP8_TIMEOUTS);
}


int doWrite_TCP8_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP8_COMM_ERRORS,  &value);
}


int addWrite_TCP8_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP8_COMM_ERRORS, &value);
}


int getStatus_TCP8_COMM_ERRORS()
{
return getStatus(ID_TCP8_COMM_ERRORS);
}


int doWrite_TCP8_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP8_LAST_ERROR,  &value);
}


int addWrite_TCP8_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP8_LAST_ERROR, &value);
}


int getStatus_TCP8_LAST_ERROR()
{
return getStatus(ID_TCP8_LAST_ERROR);
}


int doWrite_TCP8_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP8_WRITE_QUEUE,  &value);
}


int addWrite_TCP8_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP8_WRITE_QUEUE, &value);
}


int getStatus_TCP8_WRITE_QUEUE()
{
return getStatus(ID_TCP8_WRITE_QUEUE);
}


int doWrite_TCP8_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP8_READ_QUEUE,  &value);
}


int addWrite_TCP8_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP8_READ_QUEUE, &value);
}


int getStatus_TCP8_READ_QUEUE()
{
return getStatus(ID_TCP8_READ_QUEUE);
}


int doWrite_TCP9_TYPE_PORT(u_int32_t value)
{
return doWrite(ID_TCP9_TYPE_PORT,  &value);
}


int addWrite_TCP9_TYPE_PORT(u_int32_t value)
{
return addWrite(ID_TCP9_TYPE_PORT, &value);
}


int getStatus_TCP9_TYPE_PORT()
{
return getStatus(ID_TCP9_TYPE_PORT);
}


int doWrite_TCP9_IP_ADDRESS(u_int32_t value)
{
return doWrite(ID_TCP9_IP_ADDRESS,  &value);
}


int addWrite_TCP9_IP_ADDRESS(u_int32_t value)
{
return addWrite(ID_TCP9_IP_ADDRESS, &value);
}


int getStatus_TCP9_IP_ADDRESS()
{
return getStatus(ID_TCP9_IP_ADDRESS);
}


int doWrite_TCP9_STATUS(u_int32_t value)
{
return doWrite(ID_TCP9_STATUS,  &value);
}


int addWrite_TCP9_STATUS(u_int32_t value)
{
return addWrite(ID_TCP9_STATUS, &value);
}


int getStatus_TCP9_STATUS()
{
return getStatus(ID_TCP9_STATUS);
}


int doWrite_TCP9_READS(u_int32_t value)
{
return doWrite(ID_TCP9_READS,  &value);
}


int addWrite_TCP9_READS(u_int32_t value)
{
return addWrite(ID_TCP9_READS, &value);
}


int getStatus_TCP9_READS()
{
return getStatus(ID_TCP9_READS);
}


int doWrite_TCP9_WRITES(u_int32_t value)
{
return doWrite(ID_TCP9_WRITES,  &value);
}


int addWrite_TCP9_WRITES(u_int32_t value)
{
return addWrite(ID_TCP9_WRITES, &value);
}


int getStatus_TCP9_WRITES()
{
return getStatus(ID_TCP9_WRITES);
}


int doWrite_TCP9_TIMEOUTS(u_int32_t value)
{
return doWrite(ID_TCP9_TIMEOUTS,  &value);
}


int addWrite_TCP9_TIMEOUTS(u_int32_t value)
{
return addWrite(ID_TCP9_TIMEOUTS, &value);
}


int getStatus_TCP9_TIMEOUTS()
{
return getStatus(ID_TCP9_TIMEOUTS);
}


int doWrite_TCP9_COMM_ERRORS(u_int32_t value)
{
return doWrite(ID_TCP9_COMM_ERRORS,  &value);
}


int addWrite_TCP9_COMM_ERRORS(u_int32_t value)
{
return addWrite(ID_TCP9_COMM_ERRORS, &value);
}


int getStatus_TCP9_COMM_ERRORS()
{
return getStatus(ID_TCP9_COMM_ERRORS);
}


int doWrite_TCP9_LAST_ERROR(u_int32_t value)
{
return doWrite(ID_TCP9_LAST_ERROR,  &value);
}


int addWrite_TCP9_LAST_ERROR(u_int32_t value)
{
return addWrite(ID_TCP9_LAST_ERROR, &value);
}


int getStatus_TCP9_LAST_ERROR()
{
return getStatus(ID_TCP9_LAST_ERROR);
}


int doWrite_TCP9_WRITE_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP9_WRITE_QUEUE,  &value);
}


int addWrite_TCP9_WRITE_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP9_WRITE_QUEUE, &value);
}


int getStatus_TCP9_WRITE_QUEUE()
{
return getStatus(ID_TCP9_WRITE_QUEUE);
}


int doWrite_TCP9_READ_QUEUE(u_int32_t value)
{
return doWrite(ID_TCP9_READ_QUEUE,  &value);
}


int addWrite_TCP9_READ_QUEUE(u_int32_t value)
{
return addWrite(ID_TCP9_READ_QUEUE, &value);
}


int getStatus_TCP9_READ_QUEUE()
{
return getStatus(ID_TCP9_READ_QUEUE);
}


int doWrite_NODE_01_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_01_DEV_NODE,  &value);
}


int addWrite_NODE_01_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_01_DEV_NODE, &value);
}


int getStatus_NODE_01_DEV_NODE()
{
return getStatus(ID_NODE_01_DEV_NODE);
}


int doWrite_NODE_01_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_01_STATUS,  &value);
}


int addWrite_NODE_01_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_01_STATUS, &value);
}


int getStatus_NODE_01_STATUS()
{
return getStatus(ID_NODE_01_STATUS);
}


int doWrite_NODE_02_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_02_DEV_NODE,  &value);
}


int addWrite_NODE_02_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_02_DEV_NODE, &value);
}


int getStatus_NODE_02_DEV_NODE()
{
return getStatus(ID_NODE_02_DEV_NODE);
}


int doWrite_NODE_02_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_02_STATUS,  &value);
}


int addWrite_NODE_02_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_02_STATUS, &value);
}


int getStatus_NODE_02_STATUS()
{
return getStatus(ID_NODE_02_STATUS);
}


int doWrite_NODE_03_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_03_DEV_NODE,  &value);
}


int addWrite_NODE_03_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_03_DEV_NODE, &value);
}


int getStatus_NODE_03_DEV_NODE()
{
return getStatus(ID_NODE_03_DEV_NODE);
}


int doWrite_NODE_03_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_03_STATUS,  &value);
}


int addWrite_NODE_03_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_03_STATUS, &value);
}


int getStatus_NODE_03_STATUS()
{
return getStatus(ID_NODE_03_STATUS);
}


int doWrite_NODE_04_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_04_DEV_NODE,  &value);
}


int addWrite_NODE_04_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_04_DEV_NODE, &value);
}


int getStatus_NODE_04_DEV_NODE()
{
return getStatus(ID_NODE_04_DEV_NODE);
}


int doWrite_NODE_04_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_04_STATUS,  &value);
}


int addWrite_NODE_04_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_04_STATUS, &value);
}


int getStatus_NODE_04_STATUS()
{
return getStatus(ID_NODE_04_STATUS);
}


int doWrite_NODE_05_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_05_DEV_NODE,  &value);
}


int addWrite_NODE_05_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_05_DEV_NODE, &value);
}


int getStatus_NODE_05_DEV_NODE()
{
return getStatus(ID_NODE_05_DEV_NODE);
}


int doWrite_NODE_05_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_05_STATUS,  &value);
}


int addWrite_NODE_05_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_05_STATUS, &value);
}


int getStatus_NODE_05_STATUS()
{
return getStatus(ID_NODE_05_STATUS);
}


int doWrite_NODE_06_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_06_DEV_NODE,  &value);
}


int addWrite_NODE_06_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_06_DEV_NODE, &value);
}


int getStatus_NODE_06_DEV_NODE()
{
return getStatus(ID_NODE_06_DEV_NODE);
}


int doWrite_NODE_06_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_06_STATUS,  &value);
}


int addWrite_NODE_06_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_06_STATUS, &value);
}


int getStatus_NODE_06_STATUS()
{
return getStatus(ID_NODE_06_STATUS);
}


int doWrite_NODE_07_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_07_DEV_NODE,  &value);
}


int addWrite_NODE_07_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_07_DEV_NODE, &value);
}


int getStatus_NODE_07_DEV_NODE()
{
return getStatus(ID_NODE_07_DEV_NODE);
}


int doWrite_NODE_07_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_07_STATUS,  &value);
}


int addWrite_NODE_07_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_07_STATUS, &value);
}


int getStatus_NODE_07_STATUS()
{
return getStatus(ID_NODE_07_STATUS);
}


int doWrite_NODE_08_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_08_DEV_NODE,  &value);
}


int addWrite_NODE_08_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_08_DEV_NODE, &value);
}


int getStatus_NODE_08_DEV_NODE()
{
return getStatus(ID_NODE_08_DEV_NODE);
}


int doWrite_NODE_08_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_08_STATUS,  &value);
}


int addWrite_NODE_08_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_08_STATUS, &value);
}


int getStatus_NODE_08_STATUS()
{
return getStatus(ID_NODE_08_STATUS);
}


int doWrite_NODE_09_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_09_DEV_NODE,  &value);
}


int addWrite_NODE_09_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_09_DEV_NODE, &value);
}


int getStatus_NODE_09_DEV_NODE()
{
return getStatus(ID_NODE_09_DEV_NODE);
}


int doWrite_NODE_09_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_09_STATUS,  &value);
}


int addWrite_NODE_09_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_09_STATUS, &value);
}


int getStatus_NODE_09_STATUS()
{
return getStatus(ID_NODE_09_STATUS);
}


int doWrite_NODE_10_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_10_DEV_NODE,  &value);
}


int addWrite_NODE_10_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_10_DEV_NODE, &value);
}


int getStatus_NODE_10_DEV_NODE()
{
return getStatus(ID_NODE_10_DEV_NODE);
}


int doWrite_NODE_10_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_10_STATUS,  &value);
}


int addWrite_NODE_10_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_10_STATUS, &value);
}


int getStatus_NODE_10_STATUS()
{
return getStatus(ID_NODE_10_STATUS);
}


int doWrite_NODE_11_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_11_DEV_NODE,  &value);
}


int addWrite_NODE_11_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_11_DEV_NODE, &value);
}


int getStatus_NODE_11_DEV_NODE()
{
return getStatus(ID_NODE_11_DEV_NODE);
}


int doWrite_NODE_11_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_11_STATUS,  &value);
}


int addWrite_NODE_11_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_11_STATUS, &value);
}


int getStatus_NODE_11_STATUS()
{
return getStatus(ID_NODE_11_STATUS);
}


int doWrite_NODE_12_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_12_DEV_NODE,  &value);
}


int addWrite_NODE_12_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_12_DEV_NODE, &value);
}


int getStatus_NODE_12_DEV_NODE()
{
return getStatus(ID_NODE_12_DEV_NODE);
}


int doWrite_NODE_12_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_12_STATUS,  &value);
}


int addWrite_NODE_12_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_12_STATUS, &value);
}


int getStatus_NODE_12_STATUS()
{
return getStatus(ID_NODE_12_STATUS);
}


int doWrite_NODE_13_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_13_DEV_NODE,  &value);
}


int addWrite_NODE_13_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_13_DEV_NODE, &value);
}


int getStatus_NODE_13_DEV_NODE()
{
return getStatus(ID_NODE_13_DEV_NODE);
}


int doWrite_NODE_13_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_13_STATUS,  &value);
}


int addWrite_NODE_13_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_13_STATUS, &value);
}


int getStatus_NODE_13_STATUS()
{
return getStatus(ID_NODE_13_STATUS);
}


int doWrite_NODE_14_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_14_DEV_NODE,  &value);
}


int addWrite_NODE_14_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_14_DEV_NODE, &value);
}


int getStatus_NODE_14_DEV_NODE()
{
return getStatus(ID_NODE_14_DEV_NODE);
}


int doWrite_NODE_14_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_14_STATUS,  &value);
}


int addWrite_NODE_14_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_14_STATUS, &value);
}


int getStatus_NODE_14_STATUS()
{
return getStatus(ID_NODE_14_STATUS);
}


int doWrite_NODE_15_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_15_DEV_NODE,  &value);
}


int addWrite_NODE_15_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_15_DEV_NODE, &value);
}


int getStatus_NODE_15_DEV_NODE()
{
return getStatus(ID_NODE_15_DEV_NODE);
}


int doWrite_NODE_15_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_15_STATUS,  &value);
}


int addWrite_NODE_15_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_15_STATUS, &value);
}


int getStatus_NODE_15_STATUS()
{
return getStatus(ID_NODE_15_STATUS);
}


int doWrite_NODE_16_DEV_NODE(u_int32_t value)
{
return doWrite(ID_NODE_16_DEV_NODE,  &value);
}


int addWrite_NODE_16_DEV_NODE(u_int32_t value)
{
return addWrite(ID_NODE_16_DEV_NODE, &value);
}


int getStatus_NODE_16_DEV_NODE()
{
return getStatus(ID_NODE_16_DEV_NODE);
}


int doWrite_NODE_16_STATUS(u_int32_t value)
{
return doWrite(ID_NODE_16_STATUS,  &value);
}


int addWrite_NODE_16_STATUS(u_int32_t value)
{
return addWrite(ID_NODE_16_STATUS, &value);
}


int getStatus_NODE_16_STATUS()
{
return getStatus(ID_NODE_16_STATUS);
}


int doWrite_PLC_FWrevision(u_int16_t value)
{
return doWrite(ID_PLC_FWrevision,  &value);
}


int addWrite_PLC_FWrevision(u_int16_t value)
{
return addWrite(ID_PLC_FWrevision, &value);
}


int getStatus_PLC_FWrevision()
{
return getStatus(ID_PLC_FWrevision);
}


int doWrite_PLC_HWconfig(u_int16_t value)
{
return doWrite(ID_PLC_HWconfig,  &value);
}


int addWrite_PLC_HWconfig(u_int16_t value)
{
return addWrite(ID_PLC_HWconfig, &value);
}


int getStatus_PLC_HWconfig()
{
return getStatus(ID_PLC_HWconfig);
}


int doWrite_PLC_DigDir_1(int value)
{
return doWrite(ID_PLC_DigDir_1,  &value);
}


int addWrite_PLC_DigDir_1(int value)
{
return addWrite(ID_PLC_DigDir_1, &value);
}


int getStatus_PLC_DigDir_1()
{
return getStatus(ID_PLC_DigDir_1);
}


int doWrite_PLC_DigDir_2(int value)
{
return doWrite(ID_PLC_DigDir_2,  &value);
}


int addWrite_PLC_DigDir_2(int value)
{
return addWrite(ID_PLC_DigDir_2, &value);
}


int getStatus_PLC_DigDir_2()
{
return getStatus(ID_PLC_DigDir_2);
}


int doWrite_PLC_DigDir_3(int value)
{
return doWrite(ID_PLC_DigDir_3,  &value);
}


int addWrite_PLC_DigDir_3(int value)
{
return addWrite(ID_PLC_DigDir_3, &value);
}


int getStatus_PLC_DigDir_3()
{
return getStatus(ID_PLC_DigDir_3);
}


int doWrite_PLC_DigDir_4(int value)
{
return doWrite(ID_PLC_DigDir_4,  &value);
}


int addWrite_PLC_DigDir_4(int value)
{
return addWrite(ID_PLC_DigDir_4, &value);
}


int getStatus_PLC_DigDir_4()
{
return getStatus(ID_PLC_DigDir_4);
}


int doWrite_PLC_DigDir_5(int value)
{
return doWrite(ID_PLC_DigDir_5,  &value);
}


int addWrite_PLC_DigDir_5(int value)
{
return addWrite(ID_PLC_DigDir_5, &value);
}


int getStatus_PLC_DigDir_5()
{
return getStatus(ID_PLC_DigDir_5);
}


int doWrite_PLC_DigDir_6(int value)
{
return doWrite(ID_PLC_DigDir_6,  &value);
}


int addWrite_PLC_DigDir_6(int value)
{
return addWrite(ID_PLC_DigDir_6, &value);
}


int getStatus_PLC_DigDir_6()
{
return getStatus(ID_PLC_DigDir_6);
}


int doWrite_PLC_DigDir_7(int value)
{
return doWrite(ID_PLC_DigDir_7,  &value);
}


int addWrite_PLC_DigDir_7(int value)
{
return addWrite(ID_PLC_DigDir_7, &value);
}


int getStatus_PLC_DigDir_7()
{
return getStatus(ID_PLC_DigDir_7);
}


int doWrite_PLC_DigDir_8(int value)
{
return doWrite(ID_PLC_DigDir_8,  &value);
}


int addWrite_PLC_DigDir_8(int value)
{
return addWrite(ID_PLC_DigDir_8, &value);
}


int getStatus_PLC_DigDir_8()
{
return getStatus(ID_PLC_DigDir_8);
}


int doWrite_PLC_AnInConf_1(u_int16_t value)
{
return doWrite(ID_PLC_AnInConf_1,  &value);
}


int addWrite_PLC_AnInConf_1(u_int16_t value)
{
return addWrite(ID_PLC_AnInConf_1, &value);
}


int getStatus_PLC_AnInConf_1()
{
return getStatus(ID_PLC_AnInConf_1);
}


int doWrite_PLC_AnInConf_2(u_int16_t value)
{
return doWrite(ID_PLC_AnInConf_2,  &value);
}


int addWrite_PLC_AnInConf_2(u_int16_t value)
{
return addWrite(ID_PLC_AnInConf_2, &value);
}


int getStatus_PLC_AnInConf_2()
{
return getStatus(ID_PLC_AnInConf_2);
}


int doWrite_PLC_AnOutConf_1(u_int16_t value)
{
return doWrite(ID_PLC_AnOutConf_1,  &value);
}


int addWrite_PLC_AnOutConf_1(u_int16_t value)
{
return addWrite(ID_PLC_AnOutConf_1, &value);
}


int getStatus_PLC_AnOutConf_1()
{
return getStatus(ID_PLC_AnOutConf_1);
}


int doWrite_PLC_AnOutConf_2(u_int16_t value)
{
return doWrite(ID_PLC_AnOutConf_2,  &value);
}


int addWrite_PLC_AnOutConf_2(u_int16_t value)
{
return addWrite(ID_PLC_AnOutConf_2, &value);
}


int getStatus_PLC_AnOutConf_2()
{
return getStatus(ID_PLC_AnOutConf_2);
}


int doWrite_PLC_AnOutConf_3(u_int16_t value)
{
return doWrite(ID_PLC_AnOutConf_3,  &value);
}


int addWrite_PLC_AnOutConf_3(u_int16_t value)
{
return addWrite(ID_PLC_AnOutConf_3, &value);
}


int getStatus_PLC_AnOutConf_3()
{
return getStatus(ID_PLC_AnOutConf_3);
}


int doWrite_PLC_AnOutConf_4(u_int16_t value)
{
return doWrite(ID_PLC_AnOutConf_4,  &value);
}


int addWrite_PLC_AnOutConf_4(u_int16_t value)
{
return addWrite(ID_PLC_AnOutConf_4, &value);
}


int getStatus_PLC_AnOutConf_4()
{
return getStatus(ID_PLC_AnOutConf_4);
}


int doWrite_PLC_DigIn_1(int value)
{
return doWrite(ID_PLC_DigIn_1,  &value);
}


int addWrite_PLC_DigIn_1(int value)
{
return addWrite(ID_PLC_DigIn_1, &value);
}


int getStatus_PLC_DigIn_1()
{
return getStatus(ID_PLC_DigIn_1);
}


int doWrite_PLC_DigIn_2(int value)
{
return doWrite(ID_PLC_DigIn_2,  &value);
}


int addWrite_PLC_DigIn_2(int value)
{
return addWrite(ID_PLC_DigIn_2, &value);
}


int getStatus_PLC_DigIn_2()
{
return getStatus(ID_PLC_DigIn_2);
}


int doWrite_PLC_DigIn_3(int value)
{
return doWrite(ID_PLC_DigIn_3,  &value);
}


int addWrite_PLC_DigIn_3(int value)
{
return addWrite(ID_PLC_DigIn_3, &value);
}


int getStatus_PLC_DigIn_3()
{
return getStatus(ID_PLC_DigIn_3);
}


int doWrite_PLC_DigIn_4(int value)
{
return doWrite(ID_PLC_DigIn_4,  &value);
}


int addWrite_PLC_DigIn_4(int value)
{
return addWrite(ID_PLC_DigIn_4, &value);
}


int getStatus_PLC_DigIn_4()
{
return getStatus(ID_PLC_DigIn_4);
}


int doWrite_PLC_DigIn_5(int value)
{
return doWrite(ID_PLC_DigIn_5,  &value);
}


int addWrite_PLC_DigIn_5(int value)
{
return addWrite(ID_PLC_DigIn_5, &value);
}


int getStatus_PLC_DigIn_5()
{
return getStatus(ID_PLC_DigIn_5);
}


int doWrite_PLC_DigIn_6(int value)
{
return doWrite(ID_PLC_DigIn_6,  &value);
}


int addWrite_PLC_DigIn_6(int value)
{
return addWrite(ID_PLC_DigIn_6, &value);
}


int getStatus_PLC_DigIn_6()
{
return getStatus(ID_PLC_DigIn_6);
}


int doWrite_PLC_DigIn_7(int value)
{
return doWrite(ID_PLC_DigIn_7,  &value);
}


int addWrite_PLC_DigIn_7(int value)
{
return addWrite(ID_PLC_DigIn_7, &value);
}


int getStatus_PLC_DigIn_7()
{
return getStatus(ID_PLC_DigIn_7);
}


int doWrite_PLC_DigIn_8(int value)
{
return doWrite(ID_PLC_DigIn_8,  &value);
}


int addWrite_PLC_DigIn_8(int value)
{
return addWrite(ID_PLC_DigIn_8, &value);
}


int getStatus_PLC_DigIn_8()
{
return getStatus(ID_PLC_DigIn_8);
}


int doWrite_PLC_DigIn_9(int value)
{
return doWrite(ID_PLC_DigIn_9,  &value);
}


int addWrite_PLC_DigIn_9(int value)
{
return addWrite(ID_PLC_DigIn_9, &value);
}


int getStatus_PLC_DigIn_9()
{
return getStatus(ID_PLC_DigIn_9);
}


int doWrite_PLC_DigIn_10(int value)
{
return doWrite(ID_PLC_DigIn_10,  &value);
}


int addWrite_PLC_DigIn_10(int value)
{
return addWrite(ID_PLC_DigIn_10, &value);
}


int getStatus_PLC_DigIn_10()
{
return getStatus(ID_PLC_DigIn_10);
}


int doWrite_PLC_DigIn_11(int value)
{
return doWrite(ID_PLC_DigIn_11,  &value);
}


int addWrite_PLC_DigIn_11(int value)
{
return addWrite(ID_PLC_DigIn_11, &value);
}


int getStatus_PLC_DigIn_11()
{
return getStatus(ID_PLC_DigIn_11);
}


int doWrite_PLC_DigIn_12(int value)
{
return doWrite(ID_PLC_DigIn_12,  &value);
}


int addWrite_PLC_DigIn_12(int value)
{
return addWrite(ID_PLC_DigIn_12, &value);
}


int getStatus_PLC_DigIn_12()
{
return getStatus(ID_PLC_DigIn_12);
}


int doWrite_PLC_AnIn_1(int16_t value)
{
return doWrite(ID_PLC_AnIn_1,  &value);
}


int addWrite_PLC_AnIn_1(int16_t value)
{
return addWrite(ID_PLC_AnIn_1, &value);
}


int getStatus_PLC_AnIn_1()
{
return getStatus(ID_PLC_AnIn_1);
}


int doWrite_PLC_AnIn_2(int16_t value)
{
return doWrite(ID_PLC_AnIn_2,  &value);
}


int addWrite_PLC_AnIn_2(int16_t value)
{
return addWrite(ID_PLC_AnIn_2, &value);
}


int getStatus_PLC_AnIn_2()
{
return getStatus(ID_PLC_AnIn_2);
}


int doWrite_PLC_AnIn_3(int16_t value)
{
return doWrite(ID_PLC_AnIn_3,  &value);
}


int addWrite_PLC_AnIn_3(int16_t value)
{
return addWrite(ID_PLC_AnIn_3, &value);
}


int getStatus_PLC_AnIn_3()
{
return getStatus(ID_PLC_AnIn_3);
}


int doWrite_PLC_AnIn_4(int16_t value)
{
return doWrite(ID_PLC_AnIn_4,  &value);
}


int addWrite_PLC_AnIn_4(int16_t value)
{
return addWrite(ID_PLC_AnIn_4, &value);
}


int getStatus_PLC_AnIn_4()
{
return getStatus(ID_PLC_AnIn_4);
}


int doWrite_PLC_AnIn_5(int16_t value)
{
return doWrite(ID_PLC_AnIn_5,  &value);
}


int addWrite_PLC_AnIn_5(int16_t value)
{
return addWrite(ID_PLC_AnIn_5, &value);
}


int getStatus_PLC_AnIn_5()
{
return getStatus(ID_PLC_AnIn_5);
}


int doWrite_PLC_Tamb(int16_t value)
{
return doWrite(ID_PLC_Tamb,  &value);
}


int addWrite_PLC_Tamb(int16_t value)
{
return addWrite(ID_PLC_Tamb, &value);
}


int getStatus_PLC_Tamb()
{
return getStatus(ID_PLC_Tamb);
}


int doWrite_PLC_Encoder(u_int32_t value)
{
return doWrite(ID_PLC_Encoder,  &value);
}


int addWrite_PLC_Encoder(u_int32_t value)
{
return addWrite(ID_PLC_Encoder, &value);
}


int getStatus_PLC_Encoder()
{
return getStatus(ID_PLC_Encoder);
}


int doWrite_PLC_Capture(u_int32_t value)
{
return doWrite(ID_PLC_Capture,  &value);
}


int addWrite_PLC_Capture(u_int32_t value)
{
return addWrite(ID_PLC_Capture, &value);
}


int getStatus_PLC_Capture()
{
return getStatus(ID_PLC_Capture);
}


int doWrite_PLC_DigOut_1(int value)
{
return doWrite(ID_PLC_DigOut_1,  &value);
}


int addWrite_PLC_DigOut_1(int value)
{
return addWrite(ID_PLC_DigOut_1, &value);
}


int getStatus_PLC_DigOut_1()
{
return getStatus(ID_PLC_DigOut_1);
}


int doWrite_PLC_DigOut_2(int value)
{
return doWrite(ID_PLC_DigOut_2,  &value);
}


int addWrite_PLC_DigOut_2(int value)
{
return addWrite(ID_PLC_DigOut_2, &value);
}


int getStatus_PLC_DigOut_2()
{
return getStatus(ID_PLC_DigOut_2);
}


int doWrite_PLC_DigOut_3(int value)
{
return doWrite(ID_PLC_DigOut_3,  &value);
}


int addWrite_PLC_DigOut_3(int value)
{
return addWrite(ID_PLC_DigOut_3, &value);
}


int getStatus_PLC_DigOut_3()
{
return getStatus(ID_PLC_DigOut_3);
}


int doWrite_PLC_DigOut_4(int value)
{
return doWrite(ID_PLC_DigOut_4,  &value);
}


int addWrite_PLC_DigOut_4(int value)
{
return addWrite(ID_PLC_DigOut_4, &value);
}


int getStatus_PLC_DigOut_4()
{
return getStatus(ID_PLC_DigOut_4);
}


int doWrite_PLC_DigOut_5(int value)
{
return doWrite(ID_PLC_DigOut_5,  &value);
}


int addWrite_PLC_DigOut_5(int value)
{
return addWrite(ID_PLC_DigOut_5, &value);
}


int getStatus_PLC_DigOut_5()
{
return getStatus(ID_PLC_DigOut_5);
}


int doWrite_PLC_DigOut_6(int value)
{
return doWrite(ID_PLC_DigOut_6,  &value);
}


int addWrite_PLC_DigOut_6(int value)
{
return addWrite(ID_PLC_DigOut_6, &value);
}


int getStatus_PLC_DigOut_6()
{
return getStatus(ID_PLC_DigOut_6);
}


int doWrite_PLC_DigOut_7(int value)
{
return doWrite(ID_PLC_DigOut_7,  &value);
}


int addWrite_PLC_DigOut_7(int value)
{
return addWrite(ID_PLC_DigOut_7, &value);
}


int getStatus_PLC_DigOut_7()
{
return getStatus(ID_PLC_DigOut_7);
}


int doWrite_PLC_DigOut_8(int value)
{
return doWrite(ID_PLC_DigOut_8,  &value);
}


int addWrite_PLC_DigOut_8(int value)
{
return addWrite(ID_PLC_DigOut_8, &value);
}


int getStatus_PLC_DigOut_8()
{
return getStatus(ID_PLC_DigOut_8);
}


int doWrite_PLC_AnOut_1(int16_t value)
{
return doWrite(ID_PLC_AnOut_1,  &value);
}


int addWrite_PLC_AnOut_1(int16_t value)
{
return addWrite(ID_PLC_AnOut_1, &value);
}


int getStatus_PLC_AnOut_1()
{
return getStatus(ID_PLC_AnOut_1);
}


int doWrite_PLC_AnOut_2(int16_t value)
{
return doWrite(ID_PLC_AnOut_2,  &value);
}


int addWrite_PLC_AnOut_2(int16_t value)
{
return addWrite(ID_PLC_AnOut_2, &value);
}


int getStatus_PLC_AnOut_2()
{
return getStatus(ID_PLC_AnOut_2);
}


int doWrite_PLC_AnOut_3(int16_t value)
{
return doWrite(ID_PLC_AnOut_3,  &value);
}


int addWrite_PLC_AnOut_3(int16_t value)
{
return addWrite(ID_PLC_AnOut_3, &value);
}


int getStatus_PLC_AnOut_3()
{
return getStatus(ID_PLC_AnOut_3);
}


int doWrite_PLC_AnOut_4(int16_t value)
{
return doWrite(ID_PLC_AnOut_4,  &value);
}


int addWrite_PLC_AnOut_4(int16_t value)
{
return addWrite(ID_PLC_AnOut_4, &value);
}


int getStatus_PLC_AnOut_4()
{
return getStatus(ID_PLC_AnOut_4);
}


int doWrite_PLC_EncoderStart(u_int16_t value)
{
return doWrite(ID_PLC_EncoderStart,  &value);
}


int addWrite_PLC_EncoderStart(u_int16_t value)
{
return addWrite(ID_PLC_EncoderStart, &value);
}


int getStatus_PLC_EncoderStart()
{
return getStatus(ID_PLC_EncoderStart);
}


int doWrite_PLC_EncoderReset(u_int16_t value)
{
return doWrite(ID_PLC_EncoderReset,  &value);
}


int addWrite_PLC_EncoderReset(u_int16_t value)
{
return addWrite(ID_PLC_EncoderReset, &value);
}


int getStatus_PLC_EncoderReset()
{
return getStatus(ID_PLC_EncoderReset);
}


int doWrite_PLC_Heartbeat(u_int16_t value)
{
return doWrite(ID_PLC_Heartbeat,  &value);
}


int addWrite_PLC_Heartbeat(u_int16_t value)
{
return addWrite(ID_PLC_Heartbeat, &value);
}


int getStatus_PLC_Heartbeat()
{
return getStatus(ID_PLC_Heartbeat);
}


int doWrite_PLC_StatusReg(u_int16_t value)
{
return doWrite(ID_PLC_StatusReg,  &value);
}


int addWrite_PLC_StatusReg(u_int16_t value)
{
return addWrite(ID_PLC_StatusReg, &value);
}


int getStatus_PLC_StatusReg()
{
return getStatus(ID_PLC_StatusReg);
}


int doWrite_PLC_AnIn1Filter(u_int16_t value)
{
return doWrite(ID_PLC_AnIn1Filter,  &value);
}


int addWrite_PLC_AnIn1Filter(u_int16_t value)
{
return addWrite(ID_PLC_AnIn1Filter, &value);
}


int getStatus_PLC_AnIn1Filter()
{
return getStatus(ID_PLC_AnIn1Filter);
}


int doWrite_PLC_AnIn2Filter(u_int16_t value)
{
return doWrite(ID_PLC_AnIn2Filter,  &value);
}


int addWrite_PLC_AnIn2Filter(u_int16_t value)
{
return addWrite(ID_PLC_AnIn2Filter, &value);
}


int getStatus_PLC_AnIn2Filter()
{
return getStatus(ID_PLC_AnIn2Filter);
}


int doWrite_PLC_time(float value)
{
return doWrite(ID_PLC_time,  &value);
}


int addWrite_PLC_time(float value)
{
return addWrite(ID_PLC_time, &value);
}


int getStatus_PLC_time()
{
return getStatus(ID_PLC_time);
}


int doWrite_PLC_timeMin(float value)
{
return doWrite(ID_PLC_timeMin,  &value);
}


int addWrite_PLC_timeMin(float value)
{
return addWrite(ID_PLC_timeMin, &value);
}


int getStatus_PLC_timeMin()
{
return getStatus(ID_PLC_timeMin);
}


int doWrite_PLC_timeMax(float value)
{
return doWrite(ID_PLC_timeMax,  &value);
}


int addWrite_PLC_timeMax(float value)
{
return addWrite(ID_PLC_timeMax, &value);
}


int getStatus_PLC_timeMax()
{
return getStatus(ID_PLC_timeMax);
}


int doWrite_PLC_timeWin(float value)
{
return doWrite(ID_PLC_timeWin,  &value);
}


int addWrite_PLC_timeWin(float value)
{
return addWrite(ID_PLC_timeWin, &value);
}


int getStatus_PLC_timeWin()
{
return getStatus(ID_PLC_timeWin);
}


int doWrite_PLC_Version(u_int16_t value)
{
return doWrite(ID_PLC_Version,  &value);
}


int addWrite_PLC_Version(u_int16_t value)
{
return addWrite(ID_PLC_Version, &value);
}


int getStatus_PLC_Version()
{
return getStatus(ID_PLC_Version);
}


int doWrite_PLC_EngineStatus(u_int16_t value)
{
return doWrite(ID_PLC_EngineStatus,  &value);
}


int addWrite_PLC_EngineStatus(u_int16_t value)
{
return addWrite(ID_PLC_EngineStatus, &value);
}


int getStatus_PLC_EngineStatus()
{
return getStatus(ID_PLC_EngineStatus);
}


int doWrite_PLC_ResetValues(int value)
{
return doWrite(ID_PLC_ResetValues,  &value);
}


int addWrite_PLC_ResetValues(int value)
{
return addWrite(ID_PLC_ResetValues, &value);
}


int getStatus_PLC_ResetValues()
{
return getStatus(ID_PLC_ResetValues);
}


int update_all(void)
{
int retval = 0;
retval += readFromDb(ID_PRODUCT_ID, &PRODUCT_ID);
retval += readFromDb(ID_SERIAL_NUMBER, &SERIAL_NUMBER);
retval += readFromDb(ID_TEST_ID, &TEST_ID);
retval += readFromDb(ID_TEST_STEP, &TEST_STEP);
retval += readFromDb(ID_TEST_STEP_MAX, &TEST_STEP_MAX);
retval += readFromDb(ID_TEST_DATE, &TEST_DATE);
retval += readFromDb(ID_TEST_TIME, &TEST_TIME);
retval += readFromDb(ID_TEST_DURATION, &TEST_DURATION);
retval += readFromDb(ID_AUTOMATIC, &AUTOMATIC);
retval += readFromDb(ID_DO_REPEAT, &DO_REPEAT);
retval += readFromDb(ID_DO_RELOAD, &DO_RELOAD);
retval += readFromDb(ID_STATUS, &STATUS);
retval += readFromDb(ID_RESULT, &RESULT);
retval += readFromDb(ID_RESULTS_OK, &RESULTS_OK);
retval += readFromDb(ID_RESULTS_NG, &RESULTS_NG);
retval += readFromDb(ID_RTU_HeartBeat, &RTU_HeartBeat);
retval += readFromDb(ID_RTU_DigOut_1, &RTU_DigOut_1);
retval += readFromDb(ID_RTU_DigOut_2, &RTU_DigOut_2);
retval += readFromDb(ID_RTU_DigOut_3, &RTU_DigOut_3);
retval += readFromDb(ID_RTU_DigOut_4, &RTU_DigOut_4);
retval += readFromDb(ID_RTU_DigOut_5, &RTU_DigOut_5);
retval += readFromDb(ID_RTU_DigOut_6, &RTU_DigOut_6);
retval += readFromDb(ID_RTU_DigOut_7, &RTU_DigOut_7);
retval += readFromDb(ID_RTU_DigOut_8, &RTU_DigOut_8);
retval += readFromDb(ID_RTU_DigOut_9, &RTU_DigOut_9);
retval += readFromDb(ID_RTU_DigOut_10, &RTU_DigOut_10);
retval += readFromDb(ID_RTU_DigOut_11, &RTU_DigOut_11);
retval += readFromDb(ID_RTU_DigOut_12, &RTU_DigOut_12);
retval += readFromDb(ID_RTU_DigOut_13, &RTU_DigOut_13);
retval += readFromDb(ID_RTU_DigOut_14, &RTU_DigOut_14);
retval += readFromDb(ID_RTU_DigOut_15, &RTU_DigOut_15);
retval += readFromDb(ID_RTU_DigOut_16, &RTU_DigOut_16);
retval += readFromDb(ID_RTU_DigIn_1, &RTU_DigIn_1);
retval += readFromDb(ID_RTU_DigIn_2, &RTU_DigIn_2);
retval += readFromDb(ID_RTU_DigIn_3, &RTU_DigIn_3);
retval += readFromDb(ID_RTU_DigIn_4, &RTU_DigIn_4);
retval += readFromDb(ID_RTU_DigIn_5, &RTU_DigIn_5);
retval += readFromDb(ID_RTU_DigIn_6, &RTU_DigIn_6);
retval += readFromDb(ID_RTU_DigIn_7, &RTU_DigIn_7);
retval += readFromDb(ID_RTU_DigIn_8, &RTU_DigIn_8);
retval += readFromDb(ID_RTU_DigIn_9, &RTU_DigIn_9);
retval += readFromDb(ID_RTU_DigIn_10, &RTU_DigIn_10);
retval += readFromDb(ID_RTU_DigIn_11, &RTU_DigIn_11);
retval += readFromDb(ID_RTU_DigIn_12, &RTU_DigIn_12);
retval += readFromDb(ID_RTU_DigIn_13, &RTU_DigIn_13);
retval += readFromDb(ID_RTU_DigIn_14, &RTU_DigIn_14);
retval += readFromDb(ID_RTU_DigIn_15, &RTU_DigIn_15);
retval += readFromDb(ID_RTU_DigIn_16, &RTU_DigIn_16);
retval += readFromDb(ID_RTU_Tamb, &RTU_Tamb);
retval += readFromDb(ID_RTU_AnInConf_1, &RTU_AnInConf_1);
retval += readFromDb(ID_RTU_AnInConf_2, &RTU_AnInConf_2);
retval += readFromDb(ID_RTU_AnIn_1, &RTU_AnIn_1);
retval += readFromDb(ID_RTU_AnIn_2, &RTU_AnIn_2);
retval += readFromDb(ID_RTU_LocDigDir_1, &RTU_LocDigDir_1);
retval += readFromDb(ID_RTU_LocDigDir_2, &RTU_LocDigDir_2);
retval += readFromDb(ID_RTU_LocDigDir_3, &RTU_LocDigDir_3);
retval += readFromDb(ID_RTU_LocDigDir_4, &RTU_LocDigDir_4);
retval += readFromDb(ID_RTU_LocDigDir_5, &RTU_LocDigDir_5);
retval += readFromDb(ID_RTU_LocDigDir_6, &RTU_LocDigDir_6);
retval += readFromDb(ID_RTU_LocDigDir_7, &RTU_LocDigDir_7);
retval += readFromDb(ID_RTU_LocDigDir_8, &RTU_LocDigDir_8);
retval += readFromDb(ID_RTU_LocDigIn_1, &RTU_LocDigIn_1);
retval += readFromDb(ID_RTU_LocDigIn_2, &RTU_LocDigIn_2);
retval += readFromDb(ID_RTU_LocDigIn_3, &RTU_LocDigIn_3);
retval += readFromDb(ID_RTU_LocDigIn_4, &RTU_LocDigIn_4);
retval += readFromDb(ID_RTU_LocDigIn_5, &RTU_LocDigIn_5);
retval += readFromDb(ID_RTU_LocDigIn_6, &RTU_LocDigIn_6);
retval += readFromDb(ID_RTU_LocDigIn_7, &RTU_LocDigIn_7);
retval += readFromDb(ID_RTU_LocDigIn_8, &RTU_LocDigIn_8);
retval += readFromDb(ID_RTU_LocDigOut_1, &RTU_LocDigOut_1);
retval += readFromDb(ID_RTU_LocDigOut_2, &RTU_LocDigOut_2);
retval += readFromDb(ID_RTU_LocDigOut_3, &RTU_LocDigOut_3);
retval += readFromDb(ID_RTU_LocDigOut_4, &RTU_LocDigOut_4);
retval += readFromDb(ID_RTU_LocDigOut_5, &RTU_LocDigOut_5);
retval += readFromDb(ID_RTU_LocDigOut_6, &RTU_LocDigOut_6);
retval += readFromDb(ID_RTU_LocDigOut_7, &RTU_LocDigOut_7);
retval += readFromDb(ID_RTU_LocDigOut_8, &RTU_LocDigOut_8);
retval += readFromDb(ID_TST_DigIn_1, &TST_DigIn_1);
retval += readFromDb(ID_TST_DigIn_2, &TST_DigIn_2);
retval += readFromDb(ID_TST_DigIn_3, &TST_DigIn_3);
retval += readFromDb(ID_TST_DigIn_4, &TST_DigIn_4);
retval += readFromDb(ID_TST_DigIn_5, &TST_DigIn_5);
retval += readFromDb(ID_TST_DigIn_6, &TST_DigIn_6);
retval += readFromDb(ID_TST_DigIn_7, &TST_DigIn_7);
retval += readFromDb(ID_TST_DigIn_8, &TST_DigIn_8);
retval += readFromDb(ID_TST_DigIn_9, &TST_DigIn_9);
retval += readFromDb(ID_TST_DigIn_10, &TST_DigIn_10);
retval += readFromDb(ID_TST_DigIn_11, &TST_DigIn_11);
retval += readFromDb(ID_TST_DigIn_12, &TST_DigIn_12);
retval += readFromDb(ID_TST_DigIn_13, &TST_DigIn_13);
retval += readFromDb(ID_TST_DigIn_14, &TST_DigIn_14);
retval += readFromDb(ID_TST_DigIn_15, &TST_DigIn_15);
retval += readFromDb(ID_TST_DigIn_16, &TST_DigIn_16);
retval += readFromDb(ID_VAL_DigIn_1, &VAL_DigIn_1);
retval += readFromDb(ID_VAL_DigIn_2, &VAL_DigIn_2);
retval += readFromDb(ID_VAL_DigIn_3, &VAL_DigIn_3);
retval += readFromDb(ID_VAL_DigIn_4, &VAL_DigIn_4);
retval += readFromDb(ID_VAL_DigIn_5, &VAL_DigIn_5);
retval += readFromDb(ID_VAL_DigIn_6, &VAL_DigIn_6);
retval += readFromDb(ID_VAL_DigIn_7, &VAL_DigIn_7);
retval += readFromDb(ID_VAL_DigIn_8, &VAL_DigIn_8);
retval += readFromDb(ID_VAL_DigIn_9, &VAL_DigIn_9);
retval += readFromDb(ID_VAL_DigIn_10, &VAL_DigIn_10);
retval += readFromDb(ID_VAL_DigIn_11, &VAL_DigIn_11);
retval += readFromDb(ID_VAL_DigIn_12, &VAL_DigIn_12);
retval += readFromDb(ID_VAL_DigIn_13, &VAL_DigIn_13);
retval += readFromDb(ID_VAL_DigIn_14, &VAL_DigIn_14);
retval += readFromDb(ID_VAL_DigIn_15, &VAL_DigIn_15);
retval += readFromDb(ID_VAL_DigIn_16, &VAL_DigIn_16);
retval += readFromDb(ID_RES_DigIn_1, &RES_DigIn_1);
retval += readFromDb(ID_RES_DigIn_2, &RES_DigIn_2);
retval += readFromDb(ID_RES_DigIn_3, &RES_DigIn_3);
retval += readFromDb(ID_RES_DigIn_4, &RES_DigIn_4);
retval += readFromDb(ID_RES_DigIn_5, &RES_DigIn_5);
retval += readFromDb(ID_RES_DigIn_6, &RES_DigIn_6);
retval += readFromDb(ID_RES_DigIn_7, &RES_DigIn_7);
retval += readFromDb(ID_RES_DigIn_8, &RES_DigIn_8);
retval += readFromDb(ID_RES_DigIn_9, &RES_DigIn_9);
retval += readFromDb(ID_RES_DigIn_10, &RES_DigIn_10);
retval += readFromDb(ID_RES_DigIn_11, &RES_DigIn_11);
retval += readFromDb(ID_RES_DigIn_12, &RES_DigIn_12);
retval += readFromDb(ID_RES_DigIn_13, &RES_DigIn_13);
retval += readFromDb(ID_RES_DigIn_14, &RES_DigIn_14);
retval += readFromDb(ID_RES_DigIn_15, &RES_DigIn_15);
retval += readFromDb(ID_RES_DigIn_16, &RES_DigIn_16);
retval += readFromDb(ID_OK_DigIn_1, &OK_DigIn_1);
retval += readFromDb(ID_OK_DigIn_2, &OK_DigIn_2);
retval += readFromDb(ID_OK_DigIn_3, &OK_DigIn_3);
retval += readFromDb(ID_OK_DigIn_4, &OK_DigIn_4);
retval += readFromDb(ID_OK_DigIn_5, &OK_DigIn_5);
retval += readFromDb(ID_OK_DigIn_6, &OK_DigIn_6);
retval += readFromDb(ID_OK_DigIn_7, &OK_DigIn_7);
retval += readFromDb(ID_OK_DigIn_8, &OK_DigIn_8);
retval += readFromDb(ID_OK_DigIn_9, &OK_DigIn_9);
retval += readFromDb(ID_OK_DigIn_10, &OK_DigIn_10);
retval += readFromDb(ID_OK_DigIn_11, &OK_DigIn_11);
retval += readFromDb(ID_OK_DigIn_12, &OK_DigIn_12);
retval += readFromDb(ID_OK_DigIn_13, &OK_DigIn_13);
retval += readFromDb(ID_OK_DigIn_14, &OK_DigIn_14);
retval += readFromDb(ID_OK_DigIn_15, &OK_DigIn_15);
retval += readFromDb(ID_OK_DigIn_16, &OK_DigIn_16);
retval += readFromDb(ID_TST_DigOut_1, &TST_DigOut_1);
retval += readFromDb(ID_TST_DigOut_2, &TST_DigOut_2);
retval += readFromDb(ID_TST_DigOut_3, &TST_DigOut_3);
retval += readFromDb(ID_TST_DigOut_4, &TST_DigOut_4);
retval += readFromDb(ID_TST_DigOut_5, &TST_DigOut_5);
retval += readFromDb(ID_TST_DigOut_6, &TST_DigOut_6);
retval += readFromDb(ID_TST_DigOut_7, &TST_DigOut_7);
retval += readFromDb(ID_TST_DigOut_8, &TST_DigOut_8);
retval += readFromDb(ID_TST_DigOut_9, &TST_DigOut_9);
retval += readFromDb(ID_TST_DigOut_10, &TST_DigOut_10);
retval += readFromDb(ID_TST_DigOut_11, &TST_DigOut_11);
retval += readFromDb(ID_TST_DigOut_12, &TST_DigOut_12);
retval += readFromDb(ID_TST_DigOut_13, &TST_DigOut_13);
retval += readFromDb(ID_TST_DigOut_14, &TST_DigOut_14);
retval += readFromDb(ID_TST_DigOut_15, &TST_DigOut_15);
retval += readFromDb(ID_TST_DigOut_16, &TST_DigOut_16);
retval += readFromDb(ID_VAL_DigOut_1, &VAL_DigOut_1);
retval += readFromDb(ID_VAL_DigOut_2, &VAL_DigOut_2);
retval += readFromDb(ID_VAL_DigOut_3, &VAL_DigOut_3);
retval += readFromDb(ID_VAL_DigOut_4, &VAL_DigOut_4);
retval += readFromDb(ID_VAL_DigOut_5, &VAL_DigOut_5);
retval += readFromDb(ID_VAL_DigOut_6, &VAL_DigOut_6);
retval += readFromDb(ID_VAL_DigOut_7, &VAL_DigOut_7);
retval += readFromDb(ID_VAL_DigOut_8, &VAL_DigOut_8);
retval += readFromDb(ID_VAL_DigOut_9, &VAL_DigOut_9);
retval += readFromDb(ID_VAL_DigOut_10, &VAL_DigOut_10);
retval += readFromDb(ID_VAL_DigOut_11, &VAL_DigOut_11);
retval += readFromDb(ID_VAL_DigOut_12, &VAL_DigOut_12);
retval += readFromDb(ID_VAL_DigOut_13, &VAL_DigOut_13);
retval += readFromDb(ID_VAL_DigOut_14, &VAL_DigOut_14);
retval += readFromDb(ID_VAL_DigOut_15, &VAL_DigOut_15);
retval += readFromDb(ID_VAL_DigOut_16, &VAL_DigOut_16);
retval += readFromDb(ID_RES_DigOut_1, &RES_DigOut_1);
retval += readFromDb(ID_RES_DigOut_2, &RES_DigOut_2);
retval += readFromDb(ID_RES_DigOut_3, &RES_DigOut_3);
retval += readFromDb(ID_RES_DigOut_4, &RES_DigOut_4);
retval += readFromDb(ID_RES_DigOut_5, &RES_DigOut_5);
retval += readFromDb(ID_RES_DigOut_6, &RES_DigOut_6);
retval += readFromDb(ID_RES_DigOut_7, &RES_DigOut_7);
retval += readFromDb(ID_RES_DigOut_8, &RES_DigOut_8);
retval += readFromDb(ID_RES_DigOut_9, &RES_DigOut_9);
retval += readFromDb(ID_RES_DigOut_10, &RES_DigOut_10);
retval += readFromDb(ID_RES_DigOut_11, &RES_DigOut_11);
retval += readFromDb(ID_RES_DigOut_12, &RES_DigOut_12);
retval += readFromDb(ID_RES_DigOut_13, &RES_DigOut_13);
retval += readFromDb(ID_RES_DigOut_14, &RES_DigOut_14);
retval += readFromDb(ID_RES_DigOut_15, &RES_DigOut_15);
retval += readFromDb(ID_RES_DigOut_16, &RES_DigOut_16);
retval += readFromDb(ID_OK_DigOut_1, &OK_DigOut_1);
retval += readFromDb(ID_OK_DigOut_2, &OK_DigOut_2);
retval += readFromDb(ID_OK_DigOut_3, &OK_DigOut_3);
retval += readFromDb(ID_OK_DigOut_4, &OK_DigOut_4);
retval += readFromDb(ID_OK_DigOut_5, &OK_DigOut_5);
retval += readFromDb(ID_OK_DigOut_6, &OK_DigOut_6);
retval += readFromDb(ID_OK_DigOut_7, &OK_DigOut_7);
retval += readFromDb(ID_OK_DigOut_8, &OK_DigOut_8);
retval += readFromDb(ID_OK_DigOut_9, &OK_DigOut_9);
retval += readFromDb(ID_OK_DigOut_10, &OK_DigOut_10);
retval += readFromDb(ID_OK_DigOut_11, &OK_DigOut_11);
retval += readFromDb(ID_OK_DigOut_12, &OK_DigOut_12);
retval += readFromDb(ID_OK_DigOut_13, &OK_DigOut_13);
retval += readFromDb(ID_OK_DigOut_14, &OK_DigOut_14);
retval += readFromDb(ID_OK_DigOut_15, &OK_DigOut_15);
retval += readFromDb(ID_OK_DigOut_16, &OK_DigOut_16);
retval += readFromDb(ID_TST_AnIn_1, &TST_AnIn_1);
retval += readFromDb(ID_TST_AnIn_2, &TST_AnIn_2);
retval += readFromDb(ID_TST_AnIn_3, &TST_AnIn_3);
retval += readFromDb(ID_TST_AnIn_4, &TST_AnIn_4);
retval += readFromDb(ID_TST_AnIn_5, &TST_AnIn_5);
retval += readFromDb(ID_TST_AnIn_6, &TST_AnIn_6);
retval += readFromDb(ID_TST_AnIn_7, &TST_AnIn_7);
retval += readFromDb(ID_TST_AnIn_8, &TST_AnIn_8);
retval += readFromDb(ID_TST_AnIn_9, &TST_AnIn_9);
retval += readFromDb(ID_TST_AnIn_10, &TST_AnIn_10);
retval += readFromDb(ID_TST_AnIn_11, &TST_AnIn_11);
retval += readFromDb(ID_TST_AnIn_12, &TST_AnIn_12);
retval += readFromDb(ID_VAL_AnIn_1, &VAL_AnIn_1);
retval += readFromDb(ID_VAL_AnIn_2, &VAL_AnIn_2);
retval += readFromDb(ID_VAL_AnIn_3, &VAL_AnIn_3);
retval += readFromDb(ID_VAL_AnIn_4, &VAL_AnIn_4);
retval += readFromDb(ID_VAL_AnIn_5, &VAL_AnIn_5);
retval += readFromDb(ID_VAL_AnIn_6, &VAL_AnIn_6);
retval += readFromDb(ID_VAL_AnIn_7, &VAL_AnIn_7);
retval += readFromDb(ID_VAL_AnIn_8, &VAL_AnIn_8);
retval += readFromDb(ID_VAL_AnIn_9, &VAL_AnIn_9);
retval += readFromDb(ID_VAL_AnIn_10, &VAL_AnIn_10);
retval += readFromDb(ID_VAL_AnIn_11, &VAL_AnIn_11);
retval += readFromDb(ID_VAL_AnIn_12, &VAL_AnIn_12);
retval += readFromDb(ID_VAL_AnInConf_1, &VAL_AnInConf_1);
retval += readFromDb(ID_VAL_AnInConf_2, &VAL_AnInConf_2);
retval += readFromDb(ID_VAL_AnInConf_3, &VAL_AnInConf_3);
retval += readFromDb(ID_VAL_AnInConf_4, &VAL_AnInConf_4);
retval += readFromDb(ID_VAL_AnInConf_5, &VAL_AnInConf_5);
retval += readFromDb(ID_VAL_AnInConf_6, &VAL_AnInConf_6);
retval += readFromDb(ID_VAL_AnInConf_7, &VAL_AnInConf_7);
retval += readFromDb(ID_VAL_AnInConf_8, &VAL_AnInConf_8);
retval += readFromDb(ID_VAL_AnInConf_9, &VAL_AnInConf_9);
retval += readFromDb(ID_VAL_AnInConf_10, &VAL_AnInConf_10);
retval += readFromDb(ID_VAL_AnInConf_11, &VAL_AnInConf_11);
retval += readFromDb(ID_VAL_AnInConf_12, &VAL_AnInConf_12);
retval += readFromDb(ID_VAL_AnInFltr_1, &VAL_AnInFltr_1);
retval += readFromDb(ID_VAL_AnInFltr_2, &VAL_AnInFltr_2);
retval += readFromDb(ID_VAL_AnInFltr_3, &VAL_AnInFltr_3);
retval += readFromDb(ID_VAL_AnInFltr_4, &VAL_AnInFltr_4);
retval += readFromDb(ID_VAL_AnInFltr_5, &VAL_AnInFltr_5);
retval += readFromDb(ID_VAL_AnInFltr_6, &VAL_AnInFltr_6);
retval += readFromDb(ID_VAL_AnInFltr_7, &VAL_AnInFltr_7);
retval += readFromDb(ID_VAL_AnInFltr_8, &VAL_AnInFltr_8);
retval += readFromDb(ID_VAL_AnInFltr_9, &VAL_AnInFltr_9);
retval += readFromDb(ID_VAL_AnInFltr_10, &VAL_AnInFltr_10);
retval += readFromDb(ID_VAL_AnInFltr_11, &VAL_AnInFltr_11);
retval += readFromDb(ID_VAL_AnInFltr_12, &VAL_AnInFltr_12);
retval += readFromDb(ID_RES_AnIn_1, &RES_AnIn_1);
retval += readFromDb(ID_RES_AnIn_2, &RES_AnIn_2);
retval += readFromDb(ID_RES_AnIn_3, &RES_AnIn_3);
retval += readFromDb(ID_RES_AnIn_4, &RES_AnIn_4);
retval += readFromDb(ID_RES_AnIn_5, &RES_AnIn_5);
retval += readFromDb(ID_RES_AnIn_6, &RES_AnIn_6);
retval += readFromDb(ID_RES_AnIn_7, &RES_AnIn_7);
retval += readFromDb(ID_RES_AnIn_8, &RES_AnIn_8);
retval += readFromDb(ID_RES_AnIn_9, &RES_AnIn_9);
retval += readFromDb(ID_RES_AnIn_10, &RES_AnIn_10);
retval += readFromDb(ID_RES_AnIn_11, &RES_AnIn_11);
retval += readFromDb(ID_RES_AnIn_12, &RES_AnIn_12);
retval += readFromDb(ID_RES_AnInStts_1, &RES_AnInStts_1);
retval += readFromDb(ID_RES_AnInStts_2, &RES_AnInStts_2);
retval += readFromDb(ID_RES_AnInStts_3, &RES_AnInStts_3);
retval += readFromDb(ID_RES_AnInStts_4, &RES_AnInStts_4);
retval += readFromDb(ID_RES_AnInStts_5, &RES_AnInStts_5);
retval += readFromDb(ID_RES_AnInStts_6, &RES_AnInStts_6);
retval += readFromDb(ID_RES_AnInStts_7, &RES_AnInStts_7);
retval += readFromDb(ID_RES_AnInStts_8, &RES_AnInStts_8);
retval += readFromDb(ID_RES_AnInStts_9, &RES_AnInStts_9);
retval += readFromDb(ID_RES_AnInStts_10, &RES_AnInStts_10);
retval += readFromDb(ID_RES_AnInStts_11, &RES_AnInStts_11);
retval += readFromDb(ID_RES_AnInStts_12, &RES_AnInStts_12);
retval += readFromDb(ID_OK_AnIn_1, &OK_AnIn_1);
retval += readFromDb(ID_OK_AnIn_2, &OK_AnIn_2);
retval += readFromDb(ID_OK_AnIn_3, &OK_AnIn_3);
retval += readFromDb(ID_OK_AnIn_4, &OK_AnIn_4);
retval += readFromDb(ID_OK_AnIn_5, &OK_AnIn_5);
retval += readFromDb(ID_OK_AnIn_6, &OK_AnIn_6);
retval += readFromDb(ID_OK_AnIn_7, &OK_AnIn_7);
retval += readFromDb(ID_OK_AnIn_8, &OK_AnIn_8);
retval += readFromDb(ID_OK_AnIn_9, &OK_AnIn_9);
retval += readFromDb(ID_OK_AnIn_10, &OK_AnIn_10);
retval += readFromDb(ID_OK_AnIn_11, &OK_AnIn_11);
retval += readFromDb(ID_OK_AnIn_12, &OK_AnIn_12);
retval += readFromDb(ID_TST_AnOut_1, &TST_AnOut_1);
retval += readFromDb(ID_TST_AnOut_2, &TST_AnOut_2);
retval += readFromDb(ID_TST_AnOut_3, &TST_AnOut_3);
retval += readFromDb(ID_TST_AnOut_4, &TST_AnOut_4);
retval += readFromDb(ID_VAL_AnOut_1, &VAL_AnOut_1);
retval += readFromDb(ID_VAL_AnOut_2, &VAL_AnOut_2);
retval += readFromDb(ID_VAL_AnOut_3, &VAL_AnOut_3);
retval += readFromDb(ID_VAL_AnOut_4, &VAL_AnOut_4);
retval += readFromDb(ID_VAL_AnOutConf_1, &VAL_AnOutConf_1);
retval += readFromDb(ID_VAL_AnOutConf_2, &VAL_AnOutConf_2);
retval += readFromDb(ID_VAL_AnOutConf_3, &VAL_AnOutConf_3);
retval += readFromDb(ID_VAL_AnOutConf_4, &VAL_AnOutConf_4);
retval += readFromDb(ID_RES_AnOut_1, &RES_AnOut_1);
retval += readFromDb(ID_RES_AnOut_2, &RES_AnOut_2);
retval += readFromDb(ID_RES_AnOut_3, &RES_AnOut_3);
retval += readFromDb(ID_RES_AnOut_4, &RES_AnOut_4);
retval += readFromDb(ID_RES_AnOutStts_1, &RES_AnOutStts_1);
retval += readFromDb(ID_RES_AnOutStts_2, &RES_AnOutStts_2);
retval += readFromDb(ID_RES_AnOutStts_3, &RES_AnOutStts_3);
retval += readFromDb(ID_RES_AnOutStts_4, &RES_AnOutStts_4);
retval += readFromDb(ID_OK_AnOut_1, &OK_AnOut_1);
retval += readFromDb(ID_OK_AnOut_2, &OK_AnOut_2);
retval += readFromDb(ID_OK_AnOut_3, &OK_AnOut_3);
retval += readFromDb(ID_OK_AnOut_4, &OK_AnOut_4);
retval += readFromDb(ID_TST_Tamb, &TST_Tamb);
retval += readFromDb(ID_TST_RPM, &TST_RPM);
retval += readFromDb(ID_TST_VCC_set, &TST_VCC_set);
retval += readFromDb(ID_TST_mA_max, &TST_mA_max);
retval += readFromDb(ID_TST_VCC_fbk, &TST_VCC_fbk);
retval += readFromDb(ID_TST_mA_fbk, &TST_mA_fbk);
retval += readFromDb(ID_TST_FWrevision, &TST_FWrevision);
retval += readFromDb(ID_TST_HWconfig, &TST_HWconfig);
retval += readFromDb(ID_VAL_Tamb, &VAL_Tamb);
retval += readFromDb(ID_VAL_RPM, &VAL_RPM);
retval += readFromDb(ID_VAL_VCC_set, &VAL_VCC_set);
retval += readFromDb(ID_VAL_mA_max, &VAL_mA_max);
retval += readFromDb(ID_VAL_VCC_fbk, &VAL_VCC_fbk);
retval += readFromDb(ID_VAL_mA_fbk, &VAL_mA_fbk);
retval += readFromDb(ID_VAL_FWrevision, &VAL_FWrevision);
retval += readFromDb(ID_VAL_HWconfig, &VAL_HWconfig);
retval += readFromDb(ID_RES_Tamb, &RES_Tamb);
retval += readFromDb(ID_RES_RPM, &RES_RPM);
retval += readFromDb(ID_RES_VCC_set, &RES_VCC_set);
retval += readFromDb(ID_RES_mA_max, &RES_mA_max);
retval += readFromDb(ID_RES_VCC_fbk, &RES_VCC_fbk);
retval += readFromDb(ID_RES_mA_fbk, &RES_mA_fbk);
retval += readFromDb(ID_RES_FWrevision, &RES_FWrevision);
retval += readFromDb(ID_RES_HWconfig, &RES_HWconfig);
retval += readFromDb(ID_OK_Tamb, &OK_Tamb);
retval += readFromDb(ID_OK_RPM, &OK_RPM);
retval += readFromDb(ID_OK_VCC_set, &OK_VCC_set);
retval += readFromDb(ID_OK_mA_max, &OK_mA_max);
retval += readFromDb(ID_OK_VCC_fbk, &OK_VCC_fbk);
retval += readFromDb(ID_OK_mA_fbk, &OK_mA_fbk);
retval += readFromDb(ID_OK_FWrevision, &OK_FWrevision);
retval += readFromDb(ID_OK_HWconfig, &OK_HWconfig);
retval += readFromDb(ID_TST_RTUS_WR, &TST_RTUS_WR);
retval += readFromDb(ID_TST_RTUS_RD, &TST_RTUS_RD);
retval += readFromDb(ID_TST_RTU1_WR, &TST_RTU1_WR);
retval += readFromDb(ID_TST_RTU1_RD, &TST_RTU1_RD);
retval += readFromDb(ID_TST_RTU3_WR, &TST_RTU3_WR);
retval += readFromDb(ID_TST_RTU3_RD, &TST_RTU3_RD);
retval += readFromDb(ID_TST_CAN1_WR, &TST_CAN1_WR);
retval += readFromDb(ID_TST_CAN1_RD, &TST_CAN1_RD);
retval += readFromDb(ID_VAL_RTUS_WR, &VAL_RTUS_WR);
retval += readFromDb(ID_VAL_RTUS_RD, &VAL_RTUS_RD);
retval += readFromDb(ID_VAL_RTU1_WR, &VAL_RTU1_WR);
retval += readFromDb(ID_VAL_RTU1_RD, &VAL_RTU1_RD);
retval += readFromDb(ID_VAL_RTU3_WR, &VAL_RTU3_WR);
retval += readFromDb(ID_VAL_RTU3_RD, &VAL_RTU3_RD);
retval += readFromDb(ID_VAL_CAN1_WR, &VAL_CAN1_WR);
retval += readFromDb(ID_VAL_CAN1_RD, &VAL_CAN1_RD);
retval += readFromDb(ID_RES_RTUS_WR, &RES_RTUS_WR);
retval += readFromDb(ID_RES_RTUS_RD, &RES_RTUS_RD);
retval += readFromDb(ID_RES_RTU1_WR, &RES_RTU1_WR);
retval += readFromDb(ID_RES_RTU1_RD, &RES_RTU1_RD);
retval += readFromDb(ID_RES_RTU3_WR, &RES_RTU3_WR);
retval += readFromDb(ID_RES_RTU3_RD, &RES_RTU3_RD);
retval += readFromDb(ID_RES_CAN1_WR, &RES_CAN1_WR);
retval += readFromDb(ID_RES_CAN1_RD, &RES_CAN1_RD);
retval += readFromDb(ID_OK_RTUS_WR, &OK_RTUS_WR);
retval += readFromDb(ID_OK_RTUS_RD, &OK_RTUS_RD);
retval += readFromDb(ID_OK_RTU1_WR, &OK_RTU1_WR);
retval += readFromDb(ID_OK_RTU1_RD, &OK_RTU1_RD);
retval += readFromDb(ID_OK_RTU3_WR, &OK_RTU3_WR);
retval += readFromDb(ID_OK_RTU3_RD, &OK_RTU3_RD);
retval += readFromDb(ID_OK_CAN1_WR, &OK_CAN1_WR);
retval += readFromDb(ID_OK_CAN1_RD, &OK_CAN1_RD);
retval += readFromDb(ID_TEST2_COMMAND, &TEST2_COMMAND);
retval += readFromDb(ID_TST2_DigIn_1, &TST2_DigIn_1);
retval += readFromDb(ID_TST2_DigIn_2, &TST2_DigIn_2);
retval += readFromDb(ID_TST2_DigIn_3, &TST2_DigIn_3);
retval += readFromDb(ID_TST2_DigIn_4, &TST2_DigIn_4);
retval += readFromDb(ID_TST2_DigIn_5, &TST2_DigIn_5);
retval += readFromDb(ID_TST2_DigIn_6, &TST2_DigIn_6);
retval += readFromDb(ID_TST2_DigIn_7, &TST2_DigIn_7);
retval += readFromDb(ID_TST2_DigIn_8, &TST2_DigIn_8);
retval += readFromDb(ID_TST2_DigIn_9, &TST2_DigIn_9);
retval += readFromDb(ID_TST2_DigIn_10, &TST2_DigIn_10);
retval += readFromDb(ID_TST2_DigIn_11, &TST2_DigIn_11);
retval += readFromDb(ID_TST2_DigIn_12, &TST2_DigIn_12);
retval += readFromDb(ID_TST2_DigIn_13, &TST2_DigIn_13);
retval += readFromDb(ID_TST2_DigIn_14, &TST2_DigIn_14);
retval += readFromDb(ID_TST2_DigIn_15, &TST2_DigIn_15);
retval += readFromDb(ID_TST2_DigIn_16, &TST2_DigIn_16);
retval += readFromDb(ID_VAL2_DigIn_1, &VAL2_DigIn_1);
retval += readFromDb(ID_VAL2_DigIn_2, &VAL2_DigIn_2);
retval += readFromDb(ID_VAL2_DigIn_3, &VAL2_DigIn_3);
retval += readFromDb(ID_VAL2_DigIn_4, &VAL2_DigIn_4);
retval += readFromDb(ID_VAL2_DigIn_5, &VAL2_DigIn_5);
retval += readFromDb(ID_VAL2_DigIn_6, &VAL2_DigIn_6);
retval += readFromDb(ID_VAL2_DigIn_7, &VAL2_DigIn_7);
retval += readFromDb(ID_VAL2_DigIn_8, &VAL2_DigIn_8);
retval += readFromDb(ID_VAL2_DigIn_9, &VAL2_DigIn_9);
retval += readFromDb(ID_VAL2_DigIn_10, &VAL2_DigIn_10);
retval += readFromDb(ID_VAL2_DigIn_11, &VAL2_DigIn_11);
retval += readFromDb(ID_VAL2_DigIn_12, &VAL2_DigIn_12);
retval += readFromDb(ID_VAL2_DigIn_13, &VAL2_DigIn_13);
retval += readFromDb(ID_VAL2_DigIn_14, &VAL2_DigIn_14);
retval += readFromDb(ID_VAL2_DigIn_15, &VAL2_DigIn_15);
retval += readFromDb(ID_VAL2_DigIn_16, &VAL2_DigIn_16);
retval += readFromDb(ID_RES2_DigIn_1, &RES2_DigIn_1);
retval += readFromDb(ID_RES2_DigIn_2, &RES2_DigIn_2);
retval += readFromDb(ID_RES2_DigIn_3, &RES2_DigIn_3);
retval += readFromDb(ID_RES2_DigIn_4, &RES2_DigIn_4);
retval += readFromDb(ID_RES2_DigIn_5, &RES2_DigIn_5);
retval += readFromDb(ID_RES2_DigIn_6, &RES2_DigIn_6);
retval += readFromDb(ID_RES2_DigIn_7, &RES2_DigIn_7);
retval += readFromDb(ID_RES2_DigIn_8, &RES2_DigIn_8);
retval += readFromDb(ID_RES2_DigIn_9, &RES2_DigIn_9);
retval += readFromDb(ID_RES2_DigIn_10, &RES2_DigIn_10);
retval += readFromDb(ID_RES2_DigIn_11, &RES2_DigIn_11);
retval += readFromDb(ID_RES2_DigIn_12, &RES2_DigIn_12);
retval += readFromDb(ID_RES2_DigIn_13, &RES2_DigIn_13);
retval += readFromDb(ID_RES2_DigIn_14, &RES2_DigIn_14);
retval += readFromDb(ID_RES2_DigIn_15, &RES2_DigIn_15);
retval += readFromDb(ID_RES2_DigIn_16, &RES2_DigIn_16);
retval += readFromDb(ID_TST2_DigOut_1, &TST2_DigOut_1);
retval += readFromDb(ID_TST2_DigOut_2, &TST2_DigOut_2);
retval += readFromDb(ID_TST2_DigOut_3, &TST2_DigOut_3);
retval += readFromDb(ID_TST2_DigOut_4, &TST2_DigOut_4);
retval += readFromDb(ID_TST2_DigOut_5, &TST2_DigOut_5);
retval += readFromDb(ID_TST2_DigOut_6, &TST2_DigOut_6);
retval += readFromDb(ID_TST2_DigOut_7, &TST2_DigOut_7);
retval += readFromDb(ID_TST2_DigOut_8, &TST2_DigOut_8);
retval += readFromDb(ID_TST2_DigOut_9, &TST2_DigOut_9);
retval += readFromDb(ID_TST2_DigOut_10, &TST2_DigOut_10);
retval += readFromDb(ID_TST2_DigOut_11, &TST2_DigOut_11);
retval += readFromDb(ID_TST2_DigOut_12, &TST2_DigOut_12);
retval += readFromDb(ID_TST2_DigOut_13, &TST2_DigOut_13);
retval += readFromDb(ID_TST2_DigOut_14, &TST2_DigOut_14);
retval += readFromDb(ID_TST2_DigOut_15, &TST2_DigOut_15);
retval += readFromDb(ID_TST2_DigOut_16, &TST2_DigOut_16);
retval += readFromDb(ID_VAL2_DigOut_1, &VAL2_DigOut_1);
retval += readFromDb(ID_VAL2_DigOut_2, &VAL2_DigOut_2);
retval += readFromDb(ID_VAL2_DigOut_3, &VAL2_DigOut_3);
retval += readFromDb(ID_VAL2_DigOut_4, &VAL2_DigOut_4);
retval += readFromDb(ID_VAL2_DigOut_5, &VAL2_DigOut_5);
retval += readFromDb(ID_VAL2_DigOut_6, &VAL2_DigOut_6);
retval += readFromDb(ID_VAL2_DigOut_7, &VAL2_DigOut_7);
retval += readFromDb(ID_VAL2_DigOut_8, &VAL2_DigOut_8);
retval += readFromDb(ID_VAL2_DigOut_9, &VAL2_DigOut_9);
retval += readFromDb(ID_VAL2_DigOut_10, &VAL2_DigOut_10);
retval += readFromDb(ID_VAL2_DigOut_11, &VAL2_DigOut_11);
retval += readFromDb(ID_VAL2_DigOut_12, &VAL2_DigOut_12);
retval += readFromDb(ID_VAL2_DigOut_13, &VAL2_DigOut_13);
retval += readFromDb(ID_VAL2_DigOut_14, &VAL2_DigOut_14);
retval += readFromDb(ID_VAL2_DigOut_15, &VAL2_DigOut_15);
retval += readFromDb(ID_VAL2_DigOut_16, &VAL2_DigOut_16);
retval += readFromDb(ID_TST2_AnIn_1, &TST2_AnIn_1);
retval += readFromDb(ID_TST2_AnIn_2, &TST2_AnIn_2);
retval += readFromDb(ID_TST2_AnIn_3, &TST2_AnIn_3);
retval += readFromDb(ID_TST2_AnIn_4, &TST2_AnIn_4);
retval += readFromDb(ID_TST2_AnIn_5, &TST2_AnIn_5);
retval += readFromDb(ID_TST2_AnIn_6, &TST2_AnIn_6);
retval += readFromDb(ID_TST2_AnIn_7, &TST2_AnIn_7);
retval += readFromDb(ID_TST2_AnIn_8, &TST2_AnIn_8);
retval += readFromDb(ID_TST2_AnIn_9, &TST2_AnIn_9);
retval += readFromDb(ID_TST2_AnIn_10, &TST2_AnIn_10);
retval += readFromDb(ID_TST2_AnIn_11, &TST2_AnIn_11);
retval += readFromDb(ID_TST2_AnIn_12, &TST2_AnIn_12);
retval += readFromDb(ID_VAL2_AnIn_1, &VAL2_AnIn_1);
retval += readFromDb(ID_VAL2_AnIn_2, &VAL2_AnIn_2);
retval += readFromDb(ID_VAL2_AnIn_3, &VAL2_AnIn_3);
retval += readFromDb(ID_VAL2_AnIn_4, &VAL2_AnIn_4);
retval += readFromDb(ID_VAL2_AnIn_5, &VAL2_AnIn_5);
retval += readFromDb(ID_VAL2_AnIn_6, &VAL2_AnIn_6);
retval += readFromDb(ID_VAL2_AnIn_7, &VAL2_AnIn_7);
retval += readFromDb(ID_VAL2_AnIn_8, &VAL2_AnIn_8);
retval += readFromDb(ID_VAL2_AnIn_9, &VAL2_AnIn_9);
retval += readFromDb(ID_VAL2_AnIn_10, &VAL2_AnIn_10);
retval += readFromDb(ID_VAL2_AnIn_11, &VAL2_AnIn_11);
retval += readFromDb(ID_VAL2_AnIn_12, &VAL2_AnIn_12);
retval += readFromDb(ID_VAL2_AnInConf_1, &VAL2_AnInConf_1);
retval += readFromDb(ID_VAL2_AnInConf_2, &VAL2_AnInConf_2);
retval += readFromDb(ID_VAL2_AnInConf_3, &VAL2_AnInConf_3);
retval += readFromDb(ID_VAL2_AnInConf_4, &VAL2_AnInConf_4);
retval += readFromDb(ID_VAL2_AnInConf_5, &VAL2_AnInConf_5);
retval += readFromDb(ID_VAL2_AnInConf_6, &VAL2_AnInConf_6);
retval += readFromDb(ID_VAL2_AnInConf_7, &VAL2_AnInConf_7);
retval += readFromDb(ID_VAL2_AnInConf_8, &VAL2_AnInConf_8);
retval += readFromDb(ID_VAL2_AnInConf_9, &VAL2_AnInConf_9);
retval += readFromDb(ID_VAL2_AnInConf_10, &VAL2_AnInConf_10);
retval += readFromDb(ID_VAL2_AnInConf_11, &VAL2_AnInConf_11);
retval += readFromDb(ID_VAL2_AnInConf_12, &VAL2_AnInConf_12);
retval += readFromDb(ID_VAL2_AnInFltr_1, &VAL2_AnInFltr_1);
retval += readFromDb(ID_VAL2_AnInFltr_2, &VAL2_AnInFltr_2);
retval += readFromDb(ID_VAL2_AnInFltr_3, &VAL2_AnInFltr_3);
retval += readFromDb(ID_VAL2_AnInFltr_4, &VAL2_AnInFltr_4);
retval += readFromDb(ID_VAL2_AnInFltr_5, &VAL2_AnInFltr_5);
retval += readFromDb(ID_VAL2_AnInFltr_6, &VAL2_AnInFltr_6);
retval += readFromDb(ID_VAL2_AnInFltr_7, &VAL2_AnInFltr_7);
retval += readFromDb(ID_VAL2_AnInFltr_8, &VAL2_AnInFltr_8);
retval += readFromDb(ID_VAL2_AnInFltr_9, &VAL2_AnInFltr_9);
retval += readFromDb(ID_VAL2_AnInFltr_10, &VAL2_AnInFltr_10);
retval += readFromDb(ID_VAL2_AnInFltr_11, &VAL2_AnInFltr_11);
retval += readFromDb(ID_VAL2_AnInFltr_12, &VAL2_AnInFltr_12);
retval += readFromDb(ID_RES2_AnIn_1, &RES2_AnIn_1);
retval += readFromDb(ID_RES2_AnIn_2, &RES2_AnIn_2);
retval += readFromDb(ID_RES2_AnIn_3, &RES2_AnIn_3);
retval += readFromDb(ID_RES2_AnIn_4, &RES2_AnIn_4);
retval += readFromDb(ID_RES2_AnIn_5, &RES2_AnIn_5);
retval += readFromDb(ID_RES2_AnIn_6, &RES2_AnIn_6);
retval += readFromDb(ID_RES2_AnIn_7, &RES2_AnIn_7);
retval += readFromDb(ID_RES2_AnIn_8, &RES2_AnIn_8);
retval += readFromDb(ID_RES2_AnIn_9, &RES2_AnIn_9);
retval += readFromDb(ID_RES2_AnIn_10, &RES2_AnIn_10);
retval += readFromDb(ID_RES2_AnIn_11, &RES2_AnIn_11);
retval += readFromDb(ID_RES2_AnIn_12, &RES2_AnIn_12);
retval += readFromDb(ID_RES2_AnInStts_1, &RES2_AnInStts_1);
retval += readFromDb(ID_RES2_AnInStts_2, &RES2_AnInStts_2);
retval += readFromDb(ID_RES2_AnInStts_3, &RES2_AnInStts_3);
retval += readFromDb(ID_RES2_AnInStts_4, &RES2_AnInStts_4);
retval += readFromDb(ID_RES2_AnInStts_5, &RES2_AnInStts_5);
retval += readFromDb(ID_RES2_AnInStts_6, &RES2_AnInStts_6);
retval += readFromDb(ID_RES2_AnInStts_7, &RES2_AnInStts_7);
retval += readFromDb(ID_RES2_AnInStts_8, &RES2_AnInStts_8);
retval += readFromDb(ID_RES2_AnInStts_9, &RES2_AnInStts_9);
retval += readFromDb(ID_RES2_AnInStts_10, &RES2_AnInStts_10);
retval += readFromDb(ID_RES2_AnInStts_11, &RES2_AnInStts_11);
retval += readFromDb(ID_RES2_AnInStts_12, &RES2_AnInStts_12);
retval += readFromDb(ID_TST2_AnOut_1, &TST2_AnOut_1);
retval += readFromDb(ID_TST2_AnOut_2, &TST2_AnOut_2);
retval += readFromDb(ID_TST2_AnOut_3, &TST2_AnOut_3);
retval += readFromDb(ID_TST2_AnOut_4, &TST2_AnOut_4);
retval += readFromDb(ID_VAL2_AnOut_1, &VAL2_AnOut_1);
retval += readFromDb(ID_VAL2_AnOut_2, &VAL2_AnOut_2);
retval += readFromDb(ID_VAL2_AnOut_3, &VAL2_AnOut_3);
retval += readFromDb(ID_VAL2_AnOut_4, &VAL2_AnOut_4);
retval += readFromDb(ID_VAL2_AnOutConf_1, &VAL2_AnOutConf_1);
retval += readFromDb(ID_VAL2_AnOutConf_2, &VAL2_AnOutConf_2);
retval += readFromDb(ID_VAL2_AnOutConf_3, &VAL2_AnOutConf_3);
retval += readFromDb(ID_VAL2_AnOutConf_4, &VAL2_AnOutConf_4);
retval += readFromDb(ID_RES2_AnOutStts_1, &RES2_AnOutStts_1);
retval += readFromDb(ID_RES2_AnOutStts_2, &RES2_AnOutStts_2);
retval += readFromDb(ID_RES2_AnOutStts_3, &RES2_AnOutStts_3);
retval += readFromDb(ID_RES2_AnOutStts_4, &RES2_AnOutStts_4);
retval += readFromDb(ID_TST2_Tamb, &TST2_Tamb);
retval += readFromDb(ID_TST2_RPM, &TST2_RPM);
retval += readFromDb(ID_TST2_FWrevision, &TST2_FWrevision);
retval += readFromDb(ID_TST2_HWconfig, &TST2_HWconfig);
retval += readFromDb(ID_VAL2_Tamb, &VAL2_Tamb);
retval += readFromDb(ID_VAL2_RPM, &VAL2_RPM);
retval += readFromDb(ID_VAL2_FWrevision, &VAL2_FWrevision);
retval += readFromDb(ID_VAL2_HWconfig, &VAL2_HWconfig);
retval += readFromDb(ID_RES2_Tamb, &RES2_Tamb);
retval += readFromDb(ID_RES2_RPM, &RES2_RPM);
retval += readFromDb(ID_RES2_FWrevision, &RES2_FWrevision);
retval += readFromDb(ID_RES2_HWconfig, &RES2_HWconfig);
retval += readFromDb(ID_TST2_RTUS_WR, &TST2_RTUS_WR);
retval += readFromDb(ID_TST2_RTUS_RD, &TST2_RTUS_RD);
retval += readFromDb(ID_TST2_RTU1_WR, &TST2_RTU1_WR);
retval += readFromDb(ID_TST2_RTU1_RD, &TST2_RTU1_RD);
retval += readFromDb(ID_TST2_RTU3_WR, &TST2_RTU3_WR);
retval += readFromDb(ID_TST2_RTU3_RD, &TST2_RTU3_RD);
retval += readFromDb(ID_TST2_CAN1_WR, &TST2_CAN1_WR);
retval += readFromDb(ID_TST2_CAN1_RD, &TST2_CAN1_RD);
retval += readFromDb(ID_VAL2_RTUS_WR, &VAL2_RTUS_WR);
retval += readFromDb(ID_VAL2_RTUS_RD, &VAL2_RTUS_RD);
retval += readFromDb(ID_VAL2_RTU1_WR, &VAL2_RTU1_WR);
retval += readFromDb(ID_VAL2_RTU1_RD, &VAL2_RTU1_RD);
retval += readFromDb(ID_VAL2_RTU3_WR, &VAL2_RTU3_WR);
retval += readFromDb(ID_VAL2_RTU3_RD, &VAL2_RTU3_RD);
retval += readFromDb(ID_VAL2_CAN1_WR, &VAL2_CAN1_WR);
retval += readFromDb(ID_VAL2_CAN1_RD, &VAL2_CAN1_RD);
retval += readFromDb(ID_RES2_RTUS_WR, &RES2_RTUS_WR);
retval += readFromDb(ID_RES2_RTUS_RD, &RES2_RTUS_RD);
retval += readFromDb(ID_RES2_RTU1_WR, &RES2_RTU1_WR);
retval += readFromDb(ID_RES2_RTU1_RD, &RES2_RTU1_RD);
retval += readFromDb(ID_RES2_RTU3_WR, &RES2_RTU3_WR);
retval += readFromDb(ID_RES2_RTU3_RD, &RES2_RTU3_RD);
retval += readFromDb(ID_RES2_CAN1_WR, &RES2_CAN1_WR);
retval += readFromDb(ID_RES2_CAN1_RD, &RES2_CAN1_RD);
retval += readFromDb(ID_TEST2_STATUS, &TEST2_STATUS);
retval += readFromDb(ID_TESTx_COMMAND, &TESTx_COMMAND);
retval += readFromDb(ID_TSTx_DigIn_1, &TSTx_DigIn_1);
retval += readFromDb(ID_TSTx_DigIn_2, &TSTx_DigIn_2);
retval += readFromDb(ID_TSTx_DigIn_3, &TSTx_DigIn_3);
retval += readFromDb(ID_TSTx_DigIn_4, &TSTx_DigIn_4);
retval += readFromDb(ID_TSTx_DigIn_5, &TSTx_DigIn_5);
retval += readFromDb(ID_TSTx_DigIn_6, &TSTx_DigIn_6);
retval += readFromDb(ID_TSTx_DigIn_7, &TSTx_DigIn_7);
retval += readFromDb(ID_TSTx_DigIn_8, &TSTx_DigIn_8);
retval += readFromDb(ID_TSTx_DigIn_9, &TSTx_DigIn_9);
retval += readFromDb(ID_TSTx_DigIn_10, &TSTx_DigIn_10);
retval += readFromDb(ID_TSTx_DigIn_11, &TSTx_DigIn_11);
retval += readFromDb(ID_TSTx_DigIn_12, &TSTx_DigIn_12);
retval += readFromDb(ID_TSTx_DigIn_13, &TSTx_DigIn_13);
retval += readFromDb(ID_TSTx_DigIn_14, &TSTx_DigIn_14);
retval += readFromDb(ID_TSTx_DigIn_15, &TSTx_DigIn_15);
retval += readFromDb(ID_TSTx_DigIn_16, &TSTx_DigIn_16);
retval += readFromDb(ID_VALx_DigIn_1, &VALx_DigIn_1);
retval += readFromDb(ID_VALx_DigIn_2, &VALx_DigIn_2);
retval += readFromDb(ID_VALx_DigIn_3, &VALx_DigIn_3);
retval += readFromDb(ID_VALx_DigIn_4, &VALx_DigIn_4);
retval += readFromDb(ID_VALx_DigIn_5, &VALx_DigIn_5);
retval += readFromDb(ID_VALx_DigIn_6, &VALx_DigIn_6);
retval += readFromDb(ID_VALx_DigIn_7, &VALx_DigIn_7);
retval += readFromDb(ID_VALx_DigIn_8, &VALx_DigIn_8);
retval += readFromDb(ID_VALx_DigIn_9, &VALx_DigIn_9);
retval += readFromDb(ID_VALx_DigIn_10, &VALx_DigIn_10);
retval += readFromDb(ID_VALx_DigIn_11, &VALx_DigIn_11);
retval += readFromDb(ID_VALx_DigIn_12, &VALx_DigIn_12);
retval += readFromDb(ID_VALx_DigIn_13, &VALx_DigIn_13);
retval += readFromDb(ID_VALx_DigIn_14, &VALx_DigIn_14);
retval += readFromDb(ID_VALx_DigIn_15, &VALx_DigIn_15);
retval += readFromDb(ID_VALx_DigIn_16, &VALx_DigIn_16);
retval += readFromDb(ID_RESx_DigIn_1, &RESx_DigIn_1);
retval += readFromDb(ID_RESx_DigIn_2, &RESx_DigIn_2);
retval += readFromDb(ID_RESx_DigIn_3, &RESx_DigIn_3);
retval += readFromDb(ID_RESx_DigIn_4, &RESx_DigIn_4);
retval += readFromDb(ID_RESx_DigIn_5, &RESx_DigIn_5);
retval += readFromDb(ID_RESx_DigIn_6, &RESx_DigIn_6);
retval += readFromDb(ID_RESx_DigIn_7, &RESx_DigIn_7);
retval += readFromDb(ID_RESx_DigIn_8, &RESx_DigIn_8);
retval += readFromDb(ID_RESx_DigIn_9, &RESx_DigIn_9);
retval += readFromDb(ID_RESx_DigIn_10, &RESx_DigIn_10);
retval += readFromDb(ID_RESx_DigIn_11, &RESx_DigIn_11);
retval += readFromDb(ID_RESx_DigIn_12, &RESx_DigIn_12);
retval += readFromDb(ID_RESx_DigIn_13, &RESx_DigIn_13);
retval += readFromDb(ID_RESx_DigIn_14, &RESx_DigIn_14);
retval += readFromDb(ID_RESx_DigIn_15, &RESx_DigIn_15);
retval += readFromDb(ID_RESx_DigIn_16, &RESx_DigIn_16);
retval += readFromDb(ID_TSTx_DigOut_1, &TSTx_DigOut_1);
retval += readFromDb(ID_TSTx_DigOut_2, &TSTx_DigOut_2);
retval += readFromDb(ID_TSTx_DigOut_3, &TSTx_DigOut_3);
retval += readFromDb(ID_TSTx_DigOut_4, &TSTx_DigOut_4);
retval += readFromDb(ID_TSTx_DigOut_5, &TSTx_DigOut_5);
retval += readFromDb(ID_TSTx_DigOut_6, &TSTx_DigOut_6);
retval += readFromDb(ID_TSTx_DigOut_7, &TSTx_DigOut_7);
retval += readFromDb(ID_TSTx_DigOut_8, &TSTx_DigOut_8);
retval += readFromDb(ID_TSTx_DigOut_9, &TSTx_DigOut_9);
retval += readFromDb(ID_TSTx_DigOut_10, &TSTx_DigOut_10);
retval += readFromDb(ID_TSTx_DigOut_11, &TSTx_DigOut_11);
retval += readFromDb(ID_TSTx_DigOut_12, &TSTx_DigOut_12);
retval += readFromDb(ID_TSTx_DigOut_13, &TSTx_DigOut_13);
retval += readFromDb(ID_TSTx_DigOut_14, &TSTx_DigOut_14);
retval += readFromDb(ID_TSTx_DigOut_15, &TSTx_DigOut_15);
retval += readFromDb(ID_TSTx_DigOut_16, &TSTx_DigOut_16);
retval += readFromDb(ID_VALx_DigOut_1, &VALx_DigOut_1);
retval += readFromDb(ID_VALx_DigOut_2, &VALx_DigOut_2);
retval += readFromDb(ID_VALx_DigOut_3, &VALx_DigOut_3);
retval += readFromDb(ID_VALx_DigOut_4, &VALx_DigOut_4);
retval += readFromDb(ID_VALx_DigOut_5, &VALx_DigOut_5);
retval += readFromDb(ID_VALx_DigOut_6, &VALx_DigOut_6);
retval += readFromDb(ID_VALx_DigOut_7, &VALx_DigOut_7);
retval += readFromDb(ID_VALx_DigOut_8, &VALx_DigOut_8);
retval += readFromDb(ID_VALx_DigOut_9, &VALx_DigOut_9);
retval += readFromDb(ID_VALx_DigOut_10, &VALx_DigOut_10);
retval += readFromDb(ID_VALx_DigOut_11, &VALx_DigOut_11);
retval += readFromDb(ID_VALx_DigOut_12, &VALx_DigOut_12);
retval += readFromDb(ID_VALx_DigOut_13, &VALx_DigOut_13);
retval += readFromDb(ID_VALx_DigOut_14, &VALx_DigOut_14);
retval += readFromDb(ID_VALx_DigOut_15, &VALx_DigOut_15);
retval += readFromDb(ID_VALx_DigOut_16, &VALx_DigOut_16);
retval += readFromDb(ID_TSTx_AnIn_1, &TSTx_AnIn_1);
retval += readFromDb(ID_TSTx_AnIn_2, &TSTx_AnIn_2);
retval += readFromDb(ID_TSTx_AnIn_3, &TSTx_AnIn_3);
retval += readFromDb(ID_TSTx_AnIn_4, &TSTx_AnIn_4);
retval += readFromDb(ID_TSTx_AnIn_5, &TSTx_AnIn_5);
retval += readFromDb(ID_TSTx_AnIn_6, &TSTx_AnIn_6);
retval += readFromDb(ID_TSTx_AnIn_7, &TSTx_AnIn_7);
retval += readFromDb(ID_TSTx_AnIn_8, &TSTx_AnIn_8);
retval += readFromDb(ID_TSTx_AnIn_9, &TSTx_AnIn_9);
retval += readFromDb(ID_TSTx_AnIn_10, &TSTx_AnIn_10);
retval += readFromDb(ID_TSTx_AnIn_11, &TSTx_AnIn_11);
retval += readFromDb(ID_TSTx_AnIn_12, &TSTx_AnIn_12);
retval += readFromDb(ID_VALx_AnIn_1, &VALx_AnIn_1);
retval += readFromDb(ID_VALx_AnIn_2, &VALx_AnIn_2);
retval += readFromDb(ID_VALx_AnIn_3, &VALx_AnIn_3);
retval += readFromDb(ID_VALx_AnIn_4, &VALx_AnIn_4);
retval += readFromDb(ID_VALx_AnIn_5, &VALx_AnIn_5);
retval += readFromDb(ID_VALx_AnIn_6, &VALx_AnIn_6);
retval += readFromDb(ID_VALx_AnIn_7, &VALx_AnIn_7);
retval += readFromDb(ID_VALx_AnIn_8, &VALx_AnIn_8);
retval += readFromDb(ID_VALx_AnIn_9, &VALx_AnIn_9);
retval += readFromDb(ID_VALx_AnIn_10, &VALx_AnIn_10);
retval += readFromDb(ID_VALx_AnIn_11, &VALx_AnIn_11);
retval += readFromDb(ID_VALx_AnIn_12, &VALx_AnIn_12);
retval += readFromDb(ID_VALx_AnInConf_1, &VALx_AnInConf_1);
retval += readFromDb(ID_VALx_AnInConf_2, &VALx_AnInConf_2);
retval += readFromDb(ID_VALx_AnInConf_3, &VALx_AnInConf_3);
retval += readFromDb(ID_VALx_AnInConf_4, &VALx_AnInConf_4);
retval += readFromDb(ID_VALx_AnInConf_5, &VALx_AnInConf_5);
retval += readFromDb(ID_VALx_AnInConf_6, &VALx_AnInConf_6);
retval += readFromDb(ID_VALx_AnInConf_7, &VALx_AnInConf_7);
retval += readFromDb(ID_VALx_AnInConf_8, &VALx_AnInConf_8);
retval += readFromDb(ID_VALx_AnInConf_9, &VALx_AnInConf_9);
retval += readFromDb(ID_VALx_AnInConf_10, &VALx_AnInConf_10);
retval += readFromDb(ID_VALx_AnInConf_11, &VALx_AnInConf_11);
retval += readFromDb(ID_VALx_AnInConf_12, &VALx_AnInConf_12);
retval += readFromDb(ID_VALx_AnInFltr_1, &VALx_AnInFltr_1);
retval += readFromDb(ID_VALx_AnInFltr_2, &VALx_AnInFltr_2);
retval += readFromDb(ID_VALx_AnInFltr_3, &VALx_AnInFltr_3);
retval += readFromDb(ID_VALx_AnInFltr_4, &VALx_AnInFltr_4);
retval += readFromDb(ID_VALx_AnInFltr_5, &VALx_AnInFltr_5);
retval += readFromDb(ID_VALx_AnInFltr_6, &VALx_AnInFltr_6);
retval += readFromDb(ID_VALx_AnInFltr_7, &VALx_AnInFltr_7);
retval += readFromDb(ID_VALx_AnInFltr_8, &VALx_AnInFltr_8);
retval += readFromDb(ID_VALx_AnInFltr_9, &VALx_AnInFltr_9);
retval += readFromDb(ID_VALx_AnInFltr_10, &VALx_AnInFltr_10);
retval += readFromDb(ID_VALx_AnInFltr_11, &VALx_AnInFltr_11);
retval += readFromDb(ID_VALx_AnInFltr_12, &VALx_AnInFltr_12);
retval += readFromDb(ID_RESx_AnIn_1, &RESx_AnIn_1);
retval += readFromDb(ID_RESx_AnIn_2, &RESx_AnIn_2);
retval += readFromDb(ID_RESx_AnIn_3, &RESx_AnIn_3);
retval += readFromDb(ID_RESx_AnIn_4, &RESx_AnIn_4);
retval += readFromDb(ID_RESx_AnIn_5, &RESx_AnIn_5);
retval += readFromDb(ID_RESx_AnIn_6, &RESx_AnIn_6);
retval += readFromDb(ID_RESx_AnIn_7, &RESx_AnIn_7);
retval += readFromDb(ID_RESx_AnIn_8, &RESx_AnIn_8);
retval += readFromDb(ID_RESx_AnIn_9, &RESx_AnIn_9);
retval += readFromDb(ID_RESx_AnIn_10, &RESx_AnIn_10);
retval += readFromDb(ID_RESx_AnIn_11, &RESx_AnIn_11);
retval += readFromDb(ID_RESx_AnIn_12, &RESx_AnIn_12);
retval += readFromDb(ID_RESx_AnInStts_1, &RESx_AnInStts_1);
retval += readFromDb(ID_RESx_AnInStts_2, &RESx_AnInStts_2);
retval += readFromDb(ID_RESx_AnInStts_3, &RESx_AnInStts_3);
retval += readFromDb(ID_RESx_AnInStts_4, &RESx_AnInStts_4);
retval += readFromDb(ID_RESx_AnInStts_5, &RESx_AnInStts_5);
retval += readFromDb(ID_RESx_AnInStts_6, &RESx_AnInStts_6);
retval += readFromDb(ID_RESx_AnInStts_7, &RESx_AnInStts_7);
retval += readFromDb(ID_RESx_AnInStts_8, &RESx_AnInStts_8);
retval += readFromDb(ID_RESx_AnInStts_9, &RESx_AnInStts_9);
retval += readFromDb(ID_RESx_AnInStts_10, &RESx_AnInStts_10);
retval += readFromDb(ID_RESx_AnInStts_11, &RESx_AnInStts_11);
retval += readFromDb(ID_RESx_AnInStts_12, &RESx_AnInStts_12);
retval += readFromDb(ID_TSTx_AnOut_1, &TSTx_AnOut_1);
retval += readFromDb(ID_TSTx_AnOut_2, &TSTx_AnOut_2);
retval += readFromDb(ID_TSTx_AnOut_3, &TSTx_AnOut_3);
retval += readFromDb(ID_TSTx_AnOut_4, &TSTx_AnOut_4);
retval += readFromDb(ID_VALx_AnOut_1, &VALx_AnOut_1);
retval += readFromDb(ID_VALx_AnOut_2, &VALx_AnOut_2);
retval += readFromDb(ID_VALx_AnOut_3, &VALx_AnOut_3);
retval += readFromDb(ID_VALx_AnOut_4, &VALx_AnOut_4);
retval += readFromDb(ID_VALx_AnOutConf_1, &VALx_AnOutConf_1);
retval += readFromDb(ID_VALx_AnOutConf_2, &VALx_AnOutConf_2);
retval += readFromDb(ID_VALx_AnOutConf_3, &VALx_AnOutConf_3);
retval += readFromDb(ID_VALx_AnOutConf_4, &VALx_AnOutConf_4);
retval += readFromDb(ID_RESx_AnOutStts_1, &RESx_AnOutStts_1);
retval += readFromDb(ID_RESx_AnOutStts_2, &RESx_AnOutStts_2);
retval += readFromDb(ID_RESx_AnOutStts_3, &RESx_AnOutStts_3);
retval += readFromDb(ID_RESx_AnOutStts_4, &RESx_AnOutStts_4);
retval += readFromDb(ID_TSTx_Tamb, &TSTx_Tamb);
retval += readFromDb(ID_TSTx_RPM, &TSTx_RPM);
retval += readFromDb(ID_TSTx_FWrevision, &TSTx_FWrevision);
retval += readFromDb(ID_TSTx_HWconfig, &TSTx_HWconfig);
retval += readFromDb(ID_VALx_Tamb, &VALx_Tamb);
retval += readFromDb(ID_VALx_RPM, &VALx_RPM);
retval += readFromDb(ID_VALx_FWrevision, &VALx_FWrevision);
retval += readFromDb(ID_VALx_HWconfig, &VALx_HWconfig);
retval += readFromDb(ID_RESx_Tamb, &RESx_Tamb);
retval += readFromDb(ID_RESx_RPM, &RESx_RPM);
retval += readFromDb(ID_RESx_FWrevision, &RESx_FWrevision);
retval += readFromDb(ID_RESx_HWconfig, &RESx_HWconfig);
retval += readFromDb(ID_TSTx_RTUS_WR, &TSTx_RTUS_WR);
retval += readFromDb(ID_TSTx_RTUS_RD, &TSTx_RTUS_RD);
retval += readFromDb(ID_TSTx_RTU1_WR, &TSTx_RTU1_WR);
retval += readFromDb(ID_TSTx_RTU1_RD, &TSTx_RTU1_RD);
retval += readFromDb(ID_TSTx_RTU3_WR, &TSTx_RTU3_WR);
retval += readFromDb(ID_TSTx_RTU3_RD, &TSTx_RTU3_RD);
retval += readFromDb(ID_TSTx_CAN1_WR, &TSTx_CAN1_WR);
retval += readFromDb(ID_TSTx_CAN1_RD, &TSTx_CAN1_RD);
retval += readFromDb(ID_VALx_RTUS_WR, &VALx_RTUS_WR);
retval += readFromDb(ID_VALx_RTUS_RD, &VALx_RTUS_RD);
retval += readFromDb(ID_VALx_RTU1_WR, &VALx_RTU1_WR);
retval += readFromDb(ID_VALx_RTU1_RD, &VALx_RTU1_RD);
retval += readFromDb(ID_VALx_RTU3_WR, &VALx_RTU3_WR);
retval += readFromDb(ID_VALx_RTU3_RD, &VALx_RTU3_RD);
retval += readFromDb(ID_VALx_CAN1_WR, &VALx_CAN1_WR);
retval += readFromDb(ID_VALx_CAN1_RD, &VALx_CAN1_RD);
retval += readFromDb(ID_RESx_RTUS_WR, &RESx_RTUS_WR);
retval += readFromDb(ID_RESx_RTUS_RD, &RESx_RTUS_RD);
retval += readFromDb(ID_RESx_RTU1_WR, &RESx_RTU1_WR);
retval += readFromDb(ID_RESx_RTU1_RD, &RESx_RTU1_RD);
retval += readFromDb(ID_RESx_RTU3_WR, &RESx_RTU3_WR);
retval += readFromDb(ID_RESx_RTU3_RD, &RESx_RTU3_RD);
retval += readFromDb(ID_RESx_CAN1_WR, &RESx_CAN1_WR);
retval += readFromDb(ID_RESx_CAN1_RD, &RESx_CAN1_RD);
retval += readFromDb(ID_TESTx_STATUS, &TESTx_STATUS);
retval += readFromDb(ID_RTU0_TYPE_PORT, &RTU0_TYPE_PORT);
retval += readFromDb(ID_RTU0_BAUDRATE, &RTU0_BAUDRATE);
retval += readFromDb(ID_RTU0_STATUS, &RTU0_STATUS);
retval += readFromDb(ID_RTU0_READS, &RTU0_READS);
retval += readFromDb(ID_RTU0_WRITES, &RTU0_WRITES);
retval += readFromDb(ID_RTU0_TIMEOUTS, &RTU0_TIMEOUTS);
retval += readFromDb(ID_RTU0_COMM_ERRORS, &RTU0_COMM_ERRORS);
retval += readFromDb(ID_RTU0_LAST_ERROR, &RTU0_LAST_ERROR);
retval += readFromDb(ID_RTU0_WRITE_QUEUE, &RTU0_WRITE_QUEUE);
retval += readFromDb(ID_RTU0_READ_QUEUE, &RTU0_READ_QUEUE);
retval += readFromDb(ID_RTU1_TYPE_PORT, &RTU1_TYPE_PORT);
retval += readFromDb(ID_RTU1_BAUDRATE, &RTU1_BAUDRATE);
retval += readFromDb(ID_RTU1_STATUS, &RTU1_STATUS);
retval += readFromDb(ID_RTU1_READS, &RTU1_READS);
retval += readFromDb(ID_RTU1_WRITES, &RTU1_WRITES);
retval += readFromDb(ID_RTU1_TIMEOUTS, &RTU1_TIMEOUTS);
retval += readFromDb(ID_RTU1_COMM_ERRORS, &RTU1_COMM_ERRORS);
retval += readFromDb(ID_RTU1_LAST_ERROR, &RTU1_LAST_ERROR);
retval += readFromDb(ID_RTU1_WRITE_QUEUE, &RTU1_WRITE_QUEUE);
retval += readFromDb(ID_RTU1_READ_QUEUE, &RTU1_READ_QUEUE);
retval += readFromDb(ID_RTU3_TYPE_PORT, &RTU3_TYPE_PORT);
retval += readFromDb(ID_RTU3_BAUDRATE, &RTU3_BAUDRATE);
retval += readFromDb(ID_RTU3_STATUS, &RTU3_STATUS);
retval += readFromDb(ID_RTU3_READS, &RTU3_READS);
retval += readFromDb(ID_RTU3_WRITES, &RTU3_WRITES);
retval += readFromDb(ID_RTU3_TIMEOUTS, &RTU3_TIMEOUTS);
retval += readFromDb(ID_RTU3_COMM_ERRORS, &RTU3_COMM_ERRORS);
retval += readFromDb(ID_RTU3_LAST_ERROR, &RTU3_LAST_ERROR);
retval += readFromDb(ID_RTU3_WRITE_QUEUE, &RTU3_WRITE_QUEUE);
retval += readFromDb(ID_RTU3_READ_QUEUE, &RTU3_READ_QUEUE);
retval += readFromDb(ID_CAN0_TYPE_PORT, &CAN0_TYPE_PORT);
retval += readFromDb(ID_CAN0_BAUDRATE, &CAN0_BAUDRATE);
retval += readFromDb(ID_CAN0_STATUS, &CAN0_STATUS);
retval += readFromDb(ID_CAN0_READS, &CAN0_READS);
retval += readFromDb(ID_CAN0_WRITES, &CAN0_WRITES);
retval += readFromDb(ID_CAN0_TIMEOUTS, &CAN0_TIMEOUTS);
retval += readFromDb(ID_CAN0_COMM_ERRORS, &CAN0_COMM_ERRORS);
retval += readFromDb(ID_CAN0_LAST_ERROR, &CAN0_LAST_ERROR);
retval += readFromDb(ID_CAN0_WRITE_QUEUE, &CAN0_WRITE_QUEUE);
retval += readFromDb(ID_CAN0_READ_QUEUE, &CAN0_READ_QUEUE);
retval += readFromDb(ID_CAN1_TYPE_PORT, &CAN1_TYPE_PORT);
retval += readFromDb(ID_CAN1_BAUDRATE, &CAN1_BAUDRATE);
retval += readFromDb(ID_CAN1_STATUS, &CAN1_STATUS);
retval += readFromDb(ID_CAN1_READS, &CAN1_READS);
retval += readFromDb(ID_CAN1_WRITES, &CAN1_WRITES);
retval += readFromDb(ID_CAN1_TIMEOUTS, &CAN1_TIMEOUTS);
retval += readFromDb(ID_CAN1_COMM_ERRORS, &CAN1_COMM_ERRORS);
retval += readFromDb(ID_CAN1_LAST_ERROR, &CAN1_LAST_ERROR);
retval += readFromDb(ID_CAN1_WRITE_QUEUE, &CAN1_WRITE_QUEUE);
retval += readFromDb(ID_CAN1_READ_QUEUE, &CAN1_READ_QUEUE);
retval += readFromDb(ID_TCPS_TYPE_PORT, &TCPS_TYPE_PORT);
retval += readFromDb(ID_TCPS_IP_ADDRESS, &TCPS_IP_ADDRESS);
retval += readFromDb(ID_TCPS_STATUS, &TCPS_STATUS);
retval += readFromDb(ID_TCPS_READS, &TCPS_READS);
retval += readFromDb(ID_TCPS_WRITES, &TCPS_WRITES);
retval += readFromDb(ID_TCPS_TIMEOUTS, &TCPS_TIMEOUTS);
retval += readFromDb(ID_TCPS_COMM_ERRORS, &TCPS_COMM_ERRORS);
retval += readFromDb(ID_TCPS_LAST_ERROR, &TCPS_LAST_ERROR);
retval += readFromDb(ID_TCPS_WRITE_QUEUE, &TCPS_WRITE_QUEUE);
retval += readFromDb(ID_TCPS_READ_QUEUE, &TCPS_READ_QUEUE);
retval += readFromDb(ID_TCP0_TYPE_PORT, &TCP0_TYPE_PORT);
retval += readFromDb(ID_TCP0_IP_ADDRESS, &TCP0_IP_ADDRESS);
retval += readFromDb(ID_TCP0_STATUS, &TCP0_STATUS);
retval += readFromDb(ID_TCP0_READS, &TCP0_READS);
retval += readFromDb(ID_TCP0_WRITES, &TCP0_WRITES);
retval += readFromDb(ID_TCP0_TIMEOUTS, &TCP0_TIMEOUTS);
retval += readFromDb(ID_TCP0_COMM_ERRORS, &TCP0_COMM_ERRORS);
retval += readFromDb(ID_TCP0_LAST_ERROR, &TCP0_LAST_ERROR);
retval += readFromDb(ID_TCP0_WRITE_QUEUE, &TCP0_WRITE_QUEUE);
retval += readFromDb(ID_TCP0_READ_QUEUE, &TCP0_READ_QUEUE);
retval += readFromDb(ID_TCP1_TYPE_PORT, &TCP1_TYPE_PORT);
retval += readFromDb(ID_TCP1_IP_ADDRESS, &TCP1_IP_ADDRESS);
retval += readFromDb(ID_TCP1_STATUS, &TCP1_STATUS);
retval += readFromDb(ID_TCP1_READS, &TCP1_READS);
retval += readFromDb(ID_TCP1_WRITES, &TCP1_WRITES);
retval += readFromDb(ID_TCP1_TIMEOUTS, &TCP1_TIMEOUTS);
retval += readFromDb(ID_TCP1_COMM_ERRORS, &TCP1_COMM_ERRORS);
retval += readFromDb(ID_TCP1_LAST_ERROR, &TCP1_LAST_ERROR);
retval += readFromDb(ID_TCP1_WRITE_QUEUE, &TCP1_WRITE_QUEUE);
retval += readFromDb(ID_TCP1_READ_QUEUE, &TCP1_READ_QUEUE);
retval += readFromDb(ID_TCP2_TYPE_PORT, &TCP2_TYPE_PORT);
retval += readFromDb(ID_TCP2_IP_ADDRESS, &TCP2_IP_ADDRESS);
retval += readFromDb(ID_TCP2_STATUS, &TCP2_STATUS);
retval += readFromDb(ID_TCP2_READS, &TCP2_READS);
retval += readFromDb(ID_TCP2_WRITES, &TCP2_WRITES);
retval += readFromDb(ID_TCP2_TIMEOUTS, &TCP2_TIMEOUTS);
retval += readFromDb(ID_TCP2_COMM_ERRORS, &TCP2_COMM_ERRORS);
retval += readFromDb(ID_TCP2_LAST_ERROR, &TCP2_LAST_ERROR);
retval += readFromDb(ID_TCP2_WRITE_QUEUE, &TCP2_WRITE_QUEUE);
retval += readFromDb(ID_TCP2_READ_QUEUE, &TCP2_READ_QUEUE);
retval += readFromDb(ID_TCP3_TYPE_PORT, &TCP3_TYPE_PORT);
retval += readFromDb(ID_TCP3_IP_ADDRESS, &TCP3_IP_ADDRESS);
retval += readFromDb(ID_TCP3_STATUS, &TCP3_STATUS);
retval += readFromDb(ID_TCP3_READS, &TCP3_READS);
retval += readFromDb(ID_TCP3_WRITES, &TCP3_WRITES);
retval += readFromDb(ID_TCP3_TIMEOUTS, &TCP3_TIMEOUTS);
retval += readFromDb(ID_TCP3_COMM_ERRORS, &TCP3_COMM_ERRORS);
retval += readFromDb(ID_TCP3_LAST_ERROR, &TCP3_LAST_ERROR);
retval += readFromDb(ID_TCP3_WRITE_QUEUE, &TCP3_WRITE_QUEUE);
retval += readFromDb(ID_TCP3_READ_QUEUE, &TCP3_READ_QUEUE);
retval += readFromDb(ID_TCP4_TYPE_PORT, &TCP4_TYPE_PORT);
retval += readFromDb(ID_TCP4_IP_ADDRESS, &TCP4_IP_ADDRESS);
retval += readFromDb(ID_TCP4_STATUS, &TCP4_STATUS);
retval += readFromDb(ID_TCP4_READS, &TCP4_READS);
retval += readFromDb(ID_TCP4_WRITES, &TCP4_WRITES);
retval += readFromDb(ID_TCP4_TIMEOUTS, &TCP4_TIMEOUTS);
retval += readFromDb(ID_TCP4_COMM_ERRORS, &TCP4_COMM_ERRORS);
retval += readFromDb(ID_TCP4_LAST_ERROR, &TCP4_LAST_ERROR);
retval += readFromDb(ID_TCP4_WRITE_QUEUE, &TCP4_WRITE_QUEUE);
retval += readFromDb(ID_TCP4_READ_QUEUE, &TCP4_READ_QUEUE);
retval += readFromDb(ID_TCP5_TYPE_PORT, &TCP5_TYPE_PORT);
retval += readFromDb(ID_TCP5_IP_ADDRESS, &TCP5_IP_ADDRESS);
retval += readFromDb(ID_TCP5_STATUS, &TCP5_STATUS);
retval += readFromDb(ID_TCP5_READS, &TCP5_READS);
retval += readFromDb(ID_TCP5_WRITES, &TCP5_WRITES);
retval += readFromDb(ID_TCP5_TIMEOUTS, &TCP5_TIMEOUTS);
retval += readFromDb(ID_TCP5_COMM_ERRORS, &TCP5_COMM_ERRORS);
retval += readFromDb(ID_TCP5_LAST_ERROR, &TCP5_LAST_ERROR);
retval += readFromDb(ID_TCP5_WRITE_QUEUE, &TCP5_WRITE_QUEUE);
retval += readFromDb(ID_TCP5_READ_QUEUE, &TCP5_READ_QUEUE);
retval += readFromDb(ID_TCP6_TYPE_PORT, &TCP6_TYPE_PORT);
retval += readFromDb(ID_TCP6_IP_ADDRESS, &TCP6_IP_ADDRESS);
retval += readFromDb(ID_TCP6_STATUS, &TCP6_STATUS);
retval += readFromDb(ID_TCP6_READS, &TCP6_READS);
retval += readFromDb(ID_TCP6_WRITES, &TCP6_WRITES);
retval += readFromDb(ID_TCP6_TIMEOUTS, &TCP6_TIMEOUTS);
retval += readFromDb(ID_TCP6_COMM_ERRORS, &TCP6_COMM_ERRORS);
retval += readFromDb(ID_TCP6_LAST_ERROR, &TCP6_LAST_ERROR);
retval += readFromDb(ID_TCP6_WRITE_QUEUE, &TCP6_WRITE_QUEUE);
retval += readFromDb(ID_TCP6_READ_QUEUE, &TCP6_READ_QUEUE);
retval += readFromDb(ID_TCP7_TYPE_PORT, &TCP7_TYPE_PORT);
retval += readFromDb(ID_TCP7_IP_ADDRESS, &TCP7_IP_ADDRESS);
retval += readFromDb(ID_TCP7_STATUS, &TCP7_STATUS);
retval += readFromDb(ID_TCP7_READS, &TCP7_READS);
retval += readFromDb(ID_TCP7_WRITES, &TCP7_WRITES);
retval += readFromDb(ID_TCP7_TIMEOUTS, &TCP7_TIMEOUTS);
retval += readFromDb(ID_TCP7_COMM_ERRORS, &TCP7_COMM_ERRORS);
retval += readFromDb(ID_TCP7_LAST_ERROR, &TCP7_LAST_ERROR);
retval += readFromDb(ID_TCP7_WRITE_QUEUE, &TCP7_WRITE_QUEUE);
retval += readFromDb(ID_TCP7_READ_QUEUE, &TCP7_READ_QUEUE);
retval += readFromDb(ID_TCP8_TYPE_PORT, &TCP8_TYPE_PORT);
retval += readFromDb(ID_TCP8_IP_ADDRESS, &TCP8_IP_ADDRESS);
retval += readFromDb(ID_TCP8_STATUS, &TCP8_STATUS);
retval += readFromDb(ID_TCP8_READS, &TCP8_READS);
retval += readFromDb(ID_TCP8_WRITES, &TCP8_WRITES);
retval += readFromDb(ID_TCP8_TIMEOUTS, &TCP8_TIMEOUTS);
retval += readFromDb(ID_TCP8_COMM_ERRORS, &TCP8_COMM_ERRORS);
retval += readFromDb(ID_TCP8_LAST_ERROR, &TCP8_LAST_ERROR);
retval += readFromDb(ID_TCP8_WRITE_QUEUE, &TCP8_WRITE_QUEUE);
retval += readFromDb(ID_TCP8_READ_QUEUE, &TCP8_READ_QUEUE);
retval += readFromDb(ID_TCP9_TYPE_PORT, &TCP9_TYPE_PORT);
retval += readFromDb(ID_TCP9_IP_ADDRESS, &TCP9_IP_ADDRESS);
retval += readFromDb(ID_TCP9_STATUS, &TCP9_STATUS);
retval += readFromDb(ID_TCP9_READS, &TCP9_READS);
retval += readFromDb(ID_TCP9_WRITES, &TCP9_WRITES);
retval += readFromDb(ID_TCP9_TIMEOUTS, &TCP9_TIMEOUTS);
retval += readFromDb(ID_TCP9_COMM_ERRORS, &TCP9_COMM_ERRORS);
retval += readFromDb(ID_TCP9_LAST_ERROR, &TCP9_LAST_ERROR);
retval += readFromDb(ID_TCP9_WRITE_QUEUE, &TCP9_WRITE_QUEUE);
retval += readFromDb(ID_TCP9_READ_QUEUE, &TCP9_READ_QUEUE);
retval += readFromDb(ID_NODE_01_DEV_NODE, &NODE_01_DEV_NODE);
retval += readFromDb(ID_NODE_01_STATUS, &NODE_01_STATUS);
retval += readFromDb(ID_NODE_02_DEV_NODE, &NODE_02_DEV_NODE);
retval += readFromDb(ID_NODE_02_STATUS, &NODE_02_STATUS);
retval += readFromDb(ID_NODE_03_DEV_NODE, &NODE_03_DEV_NODE);
retval += readFromDb(ID_NODE_03_STATUS, &NODE_03_STATUS);
retval += readFromDb(ID_NODE_04_DEV_NODE, &NODE_04_DEV_NODE);
retval += readFromDb(ID_NODE_04_STATUS, &NODE_04_STATUS);
retval += readFromDb(ID_NODE_05_DEV_NODE, &NODE_05_DEV_NODE);
retval += readFromDb(ID_NODE_05_STATUS, &NODE_05_STATUS);
retval += readFromDb(ID_NODE_06_DEV_NODE, &NODE_06_DEV_NODE);
retval += readFromDb(ID_NODE_06_STATUS, &NODE_06_STATUS);
retval += readFromDb(ID_NODE_07_DEV_NODE, &NODE_07_DEV_NODE);
retval += readFromDb(ID_NODE_07_STATUS, &NODE_07_STATUS);
retval += readFromDb(ID_NODE_08_DEV_NODE, &NODE_08_DEV_NODE);
retval += readFromDb(ID_NODE_08_STATUS, &NODE_08_STATUS);
retval += readFromDb(ID_NODE_09_DEV_NODE, &NODE_09_DEV_NODE);
retval += readFromDb(ID_NODE_09_STATUS, &NODE_09_STATUS);
retval += readFromDb(ID_NODE_10_DEV_NODE, &NODE_10_DEV_NODE);
retval += readFromDb(ID_NODE_10_STATUS, &NODE_10_STATUS);
retval += readFromDb(ID_NODE_11_DEV_NODE, &NODE_11_DEV_NODE);
retval += readFromDb(ID_NODE_11_STATUS, &NODE_11_STATUS);
retval += readFromDb(ID_NODE_12_DEV_NODE, &NODE_12_DEV_NODE);
retval += readFromDb(ID_NODE_12_STATUS, &NODE_12_STATUS);
retval += readFromDb(ID_NODE_13_DEV_NODE, &NODE_13_DEV_NODE);
retval += readFromDb(ID_NODE_13_STATUS, &NODE_13_STATUS);
retval += readFromDb(ID_NODE_14_DEV_NODE, &NODE_14_DEV_NODE);
retval += readFromDb(ID_NODE_14_STATUS, &NODE_14_STATUS);
retval += readFromDb(ID_NODE_15_DEV_NODE, &NODE_15_DEV_NODE);
retval += readFromDb(ID_NODE_15_STATUS, &NODE_15_STATUS);
retval += readFromDb(ID_NODE_16_DEV_NODE, &NODE_16_DEV_NODE);
retval += readFromDb(ID_NODE_16_STATUS, &NODE_16_STATUS);
retval += readFromDb(ID_PLC_FWrevision, &PLC_FWrevision);
retval += readFromDb(ID_PLC_HWconfig, &PLC_HWconfig);
retval += readFromDb(ID_PLC_DigDir_1, &PLC_DigDir_1);
retval += readFromDb(ID_PLC_DigDir_2, &PLC_DigDir_2);
retval += readFromDb(ID_PLC_DigDir_3, &PLC_DigDir_3);
retval += readFromDb(ID_PLC_DigDir_4, &PLC_DigDir_4);
retval += readFromDb(ID_PLC_DigDir_5, &PLC_DigDir_5);
retval += readFromDb(ID_PLC_DigDir_6, &PLC_DigDir_6);
retval += readFromDb(ID_PLC_DigDir_7, &PLC_DigDir_7);
retval += readFromDb(ID_PLC_DigDir_8, &PLC_DigDir_8);
retval += readFromDb(ID_PLC_AnInConf_1, &PLC_AnInConf_1);
retval += readFromDb(ID_PLC_AnInConf_2, &PLC_AnInConf_2);
retval += readFromDb(ID_PLC_AnOutConf_1, &PLC_AnOutConf_1);
retval += readFromDb(ID_PLC_AnOutConf_2, &PLC_AnOutConf_2);
retval += readFromDb(ID_PLC_AnOutConf_3, &PLC_AnOutConf_3);
retval += readFromDb(ID_PLC_AnOutConf_4, &PLC_AnOutConf_4);
retval += readFromDb(ID_PLC_DigIn_1, &PLC_DigIn_1);
retval += readFromDb(ID_PLC_DigIn_2, &PLC_DigIn_2);
retval += readFromDb(ID_PLC_DigIn_3, &PLC_DigIn_3);
retval += readFromDb(ID_PLC_DigIn_4, &PLC_DigIn_4);
retval += readFromDb(ID_PLC_DigIn_5, &PLC_DigIn_5);
retval += readFromDb(ID_PLC_DigIn_6, &PLC_DigIn_6);
retval += readFromDb(ID_PLC_DigIn_7, &PLC_DigIn_7);
retval += readFromDb(ID_PLC_DigIn_8, &PLC_DigIn_8);
retval += readFromDb(ID_PLC_DigIn_9, &PLC_DigIn_9);
retval += readFromDb(ID_PLC_DigIn_10, &PLC_DigIn_10);
retval += readFromDb(ID_PLC_DigIn_11, &PLC_DigIn_11);
retval += readFromDb(ID_PLC_DigIn_12, &PLC_DigIn_12);
retval += readFromDb(ID_PLC_AnIn_1, &PLC_AnIn_1);
retval += readFromDb(ID_PLC_AnIn_2, &PLC_AnIn_2);
retval += readFromDb(ID_PLC_AnIn_3, &PLC_AnIn_3);
retval += readFromDb(ID_PLC_AnIn_4, &PLC_AnIn_4);
retval += readFromDb(ID_PLC_AnIn_5, &PLC_AnIn_5);
retval += readFromDb(ID_PLC_Tamb, &PLC_Tamb);
retval += readFromDb(ID_PLC_Encoder, &PLC_Encoder);
retval += readFromDb(ID_PLC_Capture, &PLC_Capture);
retval += readFromDb(ID_PLC_DigOut_1, &PLC_DigOut_1);
retval += readFromDb(ID_PLC_DigOut_2, &PLC_DigOut_2);
retval += readFromDb(ID_PLC_DigOut_3, &PLC_DigOut_3);
retval += readFromDb(ID_PLC_DigOut_4, &PLC_DigOut_4);
retval += readFromDb(ID_PLC_DigOut_5, &PLC_DigOut_5);
retval += readFromDb(ID_PLC_DigOut_6, &PLC_DigOut_6);
retval += readFromDb(ID_PLC_DigOut_7, &PLC_DigOut_7);
retval += readFromDb(ID_PLC_DigOut_8, &PLC_DigOut_8);
retval += readFromDb(ID_PLC_AnOut_1, &PLC_AnOut_1);
retval += readFromDb(ID_PLC_AnOut_2, &PLC_AnOut_2);
retval += readFromDb(ID_PLC_AnOut_3, &PLC_AnOut_3);
retval += readFromDb(ID_PLC_AnOut_4, &PLC_AnOut_4);
retval += readFromDb(ID_PLC_EncoderStart, &PLC_EncoderStart);
retval += readFromDb(ID_PLC_EncoderReset, &PLC_EncoderReset);
retval += readFromDb(ID_PLC_Heartbeat, &PLC_Heartbeat);
retval += readFromDb(ID_PLC_StatusReg, &PLC_StatusReg);
retval += readFromDb(ID_PLC_AnIn1Filter, &PLC_AnIn1Filter);
retval += readFromDb(ID_PLC_AnIn2Filter, &PLC_AnIn2Filter);
retval += readFromDb(ID_PLC_time, &PLC_time);
retval += readFromDb(ID_PLC_timeMin, &PLC_timeMin);
retval += readFromDb(ID_PLC_timeMax, &PLC_timeMax);
retval += readFromDb(ID_PLC_timeWin, &PLC_timeWin);
retval += readFromDb(ID_PLC_Version, &PLC_Version);
retval += readFromDb(ID_PLC_EngineStatus, &PLC_EngineStatus);
retval += readFromDb(ID_PLC_ResetValues, &PLC_ResetValues);
return retval;
}
