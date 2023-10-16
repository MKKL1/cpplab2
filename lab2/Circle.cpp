//
// Created by student on 16.10.2023.
//

#include "Circle.h"
#include <math.h>

Circle::Circle(float r1):Figure() {
    r = r1;
    cout<<"Konstruktor klasy Circle"<<endl;
}

Circle::~Circle() {
    cout<<"Destruktor klasy Circle"<<endl;
}

void Circle::calculateArea() {
    setArea(r*r*M_PI);
}

void Circle::show() {
    cout << "Pole koła " << getArea() << endl;
}