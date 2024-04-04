#include "dialog_window.h"
#include "ui_dialog_window.h"

Dialog_window::Dialog_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_window)
{
    ui->setupUi(this);
}

Dialog_window::~Dialog_window()
{
    delete ui;
}
