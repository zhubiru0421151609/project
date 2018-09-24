#include "VIP.h"

MembershipInfo MembershipInfo::get() {
    return *this;
}

void MembershipInfo::set(int time, int type) {
    this->leftTime = time;
    this->type = type;
}
