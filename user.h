#ifndef USER_H
#define USER_H
#include <QString>
#include <QDebug>

class User
{
public:
    /** @brief constructor */
    User(const QString &_login, const QString &_password)
        : login(_login), password(_password), correctUser(false) { qDebug() << "User constructor"; };
    /** @brief destructor */
    virtual ~User() { qDebug() << "~User"; };

    /** @brief getter of login */
    QString getLogin() const { return login; };
    /** @brief getter of password */
    QString getPassword() const { return password; };
    /** @brief getter of correct user */
    bool getCorrectUser() const { return correctUser; };
    /** @brief set correct user true */
    void setCorrectUser() { correctUser = true; };

private:
    QString login;                      //!< Login
    QString password;            //!< Password
    bool correctUser;              //!< true - user is correct; false - user incorrect
};

#endif // USER_H
