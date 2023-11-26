//
// Created by krystian on 26.11.2023.
//

#include "ContactBook.h"

#include <set>

ContactBook::ContactBook() {
}

void ContactBook::add(const Contact&contact) {
    contacts.insert(contact);
}

void ContactBook::remove(const std::string&phone) {
    contacts.erase(phone);
}

ContactBook::contact_multi::iterator ContactBook::find(const std::string&phone) {
    return contacts.find(phone);
}

std::pair<ContactBook::age_type::iterator,ContactBook::age_type::iterator> ContactBook::findByAge(int ageMin, int ageMax) {
    auto range = contacts.get<4>().range(
        [&](int a) { return a >= ageMin; },
        [&](int b) { return b <= ageMax; });
    return range;
}

ContactBook::age_type::iterator ContactBook::findByAge(int age) {
    return contacts.get<4>().find(age);
}

ContactBook::street_type::iterator ContactBook::findByStreet(const std::string&street) {
    return contacts.get<3>().find(street);
}

void ContactBook::changeStreet(const std::string& street, const std::string& newstreet) {
    contacts.get<3>().modify(findByStreet(street), [&](Contact& c) { c.street = newstreet; });
}

ContactBook::contact_multi::size_type ContactBook::countAdults() const {
    return contacts.get<4>().count(18);
}

ContactBook::contact_multi::size_type ContactBook::countUniqueSurnames() const {
    //policzenie ile unikatowych nazwisk znajduje się w książce
    std::set<std::string> surnames;
    for (auto&contact: contacts) {
        surnames.insert(contact.surname);
    }
    return surnames.size();
}

std::map<
    ContactBook::street_type::key_type,
    std::pair<ContactBook::street_type::iterator,ContactBook::street_type::iterator>
> ContactBook::sameStreet() const {
    std::map<street_type::key_type, std::pair<street_type::iterator, street_type::iterator>> result;
    std::set<street_type::key_type> streets;
    for (auto&contact: contacts) {
        streets.insert(contact.street);
    }
    for (auto&street: streets) {
        result[street] = contacts.get<3>().equal_range(street);
    }
    return result;
}

void ContactBook::show() const {
    for (auto&contact: contacts) {
        contact.show();
    }
}

ContactBook::~ContactBook() {
}
