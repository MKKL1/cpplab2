//
// Created by student on 16.10.2023.
//

#include "Square.h"

Square::Square(float a1):Figure() {
    a = a1;
    cout<<"Konstruktor klasy Square"<<endl;
}

Square::~Square() {
    cout<<"Destruktor klasy Square"<<endl;
}

void Square::calculateArea() {
    setArea(a*a);
}
