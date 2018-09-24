#ifndef VERIFIED_USER_H
#define VERIFIED_USER_H


#include <string>
#include "User.h"

class VerifiedUser: public User {
public:
    VerifiedUser();
    void buyMembership(int months);
private:
    int lastMembership;
}

#endif
