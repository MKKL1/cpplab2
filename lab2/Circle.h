//
// Created by student on 16.10.2023.
//

#ifndef CPPLAB2_CIRCLE_H
#define CPPLAB2_CIRCLE_H


#include "Figure.h"
#include <iostream>

using namespace std;

class Circle: public Figure{
private:
    float r;
public:
    Circle(float r1);
    ~Circle();
    virtual void calculateArea() override;
};


#endif //CPPLAB2_CIRCLE_H
