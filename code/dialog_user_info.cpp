#include "dialog_user_info.h"
#include "ui_dialog_user_info.h"

Dialog_user_info::Dialog_user_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_user_info)
{
    ui->setupUi(this);
}

Dialog_user_info::~Dialog_user_info()
{
    delete ui;
}
