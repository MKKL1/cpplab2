//
// Created by student on 16.10.2023.
//
#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"

using namespace std;

void whoWorkMoreThan5Years(Employee** pEmployee, int n) {
    cout << "Kto pracuje wiecej niz 5 lat: ";
    for (int i = 0; i < n; ++i) {
        Employee* e = pEmployee[i];
        if(e->getExperience() > 5) cout << e->getSurname() << ", ";
    }
    cout << endl;
}

//void whoWorkMoreThan5Years(Employee** pEmployee, int n) {
//    cout << "Kto pracuje wiecej niz 5 lat: ";
//    int sum = 0;
//    for (int i = 0; i < n; ++i) {
//        sum += pEmployee[i]->calculateSalary();
//    }
//    cout << endl;
//}

int main() {
//    Figure* tab[3];
//    tab[0] = new Square(4);
//    tab[1] = new Square(2);
//    tab[2] = new Circle(5);
//
//    for(int i = 0; i < 3; i++) {
//        tab[i]->calculateArea();
//        delete tab[i];
//    }

    int n = 4;
    Employee** employeeTab = new Employee *[n];
    employeeTab[0] = new Developer("kowalski", 23, 6, 21321);
    employeeTab[1] = new Developer("kowalski1", 26, 5, 20213);
    employeeTab[2] = new TeamLeader("kowalski2", 22, 4, 54123);
    employeeTab[3] = new TeamLeader("kowalski3", 29, 7, 35232);
    whoWorkMoreThan5Years(employeeTab, n);
    for (int i = 0; i < n; ++i) {
        delete employeeTab[i];
    }
    delete [] employeeTab;
}