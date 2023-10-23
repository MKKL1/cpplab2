//
// Created by krystian on 23.10.2023.
//

#ifndef CPPLAB2_MEANBUFOR_H
#define CPPLAB2_MEANBUFOR_H


#include "Bufor.h"

class MeanBufor: public Bufor {

public:
    MeanBufor();
    MeanBufor(int s);
    double calculate() override;

};


#endif //CPPLAB2_MEANBUFOR_H
