#include "win_2.h"
#include "ui_win_2.h"

win_2::win_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::win_2)
{
    ui->setupUi(this);
}

win_2::~win_2()
{
    delete ui;
}
