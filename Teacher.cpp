//
// Created by student on 09.10.2023.
//

#include "Teacher.h"

Teacher::Teacher(string name, string surname, int age, int experience, string title)
: Person(name, surname, age)
{
    this->experience=experience;
    this->title=title;
    cout << "Konstruktor klasy pochodnej Teacher" << endl;
}

Teacher::Teacher() {
    cout << "Konstruktor bazowy klasy pochodnej Teacher" << endl;
}

void Teacher::setTitle(string title) {
    this->title=title;
}

int Teacher::getExperience() {
    return experience;
}

bool Teacher::is_Phd() {
    return title=="Phd";
}

void Teacher::showInfoTeacher() {
    showInfoPerson();
    cout<<"Staz pracy: "<<experience<<" tytul naukowy: "<<title<<endl;
}


