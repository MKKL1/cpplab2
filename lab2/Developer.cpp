//
// Created by student on 16.10.2023.
//

#include "Developer.h"

float Developer::calculateBonus(int value) {
    return value+0.2*value*(getSalary()+getExperience());
}

void Developer::show() {
    cout << "Jestem Team Leader z " << getExperience() << " letnim doswiadczeniem" << endl;
}

Developer::Developer(string surname, int age, int experience, float salary) : Employee(surname, age, experience,
                                                                                       salary) {

}

Developer::Developer() {

}

int Developer::calculateSalary(int value) {
    return calculateBonus(value) + getSalary();
}
