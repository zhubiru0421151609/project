#include <string>
#include "ChattingRoomInfo.h"

ChattingRoomInfo::ChattingRoomInfo() {
    this->topic = "";
};

ChattingRoomInfo ChattingRoomInfo::get() {
    return *this;
};

void ChattingRoomInfo::set(string topic, VIP u1, VIP u2) {
    this->topic = topic;
    this->user1 = u1;
    this->user2 = u2;
};
