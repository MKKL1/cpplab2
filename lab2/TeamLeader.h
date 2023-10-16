//
// Created by student on 16.10.2023.
//

#ifndef LAB2_TEAMLEADER_H
#define LAB2_TEAMLEADER_H


#include "Employee.h"
#include <iostream>

using namespace std;

class TeamLeader: public Employee {
public:
    TeamLeader(string surname, int age, int experience, float salary);
    TeamLeader();
    float calculateBonus(int value);
    virtual int calculateSalary(int value) override;
    virtual void show() override;
};


#endif //LAB2_TEAMLEADER_H
