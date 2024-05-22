/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_15;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QTextEdit *textEdit_6;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(672, 183);
        SecondWindow->setMaximumSize(QSize(16777215, 16000000));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        SecondWindow->setFont(font);
        SecondWindow->setLayoutDirection(Qt::LeftToRight);
        SecondWindow->setInputMethodHints(Qt::ImhNone);
        groupBox = new QGroupBox(SecondWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 371, 161));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 341, 131));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout->setContentsMargins(0, 0, 0, 1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout->addWidget(label_14);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 5);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        textEdit_4 = new QTextEdit(horizontalLayoutWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));
        textEdit_4->setTabStopDistance(60.000000000000000);

        verticalLayout_2->addWidget(textEdit_4);

        textEdit_5 = new QTextEdit(horizontalLayoutWidget);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_5->sizePolicy().hasHeightForWidth());
        textEdit_5->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(textEdit_5);

        textEdit_15 = new QTextEdit(horizontalLayoutWidget);
        textEdit_15->setObjectName(QString::fromUtf8("textEdit_15"));
        sizePolicy.setHeightForWidth(textEdit_15->sizePolicy().hasHeightForWidth());
        textEdit_15->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(12);
        textEdit_15->setFont(font1);
        textEdit_15->setInputMethodHints(Qt::ImhNone);

        verticalLayout_2->addWidget(textEdit_15);

        verticalLayout_2->setStretch(0, 1);

        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 10);
        groupBox_2 = new QGroupBox(SecondWindow);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(420, 10, 241, 61));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 221, 41));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        textEdit_6 = new QTextEdit(widget);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));
        textEdit_6->setTabStopDistance(60.000000000000000);

        horizontalLayout_2->addWidget(textEdit_6);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("SecondWindow", "\320\237\321\200\320\276\321\202\320\276\320\272\320\276\320\273 \342\204\226", nullptr));
        label_3->setText(QCoreApplication::translate("SecondWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("SecondWindow", "\320\227\320\260\320\262. \342\204\226 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        groupBox_2->setTitle(QString());
        label_4->setText(QCoreApplication::translate("SecondWindow", "\342\204\226 \320\277\320\273\320\276\320\274\320\261\320\270\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
