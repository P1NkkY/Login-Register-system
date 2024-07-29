#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_logIn_clicked()
{
    QString userLogin = ui->lineEditLogin->text();
    QString userPassword = ui->lineEditPassword->text();

    if (userLogin.isEmpty() || userPassword.isEmpty()) {
        qDebug() << "Something is empty";
        return;
    }

    if (DataBase::getInstance().userFromDatabase(userLogin, userPassword)) {
        qDebug() << "Welcome!";
    }
    else {
        qDebug() << "No current user";
    }
}

void MainWindow::on_signUp_clicked()
{
    QString userLogin = ui->lineEditLogin->text();
    QString userPassword = ui->lineEditPassword->text();

    if (userLogin.isEmpty() || userPassword.isEmpty()) {
        qDebug() << "Something is empty";
        return;
    }

    User* user = new Authorization(userLogin, userPassword);
    if (!user->getCorrectUser()) {
        qDebug() << "Login or password verification failed";
        delete user;
    }
    else {
        qDebug() << "User created";
        DataBase::getInstance().addUser(*user);
    }
}
