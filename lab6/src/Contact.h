//
// Created by krystian on 26.11.2023.
//

#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <string>


class Contact {

public:
    std::string name, surname, phone, street;
    int age{};

    Contact() = default;
    Contact(const std::string& name, const std::string& surname, const std::string& phone, const std::string& street,
            const int age)
        : name(name),
          surname(surname),
          phone(phone),
          street(street),
          age(age) {
    }

    void show() const;
};

inline void Contact::show() const {
    std::cout << "Name: " << name << ", surname: " << surname << ", phone: " << phone << ", street: " << street
              << ", age: " << age << std::endl;
}


#endif //CONTACT_H
