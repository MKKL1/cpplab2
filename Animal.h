//
// Created by student on 09.10.2023.
//

#ifndef CPPLAB1_ANIMAL_H
#define CPPLAB1_ANIMAL_H

#include <string>

using namespace std;

class Animal {
private:
    int limbNr;
    string nazwa;
    bool animalProtected;
public:
    Animal();

    Animal(int limbNr, const string &nazwa, bool animalProtected);
    void giveVoice();
};


#endif //CPPLAB1_ANIMAL_H
