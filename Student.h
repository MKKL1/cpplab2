//
// Created by student on 09.10.2023.
//

#ifndef CPPLAB1_STUDENT_H
#define CPPLAB1_STUDENT_H


#include "Person.h"

class Student : Person{
private:
    string index;
public:
    Student(string name, string surname, int age, string index);

    void setIndex(string newIndex);
    void init(string name, string surname, int age, string index);

    string getIndex();

    void showInfoStudent();

    Student();
};


#endif //CPPLAB1_STUDENT_H
