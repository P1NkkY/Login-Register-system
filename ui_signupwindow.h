/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signUp
{
public:
    QPushButton *logIn;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *logInFormSign;
    QPushButton *signUpFormSign;
    QLineEdit *lineEdit;

    void setupUi(QDialog *signUp)
    {
        if (signUp->objectName().isEmpty())
            signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->resize(658, 520);
        logIn = new QPushButton(signUp);
        logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->setGeometry(QRect(250, 320, 80, 21));
        label = new QLabel(signUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 180, 91, 21));
        lineEdit_2 = new QLineEdit(signUp);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(210, 290, 113, 21));
        horizontalLayoutWidget = new QWidget(signUp);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 209, 180, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        logInFormSign = new QPushButton(horizontalLayoutWidget);
        logInFormSign->setObjectName(QString::fromUtf8("logInFormSign"));

        horizontalLayout_2->addWidget(logInFormSign);

        signUpFormSign = new QPushButton(horizontalLayoutWidget);
        signUpFormSign->setObjectName(QString::fromUtf8("signUpFormSign"));

        horizontalLayout_2->addWidget(signUpFormSign);

        lineEdit = new QLineEdit(signUp);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 260, 113, 21));

        retranslateUi(signUp);

        QMetaObject::connectSlotsByName(signUp);
    } // setupUi

    void retranslateUi(QDialog *signUp)
    {
        signUp->setWindowTitle(QApplication::translate("signUp", "Dialog", nullptr));
        logIn->setText(QApplication::translate("signUp", "Log in", nullptr));
        label->setText(QApplication::translate("signUp", "Sign up form", nullptr));
        logInFormSign->setText(QApplication::translate("signUp", "Log in", nullptr));
        signUpFormSign->setText(QApplication::translate("signUp", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUp: public Ui_signUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
