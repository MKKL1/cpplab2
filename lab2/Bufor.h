//
// Created by krystian on 23.10.2023.
//

#ifndef CPPLAB2_BUFOR_H
#define CPPLAB2_BUFOR_H

class Bufor {
protected:
    int* array;
    int size;
    int first;
public:
    Bufor();
    Bufor(int s);
    ~Bufor();
    virtual void add(int value);
    virtual double calculate() = 0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirst();
    void setFirst(int value);
    void setTab(int pos, int value);
    void show();
};


#endif //CPPLAB2_BUFOR_H
