//
// Created by student on 16.10.2023.
//

#ifndef LAB2_DEVELOPER_H
#define LAB2_DEVELOPER_H


#include "Employee.h"
#include <iostream>

using namespace std;
class Developer: public Employee {
public:
    Developer(string surname, int age, int experience, float salary);
    Developer();
    float calculateBonus(int value);
    virtual int calculateSalary(int value) override;
    virtual void show() override;
};


#endif //LAB2_DEVELOPER_H
