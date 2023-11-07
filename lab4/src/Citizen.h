//
// Created by krystian on 07.11.2023.
//

#ifndef LAB4_CITIZEN_H
#define LAB4_CITIZEN_H

#include <iostream>

using namespace std;
class Citizen {
private:
    string name, surname, postal_code;
    int age;
    char sex;
public:
    Citizen();
    Citizen(const string &name, const string &surname, const string &postalCode, int age, char sex);
    void show() const;

    const string &getName() const;
    const string &getSurname() const;
    const string &getPostalCode() const;
    int getAge() const;
    char getSex() const;
};


#endif //LAB4_CITIZEN_H
