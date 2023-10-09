//
// Created by student on 09.10.2023.
//
#include "Person.h"

Person::Person(string name, string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
    cout << "Konstruktor Person" << endl;
}

Person::Person() {
    cout << "Konstruktor domyslny Person" << endl;
}

void Person::setAge(int age) {
    this->age = age;
}

string Person::getSurname() {
    return surname;
}

bool Person::is_18() {
    return age >= 18;
}

void Person::showInfoPerson() {
    cout << "Imie: " << name << "nazwisko" << surname << "wiek: " << age << endl;
}

