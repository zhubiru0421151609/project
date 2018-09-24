void VIP::askForHelp(EntrustInfo info) {
    send(info);
};

void VIP::applyChattingRoom() {
    ChattingRoomInfo room;
    room.user1 = *this;
    addChattingRoom(room);
};

void VIP::sendMessages(string msg) {
    send(msg);
};

void VIP::askQuestions(string msg) {
    send(msg);
};

void VIP::answerQuestions(string msg) {
    send(msg);
};

void VIP::viewEntrustInfo() {
    for (auto info: EntrustInfoList) {
        view(info);
    }
};
