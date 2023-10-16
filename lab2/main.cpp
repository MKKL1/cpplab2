//
// Created by student on 16.10.2023.
//
#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main() {
    Figure* f1 = new Square(4);
    Figure* f2 = new Circle(2);
    f1->calculateArea();
    f1->show();

    f2->calculateArea();
    f2->show();

    delete f1;
    delete f2;
}