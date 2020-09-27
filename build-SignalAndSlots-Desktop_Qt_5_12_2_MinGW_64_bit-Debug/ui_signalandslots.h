/********************************************************************************
** Form generated from reading UI file 'signalandslots.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALANDSLOTS_H
#define UI_SIGNALANDSLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignalAndSlots
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignalAndSlots)
    {
        if (SignalAndSlots->objectName().isEmpty())
            SignalAndSlots->setObjectName(QString::fromUtf8("SignalAndSlots"));
        SignalAndSlots->resize(703, 436);
        centralWidget = new QWidget(SignalAndSlots);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 70, 401, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        SignalAndSlots->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SignalAndSlots);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 703, 20));
        SignalAndSlots->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignalAndSlots);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SignalAndSlots->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SignalAndSlots);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SignalAndSlots->setStatusBar(statusBar);

        retranslateUi(SignalAndSlots);

        QMetaObject::connectSlotsByName(SignalAndSlots);
    } // setupUi

    void retranslateUi(QMainWindow *SignalAndSlots)
    {
        SignalAndSlots->setWindowTitle(QApplication::translate("SignalAndSlots", "SignalAndSlots", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalAndSlots: public Ui_SignalAndSlots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALANDSLOTS_H
