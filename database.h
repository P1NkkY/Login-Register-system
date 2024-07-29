#ifndef DATABASE_H
#define DATABASE_H
#include <QHash>
#include <QString>
#include <QDebug>
#include "user.h"

class DataBase
{
public:
    /** @brief getInstance - instance of Database (singleton) */
    static DataBase &getInstance();

    /**
     * @brief userFromDatabase - cheks if the user in repo and  has
     * correct login and password
     * @param login - entered login
     * @param password - entered password
     * @return true/false
     */
    bool userFromDatabase(const QString &login, const QString &password);

    /**
     * @brief addUser - adds user to database
     * @param user - class user with login password
     */
    void addUser(const User &user);

private:
    /** @brief constructor */
    DataBase() {};
    /** @brief copy constructor */
    DataBase(const DataBase&) = delete;
    /** @brief operator = */
    DataBase& operator= (const DataBase&) = delete;

private:
    QHash <QString, QString> repo;      //!< database
};

#endif // DATABASE_H
