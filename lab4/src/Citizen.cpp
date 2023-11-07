//
// Created by krystian on 07.11.2023.
//

#include "Citizen.h"
using namespace std;

Citizen::Citizen() {}

Citizen::Citizen(const string &name,
                 const string &surname,
                 const string &postalCode,
                 int age,
                 char sex):
                name(name),
                surname(surname),
                postal_code(postalCode),
                age(age),
                sex(sex) {}

void Citizen::show() const {
    cout << "Name: " << name << ", Surname: " << surname << ", Postal Code: " << postal_code << ", Age: " << age << ", Sex: " << sex << endl;
}

const string &Citizen::getName() const {
    return name;
}

const string &Citizen::getSurname() const {
    return surname;
}

const string &Citizen::getPostalCode() const {
    return postal_code;
}

int Citizen::getAge() const {
    return age;
}

char Citizen::getSex() const {
    return sex;
}
