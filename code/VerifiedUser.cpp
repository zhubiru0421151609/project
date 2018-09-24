#include <string>
#include "VerifiedUser.h"

VerifiedUser::VerifiedUser() {
    this->lastMembership = 0;
};

void VerifiedUser::bugMembership(int months) {
    bool success = moneyShouldPay(months);
    if (success) 
        this->lastMembership += months;
};
