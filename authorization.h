#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H
#include "user.h"

class Authorization : public User
{
public:
    /** @brief constructor */
    Authorization(const QString &login, const QString &password);
    /** @brief destructor */
    ~Authorization() { qDebug() << "~Authorization";};

private:
    /**
     * @brief isCorrectLogin - cheks correctness of the login
     * Verification (you can add your own cheks):
     * 1) if login has spaces - return false;
     * @return true/false
     */
    bool isCorrectLogin();

    /**
     * @brief isCorrectPassword - cheks correctness of the password
     * Verification (you can add your own cheks):
     * 1) If password has length <= 8 symbols - return false;
     * @return true/false
     */
    bool isCorrectPassword();
};


#endif // AUTHORIZATION_H
