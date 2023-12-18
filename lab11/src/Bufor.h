//
// Created by student on 18.12.2023.
//

#ifndef LAB11_BUFOR_H
#define LAB11_BUFOR_H


class Bufor {

public:
    Bufor();

    virtual ~Bufor();

    virtual void add(int a) = 0;
    virtual void write() = 0;
};


#endif //LAB11_BUFOR_H
