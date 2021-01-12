#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

//#define VER1
//#define VER2

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap picture("C:/Users/PC/Documents/GitHub/QT/simpleLoginApp/klodka.jpg");
    int width = ui->label_picture->width();
    int height  = ui->label_picture->height();
    ui->label_picture->setPixmap(picture.scaled(width, height, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "1234")
    {
//VER1        QMessageBox::information(this, "Login", "Login and passwor is correct!");
//VER1        secondWindow = new SecondWindow(this);
//VER1        secondWindow->show();
//VER1        hide();
        ui->statusBar->showMessage("Password is correct", 4000);

    }
    else
    {
//VER1        QMessageBox::warning(this, "Login", "Login is incorrect. Try again");
        ui->statusBar->showMessage("Password is incorrect", 4000);

    }
}
