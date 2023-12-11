//
// Created by krystian on 11.12.2023.
//

#include "Student.h"

#include <stdexcept>

Student::Student(): plec('M'), ocena(2) {
}

Student::Student(const std::string& imie, const std::string& nazwisko, char plec, int ocena, const std::string& email) {
    if(imie[0] < 'A' || imie[0] > 'Z') {
        throw std::invalid_argument("Imie musi zaczynac sie z duzej litery");
    }
    if(nazwisko[0] < 'A' || nazwisko[0] > 'Z') {
        throw std::invalid_argument("Nazwisko musi zaczynac sie z duzej litery");
    }
    if(plec != 'K' && plec != 'M') {
        throw std::invalid_argument("Plec musi byc K lub M");
    }
    if(ocena < 2 || ocena > 5) {
        throw std::invalid_argument("Ocena musi byc z przedzialu 2-5");
    }
    if(email.find('@') == std::string::npos) {
        throw std::invalid_argument("Email musi zawierac @");
    }
    this->imie = imie;
    this->nazwisko = nazwisko;
    this->plec = plec;
    this->ocena = ocena;
    this->email = email;
}

std::string Student::get_imie() const {
    return imie;
}

std::string Student::get_nazwisko() const {
    return nazwisko;
}

char Student::get_plec() const {
    return plec;
}

int Student::get_ocena() const {
    return ocena;
}

std::string Student::get_email() const {
    return email;
}

std::string Student::to_str() const {
    return imie + " " + nazwisko + " " + plec + " " + std::to_string(ocena) + " " + email;
}
