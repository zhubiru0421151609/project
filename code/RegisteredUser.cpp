EntrustInfo RegisteredUser::ViewEntrustInfo() {
    for (auto info: EntrustInfoList) {
        view(info);
    }
};

void RegisteredUser::ModifyUserInfo(string name, string pwd, string mail, string tele, string gen, string nation, string age) {
    this->UserBasicInformation.set(string name, string pwd, string mail, string tele, string gen, string nation, string age);
};

void RegisteredUser::Verify(string name, int id, Picture IDCard) {
    if (checkImage(id, IDCard)) {
        this->realName = name;
        this->UserBasicInformation.setID(id);
    } else this->realName = "";
};
