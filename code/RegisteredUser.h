#ifndef REGISTERED_USER_H
#define REGISTERED_USER_H


#include <string>
#include "User.h"

class RegisteredUser: public User {
public:
    RegisteredUser();
    EntrustInfo ViewEntrustInfo();
    void ModifyUserInfo();
    void Verify(string name, int id, Picture IDCard);
};

#endif
