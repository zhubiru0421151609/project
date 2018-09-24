#include <string>
#include "User.h"

class VIP: public User {
public:
    Vip();
    MembershipInfo membership;
    void askForHelp(EntrustInfo info);
    void applyChattingRoom();
    void sendMessages(string msg);
    void askQuestions(string msg);
    void answerQuestions(string msg);
    void viewEntrustInfo();
}

#endif
