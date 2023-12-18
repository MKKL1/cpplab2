//
// Created by student on 18.12.2023.
//

#ifndef LAB11_ELEM_H
#define LAB11_ELEM_H

#include <memory>
#include <iostream>

class Elem {
public:
    std::shared_ptr<Elem> next;
    std::weak_ptr<Elem> prev;
    ~Elem() {
        std::cout << "Destruktor Elem" << std::endl;
    }
};

#endif //LAB11_ELEM_H
