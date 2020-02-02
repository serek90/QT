#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "Czy connect się powiódł?" << connect(ui->pushButtonTest, SIGNAL(clicked()), this, SLOT(myCustomSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonOK_clicked()
{
    qDebug() << "Wcisnąłeś przycisk OK";
}

void MainWindow::myCustomSlot()
{
    qDebug() << "Wcisnałes przycisk i wykorzystałeś metodę sygnałów i slotów";
}
