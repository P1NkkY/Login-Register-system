/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_login;
    QLineEdit *lineEditLogin;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_password;
    QLineEdit *lineEditPassword;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *logIn;
    QPushButton *signUp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(300, 350);
        MainWindow->setMinimumSize(QSize(300, 350));
        MainWindow->setMaximumSize(QSize(300, 350));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(228, 255, 239);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 40, 300, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 70, 152, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_login = new QLabel(widget);
        label_login->setObjectName(QString::fromUtf8("label_login"));
        label_login->setMinimumSize(QSize(150, 21));
        label_login->setMaximumSize(QSize(150, 1));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(14);
        label_login->setFont(font1);
        label_login->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_login);

        lineEditLogin = new QLineEdit(widget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setMinimumSize(QSize(150, 21));
        lineEditLogin->setMaximumSize(QSize(150, 21));
        lineEditLogin->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 239, 255);"));

        verticalLayout->addWidget(lineEditLogin);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(80, 130, 152, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_password = new QLabel(verticalLayoutWidget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setMinimumSize(QSize(150, 21));
        label_password->setMaximumSize(QSize(150, 21));
        label_password->setFont(font1);
        label_password->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout_3->addWidget(label_password);

        lineEditPassword = new QLineEdit(verticalLayoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setMinimumSize(QSize(150, 21));
        lineEditPassword->setMaximumSize(QSize(150, 21));
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 239, 255);"));

        verticalLayout_3->addWidget(lineEditPassword);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(100, 200, 103, 70));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        logIn = new QPushButton(widget1);
        logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->setMinimumSize(QSize(101, 31));
        logIn->setMaximumSize(QSize(101, 31));
        logIn->setStyleSheet(QString::fromUtf8("\n"
"  width: 200px;\n"
"  height: 40px;\n"
"  line-height: 40px;\n"
"  font-size: 18px;\n"
"  font-family: sans-serif;\n"
"  color: #333;\n"
"\n"
"	background-color: rgb(244, 239, 255);"));

        verticalLayout_4->addWidget(logIn);

        signUp = new QPushButton(widget1);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->setMinimumSize(QSize(101, 31));
        signUp->setMaximumSize(QSize(101, 31));
        signUp->setStyleSheet(QString::fromUtf8("\n"
"  width: 200px;\n"
"  height: 40px;\n"
"  line-height: 40px;\n"
"  font-size: 18px;\n"
"  font-family: sans-serif;\n"
"  color: #333;\n"
"\n"
"	background-color: rgb(244, 239, 255);"));

        verticalLayout_4->addWidget(signUp);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Log in", nullptr));
        label_login->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label_password->setText(QApplication::translate("MainWindow", "Password", nullptr));
        logIn->setText(QApplication::translate("MainWindow", "Log in", nullptr));
        signUp->setText(QApplication::translate("MainWindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
