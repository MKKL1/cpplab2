//
// Created by krystian on 07.11.2023.
//

#include <map>
#include <set>
#include "City.h"

City::City(const string &cityName) : city_name(cityName) {
    citizens = vector<Citizen>();
}

void City::addCitizen(const Citizen &citizen) {
    citizens.push_back(citizen);
}

void City::deleteCitizen(const string &name, int id) {

}

void City::showCitizens() const{
    for(auto it=citizens.begin(); it!=citizens.end(); it++) {
        it->show();
    }
}

void City::showCity() const {
    cout << city_name << endl;
}

int City::women() const {
    return count_if(citizens.begin(), citizens.end(), [](const Citizen &c) { return c.getSex() == 'K'; });
}

int City::city_citizens() const {
    return citizens.size();
}

int City::adults() const {
    return count_if(citizens.begin(), citizens.end(), [](const Citizen &c) { return c.getAge() >= 18; });
}

void City::postal_codes() const {
    map<string, int> codes;
    for(auto & citizen : citizens) {
        codes[citizen.getPostalCode()]++;
    }
    for(auto & code : codes) {
        cout << code.first << "->" << code.second << endl;
    }
}

int City::unique_postal_codes() const {
    set<string> codes;
    for(auto & citizen : citizens) {
        codes.insert(citizen.getPostalCode());
    }
    return codes.size();
}
