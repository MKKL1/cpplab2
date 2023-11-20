//
// Created by student on 20.11.2023.
//

#ifndef LAB6_PERSON_H
#define LAB6_PERSON_H
#include <iostream>

class Person {
public:
    std::string name;
    int age;

    void show() const;
};

void Person::show() const {
    std::cout << "Name: " << name << ", wiek: " << age << std::endl;
}


#endif //LAB6_PERSON_H
