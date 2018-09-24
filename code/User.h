#ifndef USER_H
#define USER_H 

#include <string>
#include "UserBasicInformation.h"

class User {
public:
    UserBasicInformation basicinfo;
    int UID;
    int status;
    User();
    User(UserBasicInformation information, int id, int status);
    void Login();
    void Register(UserBasicInformation information);
    void Logout();
};

#endif
