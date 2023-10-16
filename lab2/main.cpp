//
// Created by student on 16.10.2023.
//
#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

int main() {
    Figure* tab[3];
    tab[0] = new Square(4);
    tab[1] = new Square(2);
    tab[2] = new Circle(5);

    for(int i = 0; i < 3; i++) {
        tab[i]->calculateArea();
        delete tab[i];
    }
}