//
// Created by student on 09.10.2023.
//

#ifndef CPPLAB1_TEACHER_H
#define CPPLAB1_TEACHER_H


#include "Person.h"

class Teacher: public Person{
private:
    int experience;
    string title;
public:
    Teacher(string name, string surname, int age, int experience, string title);
    Teacher();
    void setTitle(string title);
    int getExperience();
    bool is_Phd();
    void showInfoTeacher();
};


#endif //CPPLAB1_TEACHER_H
