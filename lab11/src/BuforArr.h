//
// Created by student on 18.12.2023.
//

#ifndef LAB11_BUFORARR_H
#define LAB11_BUFORARR_H


#include <memory>
#include "Bufor.h"

class BuforArr : public Bufor {
private:
    std::unique_ptr<int[]> tablica;
    int currentIndex = 0;
    int size;
public:
    BuforArr(int n);

    void add(int a) override;

    void write() override;

    int getCurrentIndex() const;

    int getSize() const;
};




#endif //LAB11_BUFORARR_H
