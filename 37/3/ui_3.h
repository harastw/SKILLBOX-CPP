/********************************************************************************
** Form generated from reading UI file '3.ui'
**
** Created by: Qt User Interface Compiler version 5.15.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_3_H
#define UI_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_12;
    QPushButton *pushButton_14;
    QPushButton *pushButton_13;
    QLabel *label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(603, 455);
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(130, 70, 301, 281));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 0, 2, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(verticalLayoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        gridLayout->addWidget(pushButton_11, 3, 0, 1, 1);

        pushButton_10 = new QPushButton(verticalLayoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout->addWidget(pushButton_10, 3, 1, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout->addWidget(pushButton_12, 3, 2, 1, 1);

        pushButton_14 = new QPushButton(verticalLayoutWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));

        gridLayout->addWidget(pushButton_14, 4, 2, 1, 1);

        pushButton_13 = new QPushButton(verticalLayoutWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 4, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(label);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Dialog", "3", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog", "4", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Dialog", "back", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Dialog", "0", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Dialog", "6", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "7", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dialog", "2", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Dialog", "9", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dialog", "8", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Dialog", "next", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Dialog", "+", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Dialog", "-", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_3_H
