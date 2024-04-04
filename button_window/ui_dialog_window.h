/********************************************************************************
** Form generated from reading UI file 'dialog_window.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_WINDOW_H
#define UI_DIALOG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Dialog_window
{
public:

    void setupUi(QDialog *Dialog_window)
    {
        if (Dialog_window->objectName().isEmpty())
            Dialog_window->setObjectName(QString::fromUtf8("Dialog_window"));
        Dialog_window->resize(400, 300);

        retranslateUi(Dialog_window);

        QMetaObject::connectSlotsByName(Dialog_window);
    } // setupUi

    void retranslateUi(QDialog *Dialog_window)
    {
        Dialog_window->setWindowTitle(QCoreApplication::translate("Dialog_window", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_window: public Ui_Dialog_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_WINDOW_H
