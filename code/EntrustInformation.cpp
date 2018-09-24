#include "EntrustInformation.h"

EntrustInformation EntrustInformation::get(){
    return *this;
};

void set(string t,string d,int s,int a,int g,int p,int l){
    this->title = t;
    this->description = d;
    this->subjectNeedHelp = s;
    this->needAge = a;
    this->needGender = g;
    this->needProfession = p;
    this->selfLevel = l;
};
