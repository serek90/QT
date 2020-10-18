#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap picture("C:/Users/PC/Documents/GitHub/QT/simpleLoginApp/klodka.jpg");
    ui->label_picture->setPixmap(picture.scaled(200, 200, Qt::KeepAspectRatio));

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
        QMessageBox::information(this, "Login", "Login and passwor is correct!");
        secondWindow = new SecondWindow(this);
        secondWindow->show();
        hide();
    }
    else
    {
        QMessageBox::warning(this, "Login", "Login is incorrect. Try again");
    }
}
