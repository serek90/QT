/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *button;
    QPushButton *button8;
    QPushButton *signButton;
    QPushButton *memButton;
    QPushButton *button7;
    QPushButton *minusButton;
    QPushButton *addButton;
    QPushButton *button1;
    QPushButton *clearButton;
    QPushButton *devideButton;
    QPushButton *multiplyButton;
    QPushButton *button4;
    QPushButton *button2;
    QPushButton *pushButton_20;
    QPushButton *button6;
    QPushButton *memClearButton;
    QPushButton *button9;
    QPushButton *button3;
    QPushButton *button5;
    QPushButton *memAddButton;
    QLineEdit *Display;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(400, 220);
        centralWidget = new QWidget(Calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        button = new QPushButton(centralWidget);
        button->setObjectName(QString::fromUtf8("button"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button->sizePolicy().hasHeightForWidth());
        button->setSizePolicy(sizePolicy);
        button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button, 6, 1, 1, 1);

        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button8, 3, 1, 1, 1);

        signButton = new QPushButton(centralWidget);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        sizePolicy.setHeightForWidth(signButton->sizePolicy().hasHeightForWidth());
        signButton->setSizePolicy(sizePolicy);
        signButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(signButton, 6, 2, 1, 1);

        memButton = new QPushButton(centralWidget);
        memButton->setObjectName(QString::fromUtf8("memButton"));
        sizePolicy.setHeightForWidth(memButton->sizePolicy().hasHeightForWidth());
        memButton->setSizePolicy(sizePolicy);
        memButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(memButton, 5, 4, 1, 1);

        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button7, 3, 0, 1, 1);

        minusButton = new QPushButton(centralWidget);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        sizePolicy.setHeightForWidth(minusButton->sizePolicy().hasHeightForWidth());
        minusButton->setSizePolicy(sizePolicy);
        minusButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(minusButton, 6, 3, 1, 1);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(addButton, 5, 3, 1, 1);

        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button1, 5, 0, 1, 1);

        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        clearButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(clearButton, 6, 0, 1, 1);

        devideButton = new QPushButton(centralWidget);
        devideButton->setObjectName(QString::fromUtf8("devideButton"));
        sizePolicy.setHeightForWidth(devideButton->sizePolicy().hasHeightForWidth());
        devideButton->setSizePolicy(sizePolicy);
        devideButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(devideButton, 3, 3, 1, 1);

        multiplyButton = new QPushButton(centralWidget);
        multiplyButton->setObjectName(QString::fromUtf8("multiplyButton"));
        sizePolicy.setHeightForWidth(multiplyButton->sizePolicy().hasHeightForWidth());
        multiplyButton->setSizePolicy(sizePolicy);
        multiplyButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(multiplyButton, 4, 3, 1, 1);

        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button4, 4, 0, 1, 1);

        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button2, 5, 1, 1, 1);

        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(pushButton_20, 6, 4, 1, 1);

        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button6, 4, 2, 1, 1);

        memClearButton = new QPushButton(centralWidget);
        memClearButton->setObjectName(QString::fromUtf8("memClearButton"));
        sizePolicy.setHeightForWidth(memClearButton->sizePolicy().hasHeightForWidth());
        memClearButton->setSizePolicy(sizePolicy);
        memClearButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(memClearButton, 4, 4, 1, 1);

        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button9, 3, 2, 1, 1);

        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button3, 5, 2, 1, 1);

        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(button5, 4, 1, 1, 1);

        memAddButton = new QPushButton(centralWidget);
        memAddButton->setObjectName(QString::fromUtf8("memAddButton"));
        sizePolicy.setHeightForWidth(memAddButton->sizePolicy().hasHeightForWidth());
        memAddButton->setSizePolicy(sizePolicy);
        memAddButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color:#FFBC00;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"   padding: 5px;\n"
"}"));

        gridLayout->addWidget(memAddButton, 3, 4, 1, 1);

        Display = new QLineEdit(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"    color: #ffffff;\n"
"}"));

        gridLayout->addWidget(Display, 2, 0, 1, 5);

        Calculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        Calculator->setMenuBar(menuBar);
        statusBar = new QStatusBar(Calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Calculator->setStatusBar(statusBar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator", nullptr));
        button->setText(QApplication::translate("Calculator", "0", nullptr));
        button8->setText(QApplication::translate("Calculator", "8", nullptr));
        signButton->setText(QApplication::translate("Calculator", "+/-", nullptr));
        memButton->setText(QApplication::translate("Calculator", "M", nullptr));
        button7->setText(QApplication::translate("Calculator", "7", nullptr));
        minusButton->setText(QApplication::translate("Calculator", "-", nullptr));
        addButton->setText(QApplication::translate("Calculator", "+", nullptr));
        button1->setText(QApplication::translate("Calculator", "1", nullptr));
        clearButton->setText(QApplication::translate("Calculator", "AC", nullptr));
        devideButton->setText(QApplication::translate("Calculator", "/", nullptr));
        multiplyButton->setText(QApplication::translate("Calculator", "*", nullptr));
        button4->setText(QApplication::translate("Calculator", "4", nullptr));
        button2->setText(QApplication::translate("Calculator", "2", nullptr));
        pushButton_20->setText(QApplication::translate("Calculator", "=", nullptr));
        button6->setText(QApplication::translate("Calculator", "6", nullptr));
        memClearButton->setText(QApplication::translate("Calculator", "M-", nullptr));
        button9->setText(QApplication::translate("Calculator", "9", nullptr));
        button3->setText(QApplication::translate("Calculator", "3", nullptr));
        button5->setText(QApplication::translate("Calculator", "5", nullptr));
        memAddButton->setText(QApplication::translate("Calculator", "M+", nullptr));
        Display->setText(QApplication::translate("Calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
