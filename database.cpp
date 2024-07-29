#include "database.h"

DataBase &DataBase::getInstance()
{
    static DataBase instance;
    return instance;
}

bool DataBase::userFromDatabase(const QString &login, const QString &password)
{
    if (repo.find(login) != repo.end() && repo.value(login) == password)
        return true;

    return false;
}

void DataBase::addUser(const User &user)
{
        repo[user.getLogin()] = user.getPassword();
}

