//
// Created by student on 16.10.2023.
//

#ifndef LAB2_EMPLOYEE_H
#define LAB2_EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    string surname;
    int age;
    int experience;
    float salary; //Simplifying into float
public:
    Employee(string surname, int age, int experience, float salary);
    Employee();
    virtual ~Employee();
    virtual void show();
    virtual int calculateSalary(int value) = 0;
    int ageEmployment() {
        return age-experience;
    }

    string getSurname() {
        return surname;
    }

    int getAge() {
        return age;
    }

    int getExperience() {
        return experience;
    }

    float getSalary() {
        return salary;
    }
};


#endif //LAB2_EMPLOYEE_H
