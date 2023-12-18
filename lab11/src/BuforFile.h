//
// Created by student on 18.12.2023.
//

#ifndef LAB11_BUFORFILE_H
#define LAB11_BUFORFILE_H


#include <string>
#include "Bufor.h"

class BuforFile : public Bufor {
    std::string path;
public:
    explicit BuforFile(const std::string &path);

    void add(int a) override;

    void write() override;
};


#endif //LAB11_BUFORFILE_H
