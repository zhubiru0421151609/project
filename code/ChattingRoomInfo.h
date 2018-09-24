#ifndef CHATTING_ROOM_INFO_H
#define CHATTING_ROOM_INFO_H

#include <string>
#include "VIP.h"

class ChattingRoomInfo {
public:
    string topic;
    VIP user1;
    VIP user2;
    ChattingRoomInfo();
    ChattingRoomInfo get();
    void set(string topic, VIP u1, VIP u2);
};

#endif
