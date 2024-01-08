//
// Created by student on 08.01.2024.
//

#ifndef LAB12_CAR_H
#define LAB12_CAR_H

#include <iostream>
using namespace std;

class Car {
    std::string model;
    int rokProdukcji{};
    double pojemnoscSilnika{};
public:
    Car() = default;
    Car(const string &model, int rokProdukcji, double pojemnoscSilnika);

    const string &getModel() const;

    void setModel(const string &model);

    int getRokProdukcji() const;

    void setRokProdukcji(int rokProdukcji);

    double getPojemnoscSilnika() const;

    void setPojemnoscSilnika(double pojemnoscSilnika);

    void show() const;
};


#endif //LAB12_CAR_H
