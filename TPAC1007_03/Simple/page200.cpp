/**
 * @file
 * @author Emiliano Bergamaschini <ebergamaschini@mect.it>
 *
 * @section LICENSE
 * Copyright Mect s.r.l. 2013
 *
 * @brief Generic page
 */
#include "app_logprint.h"
#include "atcmplugin.h"
#include "main.h"
#include "page200.h"
#include "ui_page200.h"
#include "crosstable.h"

/**
 * @brief this macro is used to set the PAGE200 style.
 * the syntax is html stylesheet-like
 */
#define SET_PAGE200_STYLE() { \
    QString mystyle; \
    mystyle.append(this->styleSheet()); \
    /* add there the page stilesheet customization */ \
    mystyle.append(""); \
    this->setStyleSheet(mystyle); \
    }

/**
 * @brief This is the constructor. The operation written here, are executed only one time: at the instantiation of the page.
 */
page200::page200(QWidget *parent) :
    page(parent),
    ui(new Ui::page200)
{
    ui->setupUi(this);
    /* set here the protection level (pwd_admin_e, pwd_super_user_e, pwd_user_e, pwd_operator_e), default is pwd_operator_e
     * protection_level = pwd_operator_e;
     */
    
    /* set up the page style */
    //SET_PAGE_STYLE();
    /* set the style described into the macro SET_PAGE200_STYLE */
    SET_PAGE200_STYLE();
    translateFontSize(this);
}

/**
 * @brief This is the reload member. The operation written here, are executed every time this page is shown.
 */
void page200::reload()
{
    /*
       H variables initalizations:
         variableList.clear();
         variableList << "VARIABLE1" << "VARIABLE2" << "VARIABLE3"
       alarm banner initialization in QLineEdit:
         rotateShowError(ui->myLineEdit, ERROR_LABEL_PERIOD_MS);
     */

    doWrite_PLC_timeWin(30.0);
    rotateShowError(ui->lineEdit_Alarms, ERROR_LABEL_PERIOD_MS);
}

/**
 * @brief This is the updateData member. The operation written here, are executed every REFRESH_MS milliseconds.
 */
void page200::updateData()
{
    if (this->isVisible() == false)
    {
        return;
    }
    /* call the parent updateData member */
    page::updateData();
    
    /* To read the cross table variable UINT TEST1:
     *    uint_16 tmp = TEST1;
     */
    /* To write 5 into the the cross table variable UINT TEST1:
     *    doWrite_TEST1(5);
     */

    if (PLC_timeWin <= 15.0)
    {
        if (ui->atcmGraph->x1Step() != 5.0)
            ui->atcmGraph->setX1Step(5.0);
    }
    else if (PLC_timeWin <= 30.0)
    {
        if (ui->atcmGraph->x1Step() != 10.0)
            ui->atcmGraph->setX1Step(10.0);
    }
    else if (PLC_timeWin <= 60.0)
    {
        if (ui->atcmGraph->x1Step() != 20.0)
            ui->atcmGraph->setX1Step(20.0);
    }
    else // max == 120.0
    {
        if (ui->atcmGraph->x1Step() != 40.0)
            ui->atcmGraph->setX1Step(40.0);
    }
}

/**
 * @brief This is the event slot to detect new language translation.
 */
void page200::changeEvent(QEvent * event)
{
    if (event->type() == QEvent::LanguageChange)
    {
        ui->retranslateUi(this);
    }
}

/**
 * @brief This is the distructor member. The operation written here, are executed only one time when the page will be deleted.
 */
page200::~page200()
{
    delete ui;
}


void page200::on_atcmButton_HOME_2_clicked()
{
    ui->atcmGraph->RunStop();
}
