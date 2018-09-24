#include <string>
#include "Visitor.h"

void Visitor::ViewEntrustInfo() {
    for (auto EntrustInfo: EntrustInfos) {
        view(EntrustInfo);
    }
};

void Visitor::ViewChattingRoomList() {
    for (auto ChattingRoom: ChattingRooms) {
        view(ChattingRoom);
    }
}

string Visitor::ViewRecommendation() {
    view(select(ChattingRooms));
}
