#include "authorization.h"

Authorization::Authorization(const QString &login, const QString &password)
    : User(login, password)
{
    qDebug() << "Authorization constructor";
    if (isCorrectLogin() && isCorrectPassword()) {
        setCorrectUser();
    }
}

bool Authorization::isCorrectLogin()
{
    for (auto &sym : getLogin()) {
        if (sym == ' ')
            return false;
    }

    return true;
}

bool Authorization::isCorrectPassword()
{
    if (getPassword().size() <= 8)
        return false;

    return true;
}
