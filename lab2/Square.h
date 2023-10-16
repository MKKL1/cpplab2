//
// Created by student on 16.10.2023.
//

#ifndef CPPLAB2_SQUARE_H
#define CPPLAB2_SQUARE_H


#include "Figure.h"
#include <iostream>
using namespace std;

class Square : public Figure{
private:
    float a;
public:
    Square(float a1);
    ~Square();
    virtual void calculateArea() override;
};


#endif //CPPLAB2_SQUARE_H
