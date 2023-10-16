//
// Created by krystian on 16.10.2023.
//

#ifndef CPPLAB1_DOG_H
#define CPPLAB1_DOG_H


#include "Animal.h"

class Dog : public Animal {
private:
    string breed;
    int levelOfGuideSkills;
    int levelOfTrackerSkills;
public:
    Dog(int limbNr, string name, bool isProtected, string brd, int logs, int lots);
    Dog(int limbNr, string name, bool isProtected);
    Dog();

    void setSkillLevel(int type, int value);
    int getSkillLevel(int type);
    void giveVoice();
    void info();
};


#endif //CPPLAB1_DOG_H
