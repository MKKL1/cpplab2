//
// Created by krystian on 23.10.2023.
//

#ifndef CPPLAB2_MAXBUFOR_H
#define CPPLAB2_MAXBUFOR_H



#include "Bufor.h"

class MaxBufor : public Bufor {

public:
    MaxBufor();
    MaxBufor(int s);
    double calculate() override;

};


#endif //CPPLAB2_MAXBUFOR_H
