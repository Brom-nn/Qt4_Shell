#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_pushButton_clicked()
{
    QMessageBox::about(this, "Заголовок смотреть сюдв","Просто текст");


}
*/

void MainWindow::on_pushButton_clicked()
{
    SecondWindow window;
    window.setModal(true);
    window.exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    Win_
}
