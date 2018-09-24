#include <string>
#include "Visitor.h"

void Visitor::ViewEntrustInfo() {
    for (auto info: EntrustInfoList) {
        view(info);
    }
};

void Visitor::ViewChattingRoomList() {
    for (auto room: ChattingRoomList) {
        view(room);
    }
};

string Visitor::ViewRecommendation() {
    view(select(ChattingRoomList));
};
