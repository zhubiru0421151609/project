#ifndef MEMBERSHIP_INFO_H
#define MEMBERSHIP_INFO_H

#include <string>

class MembershipInfo {
public:
    int leftTime;
    int type;
    MembershipInfo get();
    void set(int time, int type);
}

#endif
