#ifndef VISITOR_H
#define VISITOR_H

#include <string>
#include "User.h"

class Visitor::public User {
public:
    Visitor();
    void ViewEntrustInfo();
    void ViewChattingRoomList();
    string ViewRecommendation();
};

#endif
