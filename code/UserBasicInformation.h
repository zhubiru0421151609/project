#ifndef USER_BASIC_INFORMATION_H
#define USER_BASIC_INFORMATION_H

#include <string>

class UserBasicInformation {
public:
    string username;
    string gender;
    string native_language;
    string interested_language;
    string nation;
    int age;
    UserBasicInformation get();
    UserBasicInformation();
    UserBasicInformation(string name, string pwd, string mail, string tele, string gen, string nation, string age);
    void setIdCardNumber(string id);
    void setLanguage(string native, string interested);
    void set(string name, string pwd, string mail, string tele, string gen, string nation, string age);
private:
    string password;
    string mailbox;
    string telephone;
    string id_card_number;
};

#endif
