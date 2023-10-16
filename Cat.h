//
// Created by krystian on 16.10.2023.
//

#ifndef CPPLAB1_CAT_H
#define CPPLAB1_CAT_H


#include "Animal.h"

class Cat: public Animal{
private:
    int levelOfMouseHunting;
    int mice[5];
public:
    Cat(int limbNr, string name, bool isProtected);
    Cat();

    void initMice(int* mouses);
    void setLevelOfMouseHunting(int value);
    int getLevelOfMouseHunting();
    int getMice(int index);

    void getVoice();
    void info();
};


#endif //CPPLAB1_CAT_H
