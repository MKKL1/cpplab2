//
// Created by student on 18.12.2023.
//

#ifndef LAB11_PERSON_H
#define LAB11_PERSON_H
#include <iostream>
using namespace std;
class Person {
    string name;
    int age;
public:
    Person(const string &name, int age) : name(name), age(age) {}
    void info() const {
        cout << name << endl;
    }
};
#endif //LAB11_PERSON_H
