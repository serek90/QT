#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtSerialPort/QSerialPortInfo>
#include <QList>
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonSzukaj_clicked()
{
    QList<QSerialPortInfo> devices;
    devices = QSerialPortInfo::availablePorts();

    //Loop to search serial port
    for(int i =0; i < devices.count(); i++)
    {
        qDebug() << devices.at(i).portName() << devices.at(i).description();

        ui->comboBoxDevices->addItem(devices.at(i).portName() + " " + devices.at(i).description());
    }
    qDebug() << "Szukam urządzeń ...";

    //print serial port name
    int index = 0;
    if((devices.count() - 1) >= index)
    {
        devices.at(index).portName();
    }
}

