//
// Created by krystian on 26.11.2023.
//

#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <map>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include <boost/multi_index/member.hpp>

#include "Contact.h"

using namespace boost::multi_index;



class ContactBook {
    typedef multi_index_container<Contact,
        indexed_by<
            hashed_unique<member<Contact, std::string, &Contact::phone>>,
            hashed_non_unique<member<Contact, std::string, &Contact::name>>,
            hashed_non_unique<member<Contact, std::string, &Contact::surname>>,
            hashed_non_unique<member<Contact, std::string, &Contact::street>>,
            ordered_non_unique<member<Contact, int, &Contact::age>>,
            random_access<>
        >
    > contact_multi;
    typedef contact_multi::nth_index<0>::type phone_type;
    typedef contact_multi::nth_index<1>::type name_type;
    typedef contact_multi::nth_index<2>::type surname_type;
    typedef contact_multi::nth_index<3>::type street_type;
    typedef contact_multi::nth_index<4>::type age_type;
    contact_multi contacts;
public:
    ContactBook();
    void add(const Contact& contact);
    void remove(const std::string& phone);
    contact_multi::iterator find(const std::string& phone);
    std::pair<age_type::iterator,age_type::iterator> findByAge(int ageMin, int ageMax);
    age_type::iterator findByAge(int age);
    street_type::iterator findByStreet(const std::string&street);

    void changeStreet(const std::string& street, const std::string& newstreet);
    contact_multi::size_type countAdults() const;
    contact_multi::size_type countUniqueSurnames() const;
    std::map<street_type::key_type, std::pair<street_type::iterator, street_type::iterator>> sameStreet() const;

    void show() const;
    ~ContactBook();
};



#endif //CONTACTBOOK_H
