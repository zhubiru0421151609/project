#ifndef USER_CPP
#define USER_CPP

#include <string>
#include "User.h"

User::User() {
    this->UID = -1;
    this->status = -1;
};

User::User(UserBasicInformation information, int id, int status) {
    this->basicinfo = information;
    this->UID = id;
    this->status = status;
};

void User::Login() {
    if (UID != -1) 
        this->status = 1;
    else this->status = -1;
};

void User::Register(UserBasicInformation information, int id) {
    this->basicinfo = information;
    this->UID = id;
    status = 0;
};

void User::Logout() {
    if (UID != -1)
        this->status = 0;
    else this->status = -1;
};

#endif
