#include <iostream>
#include <limits>
#include "Adding.h"
#include "Student.h"

using namespace std;

template <typename T>
void showAll(T* tab[], int n) {
    for (int i = 0; i < n; ++i) {
        tab[i]->show();
    }
}

template <typename T>
void checkType(T a) {
    T val = numeric_limits<T>::max();
    cout << val << endl;
}

int main() {
//    Adding<int> a1(5);
//    a1.add(6);
//    a1.show();
//
//    Adding<string> a2("Hello ");
//    a2.add("world!");
//    a2.show();

//    Student<float> s(5,"Ala");
//    s.showMark();
//    Student<int> s1(5,"Ala");
//    s1.showMark();
//    Student<string> s2(5,"Ala");
//    s2.showMark();

    Adding<int>* arrAdd[3];
    for (int i = 0; i < 3; ++i) {
        arrAdd[i] = new Adding<int>(i);
    }

    showAll(arrAdd, 3);

    Student<string>* arrStudent[3];
    for (int i = 0; i < 3; ++i) {
        arrStudent[i] = new Student<string>(i+2, "Ola");
    }
    showAll(arrStudent, 3);

    for (int i = 0; i < 3; ++i) {
        delete arrAdd[i];
        delete arrStudent[i];
    }

    checkType(3);
}