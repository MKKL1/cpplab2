//
// Created by student on 16.10.2023.
//

#ifndef CPPLAB2_FIGURE_H
#define CPPLAB2_FIGURE_H


class Figure {
private:
    float area;
public:
    Figure();

    virtual ~Figure();

    float getArea();

    void setArea(float area1);

    virtual void calculateArea() = 0;

    virtual void show() = 0;
};


#endif //CPPLAB2_FIGURE_H
