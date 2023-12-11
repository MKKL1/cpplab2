//
// Created by krystian on 11.12.2023.
//

#include "Kartoteka.h"

#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

Kartoteka::Kartoteka(const std::string& filename) {
    students = std::vector<Student>();
    std::ifstream file(filename);
    if (file.is_open()) {
        try {
            std::string line;
            std::getline(file, line); // skip first line
            header = line;

            while(std::getline(file, line)) {
                std::stringstream linestream(line);
                std::string token;
                getline(linestream, token, ';');
                std::string imie = token;
                getline(linestream, token, ';');
                std::string nazwisko = token;
                getline(linestream, token, ';');
                char plec = token[0];
                getline(linestream, token, ';');
                int ocena = std::stoi(token);
                getline(linestream, token, ';');
                std::string email = token;

                students.push_back(Student(imie, nazwisko, plec, ocena, email));
            }
        } catch (std::exception &e) {
            file.close();
            throw std::runtime_error("Error while parsing file");
        }
    } else {
        throw std::runtime_error("Unable to open file");
    }
}

std::string Kartoteka::table_display() const {
    std::ostringstream ss;
    static int imie_width = 15;
    static int nazwisko_width = 15;
    static int plec_width = 5;
    static int ocena_width = 6;
    static int email_width = 20;
    ss << std::left << std::setw(imie_width) << std::setfill(' ') << "Imie";
    ss << std::left << std::setw(nazwisko_width) << std::setfill(' ') << "Nazwisko";
    ss << std::left << std::setw(plec_width) << std::setfill(' ') << "Plec";
    ss << std::left << std::setw(ocena_width) << std::setfill(' ') << "Ocena";
    ss << std::left << std::setw(email_width) << std::setfill(' ') << "Email";
    ss << std::endl;
    for (const auto& student : students) {
        ss << std::left << std::setw(imie_width) << std::setfill('_') << student.get_imie();
        ss << std::left << std::setw(nazwisko_width) << std::setfill('_') << student.get_nazwisko();
        ss << std::left << std::setw(plec_width) << std::setfill('_') << student.get_plec();
        ss << std::left << std::setw(ocena_width) << std::setfill('_') << student.get_ocena();
        ss << std::left << std::setw(email_width) << std::setfill('_') << student.get_email();
        ss << std::endl;
    }
    return ss.str();
}
