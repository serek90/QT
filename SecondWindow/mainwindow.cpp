#include "mainwindow.h"
#include "ui_mainwindow.h"

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
//    SecondWindow secondWindow;
//    secondWindow.setModal(true);
//    secondWindow.exec();
    hide(); // hide current window
    secondWindow = new SecondWindow(this);
    secondWindow->setWindowTitle("Second Window");
    secondWindow->show();

}
