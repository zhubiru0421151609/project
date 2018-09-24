#ifndef VISITOR_H
#define VISITOR_H

#include <string>
#include "User.h"

class Visitor::public User {
public:
    void Visitor();
    void ViewEntrustinfo();
    void ViewChattingRoomList();
    string ViewRecommendation();
};

#endif
