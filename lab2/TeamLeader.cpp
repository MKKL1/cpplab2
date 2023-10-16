//
// Created by student on 16.10.2023.
//

#include "TeamLeader.h"

float TeamLeader::calculateBonus(int value) {
    return value*(1+getSalary()+getExperience());
}

void TeamLeader::show() {
    cout << "Jestem Team Leader z " << getExperience() << " letnim doswiadczeniem" << endl;
}

TeamLeader::TeamLeader(string surname, int age, int experience, float salary) : Employee(surname, age, experience,
                                                                                         salary) {

}

TeamLeader::TeamLeader() {

}

int TeamLeader::calculateSalary(int value) {
    return calculateBonus(value) + getSalary();
}
