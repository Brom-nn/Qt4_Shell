#include "counter.h"
#include "ui_counter.h"

counter::counter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::counter)
{
    ui->setupUi(this);
}

counter::~counter()
{
    delete ui;
}
