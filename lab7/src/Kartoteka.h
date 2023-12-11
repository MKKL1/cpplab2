//
// Created by krystian on 11.12.2023.
//

#ifndef KARTOTEKA_H
#define KARTOTEKA_H
#include <algorithm>
#include <vector>

#include "Student.h"


class Kartoteka {
    std::vector<Student> students;
    std::string header;
public:
    Kartoteka(const std::string& filename);

    std::string table_display() const;
    const Student& get_student(const std::string &nazwisko) const {
        return *std::find(students.begin(), students.end(),
            [&](const Student& student) {return student.get_nazwisko() == nazwisko;});
    }

    std::vector<Student>& get_students() {
        return students;
    }
};



#endif //KARTOTEKA_H
