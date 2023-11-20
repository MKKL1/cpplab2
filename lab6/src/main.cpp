#include <iostream>
#include <boost/multi_index_container.hpp>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/ordered_index.hpp>
#include <boost/multi_index/random_access_index.hpp>
#include "Person.h"

#define orderedNonUnique

using namespace boost::multi_index;
using namespace std;
typedef multi_index_container<Person,
    indexed_by<
        hashed_non_unique<member<Person, string, &Person::name>>,
        hashed_non_unique<member<Person, int, &Person::age>>
    >
> person_multi;
typedef person_multi::nth_index<0>::type name_type;
typedef person_multi::nth_index<1>::type age_type;


typedef multi_index_container<Person,
    indexed_by<
        ordered_non_unique<member<Person,string,&Person::name>>,
        ordered_non_unique<member<Person,int,&Person::age>>,
        random_access<>
    >
> person_multi_2;
typedef person_multi_2::nth_index<0>::type name_type2;

typedef person_multi_2::nth_index<1>::type age_type2;
int main() {
#pragma region
#ifdef hashedNonUnique
    person_multi persons;

    persons.insert({"Ala", 40});
    persons.insert({"Piotr", 10});
    persons.insert({"Ola", 18});
    persons.insert({"Ala", 46});
    persons.insert({"Ula", 46});
    persons.insert({"Ula", 43});

    cout << "Liczba osob o imieniu Ala: " << persons.count("Ala") << endl;
    cout << "Liczba osob o imieniu Ala: " << persons.get<0>().count("Ala") << endl;

    age_type &age_index = persons.get<1>();
    cout<< "Liczba osob z wiekiem 18 lat: " << age_index.count(18) << endl;

    for(const auto & it : persons.get<0>()) {
        it.show();
    }

    auto &age_indexx = persons.get<1>();
    auto it1 = age_indexx.find(46);
    cout << "Znaleziona osoba, ktora ma 46 lat " << it1->name << endl;


    auto &name_indexx = persons.get<0>();

    name_indexx.modify(name_indexx.find("Ula"), [](Person &x) {x.name="Urszulka";});
    cout << "Modify" << endl;
    for(const auto & it2 : persons.get<0>()) {
        it2.show();
    }

    for(name_type::iterator it2 = persons.get<0>().begin(); it2 != persons.get<0>().end(); ++it2) {
        name_indexx.modify(it2, [] (Person &x) {
            if(x.name == "Urszulka") x.name = "Ula";
        });
    }

    cout << "Modify2" << endl;
    for(const auto & it2 : persons.get<0>()) {
        it2.show();
    }

#endif
#pragma endregion

#pragma region
#ifdef orderedNonUnique
    person_multi_2 persons2;
    persons2.get<2>().push_back({"Ala", 40});
    persons2.get<2>().push_back({"Ala", 45});
    persons2.get<2>().push_back({"Piotr", 10});
    persons2.get<2>().push_back({"Ola", 18});
    persons2.get<2>().push_back({"Aga", 46});
    persons2.get<2>().push_back({"Ula", 46});
    auto &name_indexx2 = persons2.get<0>();
    auto iterStart = name_indexx2.equal_range("Ala");
    auto iterStop = name_indexx2.equal_range("Piotr");
    cout <<"przedzial od Ala do Piotr - wersja 1"<<endl;

    for (name_type2::iterator it=iterStart.first; it != iterStop.second; ++it)
    it->show();
    auto from = name_indexx2.lower_bound("Ala");
    auto to = name_indexx2.upper_bound("Piotr");
    cout <<"przedzial od Ala do Piotr - wersja 2"<<endl;
    for (auto it=from; it != to; ++it)
        it->show();
#endif
#pragma endregion

    return 0;
}
