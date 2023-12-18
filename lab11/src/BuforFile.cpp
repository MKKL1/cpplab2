//
// Created by student on 18.12.2023.
//

#include <fstream>
#include <iostream>
#include "BuforFile.h"

void BuforFile::add(int a) {
    std::ofstream file(path);
    if(!file.is_open())
        throw std::runtime_error(path + " file not open");
    file << a;
    file.close();
}

void BuforFile::write() {
    std::ifstream file(path);
    if(!file.is_open())
        throw std::runtime_error(path + " file not open");
    while(!file.eof()) {
        int a;
        file >> a;
        std::cout << a << " ";
    }
    std::cout << std::endl;
    file.close();
}

BuforFile::BuforFile(const std::string &path) : path(path) {}
