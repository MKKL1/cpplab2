//
// Created by student on 09.10.2023.
//

#ifndef CPPLAB1_PERSON_H
#define CPPLAB1_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    string surname;
    int age;
public:
    Person(string name, string surname, int age);
    Person();
    void setAge(int age);
    string getSurname();
    bool is_18();
    void showInfoPerson();
};

#endif //CPPLAB1_PERSON_H
