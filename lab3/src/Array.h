//
// Created by student on 23.10.2023.
//

#ifndef LAB3_ARRAY_H
#define LAB3_ARRAY_H

#include <iostream>
#include <algorithm>

template<typename T>
class Array {
private:
    T *tab;
    int maxsize;
    int size;
public:
    Array(int maxsize = 10);

    ~Array() {
        delete[] tab;
    }

    void sort();

    T max();

    void show();

    void append(T value);

    T get(int index);
};

template<typename T>
Array<T>::Array(int maxsize) : maxsize(maxsize) {
    tab = new T[maxsize];
    size = 0;
}

template<typename T>
void Array<T>::sort() {
    std::sort(tab, tab + size);
}

template<typename T>
T Array<T>::max() {
    return std::max_element(tab, tab + size);
}

template<typename T>
void Array<T>::show() {
    std::cout << "Array: [";
    for (int i = 0; i < size; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << "]" << std::endl;
}

template<typename T>
void Array<T>::append(T value) {
    tab[size] = value;
    size++;
}

template<typename T>
T Array<T>::get(int index) {
    return tab[index];
}

template<>
void Array<std::string>::sort() {
    std::sort(tab, tab + size, [](const std::string &a, const std::string &b) {
        return a.length() < b.length();
    });
}

template<>
std::string Array<std::string>::max() {
    return *std::max_element(tab, tab + size,
                            [](const std::string &a, const std::string &b) {
                                return a.length() < b.length();
                            });
}

#endif //LAB3_ARRAY_H
