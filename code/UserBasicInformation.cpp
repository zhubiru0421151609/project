#include <string>
#include "UserBasicInformation.h"

UserBasicInformation UserBasicInformation::get() {
    return *this;
};

UserBasicInformation::UserBasicInformation() {
    this->username ="";
    this->password = "";
    this->mailbox = "";
    this->telephone = "";
    this->gender = "";
    this->nation = "";
    this->age = "";
    this->native_language = "";
    this->interested_language = "";
    this->id_card_number = "";
};

UserBasicInformatino::UserBasicInformation(string name, string pwd, string mail, string tele, string gen, string nation, string age) {
    this->username = name;
    this->password = pwd;
    this->mailbox = mail;
    this->telephone = tele;
    this->gender = gen;
    this->nation = nation;
    this->age = age;
    this->native_language = "";
    this->interested_language = "";
    this->id_card_number = "";
};

void UserBasicInformation::set(string name, string pwd, string mail, string tele, string gen, string nation, string age) {
    this->username = name;
    this->password = pwd;
    this->mailbox = mail;
    this->telephone = tele;
    this->gender = gen;
    this->nation = nation;
    this->age = age;
    this->native_language = ""
    this->interested_language = "";
    this->id_card_number = "";
};

void UserBasicInformation::setIdCardNumber(string id) {
    this->id_card_number = id;
}

void UserBasicInformation::setLanguage(string native, string interested) {
    this->native_language = native;
    this->interested_language = interested;
}
