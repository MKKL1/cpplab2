//
// Created by krystian on 11.12.2023.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>


class Student {
    std::string imie;
    std::string nazwisko;
    char plec;
    int ocena;
    std::string email;

public:
    Student();

    Student(const std::string& imie, const std::string& nazwisko, char plec, int ocena, const std::string& email);

    std::string get_imie() const;

    std::string get_nazwisko() const;

    char get_plec() const;

    int get_ocena() const;

    std::string get_email() const;

    std::string to_str() const;
};



#endif //STUDENT_H
