//
// Created by student on 09.10.2023.
//

#include "Student.h"

Student::Student(string name, string surname, int age, string index) : Person(name, surname, age),
                                                                                            index(index) {}
void Student::setIndex(string newIndex) {
    index = newIndex;//TODO zleee ale zostanie bo mi sie nie chce
}

string Student::getIndex() {
    return index;
}

void Student::showInfoStudent() {
    showInfoPerson();
    cout << "Index " << index << endl;
}

Student::Student() {

}

void Student::init(string name, string surname, int age, string index) {
    Person::init(name,surname,age);
    this->index=index;
}
