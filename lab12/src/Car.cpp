//
// Created by student on 08.01.2024.
//

#include "Car.h"

Car::Car(const string &model, int rokProdukcji, double pojemnoscSilnika) : model(model), rokProdukcji(rokProdukcji),
                                                                           pojemnoscSilnika(pojemnoscSilnika) {}

const string &Car::getModel() const {
    return model;
}

void Car::setModel(const string &model) {
    Car::model = model;
}

int Car::getRokProdukcji() const {
    return rokProdukcji;
}

void Car::setRokProdukcji(int rokProdukcji) {
    Car::rokProdukcji = rokProdukcji;
}

double Car::getPojemnoscSilnika() const {
    return pojemnoscSilnika;
}

void Car::setPojemnoscSilnika(double pojemnoscSilnika) {
    Car::pojemnoscSilnika = pojemnoscSilnika;
}

void Car::show() const{
    cout << "model: " << model << " rok: " << rokProdukcji << " pojemnosc: " << pojemnoscSilnika << endl;
}
