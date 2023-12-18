//
// Created by student on 18.12.2023.
//

#include <stdexcept>
#include <iostream>
#include "BuforArr.h"

void BuforArr::add(int a) {
    if(currentIndex >= size) throw std::overflow_error("currentIndex >= size");
    tablica[currentIndex] = a;
    currentIndex++;
}

void BuforArr::write() {
    for(int j = 0; j < currentIndex; j++) {
        std::cout << tablica[j] << " ";
    }
    std::cout << std::endl;
}

BuforArr::BuforArr(int n) {
    tablica = std::unique_ptr<int[]>(new int[n]);
    size = n;
}

int BuforArr::getCurrentIndex() const {
    return currentIndex;
}

int BuforArr::getSize() const {
    return size;
}
