#ifndef ENTRUSTINFORMATION_H_INCLUDED
#define ENTRUSTINFORMATION_H_INCLUDED

#include <string>

class EntrustInformation {
public:
    string title;
    string description;
    int subjectNeedHelp;
    int needAge;
    int needGender;
    int needProfession;
    int selfLevel;
    EntrustInformation get();
    void set(string t,string d,int s,int a,int g,int p,int l);
};

#endif // ENTRUSTINFORMATION_H_INCLUDED
