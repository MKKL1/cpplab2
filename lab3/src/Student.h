//
// Created by student on 23.10.2023.
//

#ifndef LAB3_STUDENT_H
#define LAB3_STUDENT_H
#include <iostream>

using namespace std;

template <typename T>
class Student {
private:
    int mark;
    string name;
public:
    Student(int mark, const string &name) : mark(mark), name(name) {}

    Student() {}

    void show() {
        cout << "imie: " << name << " ocena: " << mark << endl;
    }

    void showMark() {
        cout << mark << endl;
    }

};

template<>
void Student<int>::showMark() {
    cout << "ocena to " << mark << endl;
}


template <>
class Student<string> {
private:
    int mark;
    string name;
public:
    Student(int mark, const string &name) : mark(mark), name(name) {}

    Student() {}

    void show() {
        cout << "imie: " << name << " ocena: " << mark << endl;
    }

    int showMark() {
        string word[6] = {"jedynka", "dwojka", "trojka", "piatka", "szostka"};
        cout << "Twoja ocena to " << word[mark-1] << endl;
        return mark;
    }

};
#endif //LAB3_STUDENT_H
