//
// Created by krystian on 07.11.2023.
//

#ifndef LAB4_CITY_H
#define LAB4_CITY_H


#include "Citizen.h"
#include <vector>

class City {
private:
    string city_name;
    vector<Citizen> citizens;
public:
    explicit City(const string &cityName);
    void addCitizen(const Citizen &citizen);
    void deleteCitizen(const string& name, int id);
    void showCitizens() const;
    void showCity() const;
    int women() const;
    int city_citizens() const;
    int adults() const;
    void postal_codes() const;

    int unique_postal_codes() const;
};


#endif //LAB4_CITY_H
