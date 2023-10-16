//
// Created by student on 16.10.2023.
//

#include <iostream>
#include "Figure.h"

using namespace std;

Figure::Figure() {
    cout << "Konstruktor klasy bazowej Figure" << endl;
}

Figure::~Figure() {
    cout << "Wirtualny destruktor klasy bazowej Figure" << endl;
}

float Figure::getArea() {
    return area;
}

void Figure::setArea(float area1) {
    area = area1;
}
