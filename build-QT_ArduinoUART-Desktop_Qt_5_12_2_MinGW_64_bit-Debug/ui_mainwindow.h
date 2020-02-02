/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *Polaczenie;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSzukaj;
    QPushButton *pushButtonRozlacz;
    QPushButton *pushButtonPoacz;
    QComboBox *comboBoxDevices;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(610, 398);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Polaczenie = new QGroupBox(centralWidget);
        Polaczenie->setObjectName(QString::fromUtf8("Polaczenie"));
        Polaczenie->setGeometry(QRect(9, 9, 561, 341));
        gridLayout = new QGridLayout(Polaczenie);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonSzukaj = new QPushButton(Polaczenie);
        pushButtonSzukaj->setObjectName(QString::fromUtf8("pushButtonSzukaj"));

        gridLayout->addWidget(pushButtonSzukaj, 0, 0, 1, 1);

        pushButtonRozlacz = new QPushButton(Polaczenie);
        pushButtonRozlacz->setObjectName(QString::fromUtf8("pushButtonRozlacz"));

        gridLayout->addWidget(pushButtonRozlacz, 1, 0, 1, 1);

        pushButtonPoacz = new QPushButton(Polaczenie);
        pushButtonPoacz->setObjectName(QString::fromUtf8("pushButtonPoacz"));

        gridLayout->addWidget(pushButtonPoacz, 1, 1, 1, 1);

        comboBoxDevices = new QComboBox(Polaczenie);
        comboBoxDevices->setObjectName(QString::fromUtf8("comboBoxDevices"));

        gridLayout->addWidget(comboBoxDevices, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonRozlacz, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Polaczenie->setTitle(QApplication::translate("MainWindow", "Po\305\202\304\205czenie", nullptr));
        pushButtonSzukaj->setText(QApplication::translate("MainWindow", "Szukaj", nullptr));
        pushButtonRozlacz->setText(QApplication::translate("MainWindow", "Roz\305\202\304\205cz", nullptr));
        pushButtonPoacz->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
