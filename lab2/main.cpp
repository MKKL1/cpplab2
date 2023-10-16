//
// Created by student on 16.10.2023.
//
#include <iostream>
using namespace std;
class Parent {

public:
    virtual void show() {
        cout << "Metoda wirtualna Parent" << endl;
    }
};

class Child : public Parent {

public:
    virtual void show() override {
        cout << "Metoda wirtualna Child" << endl;
    }
};

int main() {
    //typ statyczny Parent, typ dynamiczny Child
    Parent *p = new Child();
    //metoda show z klasy Child
    p->show();
    //typ statyczny Child, typ dynamiczny Child
    Child *c = new Child();
    //metoda show z klasy Child
    c->show();

}