#include "mainwindow.h"
#include <QApplication>
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label=new QLabel("Hello Qt!");
    label->show();
    return app.exec();

    MainWindow w;
    w.show();

    return app.exec();
}
