#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>

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

void MainWindow::on_pushButton_clicked()
{
    /*
     *  void about
     * void aboutQt
     * StandardButton critical
     * StandardButton information
     * StandardButton question
     * StandardButton warining
     * */

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Warning", "Do you really want to clse the app?",
                                                              QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
        QApplication::quit();
    else {
        qDebug() << "Try again!!!";
    }

}
