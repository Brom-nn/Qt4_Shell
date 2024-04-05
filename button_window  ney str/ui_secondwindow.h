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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_15;

    void setupUi(QDialog *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(767, 540);
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        SecondWindow->setFont(font);
        SecondWindow->setLayoutDirection(Qt::LeftToRight);
        SecondWindow->setInputMethodHints(Qt::ImhNone);
        horizontalLayoutWidget = new QWidget(SecondWindow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 381, 151));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
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


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(20, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        textEdit_4 = new QTextEdit(horizontalLayoutWidget);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

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

        verticalLayout_2->addWidget(textEdit_15);

        verticalLayout_2->setStretch(0, 1);

        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QDialog *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("SecondWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("SecondWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
        label_14->setText(QCoreApplication::translate("SecondWindow", "\320\227\320\260\320\262. \342\204\226 \320\270\320\267\320\264\320\265\320\273\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
