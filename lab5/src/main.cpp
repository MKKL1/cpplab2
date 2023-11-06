//
// Created by student on 06.11.2023.
//
#include <iostream>
#include <set>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void showMap(map<string, int> m)
{
    cout<<endl<<"m: "<<endl;
    map<string, int>::iterator it;
    for(it=m.begin(); it!=m.end(); ++it)
        cout << it->first <<" "<<it->second<<endl;

    cout<<endl;
}

map<string, int>::iterator searchByValue(map<string, int>& m, int val)
{
    map<string, int>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        if(it->second == val) break;
    return it;
}

void show(const set<int> &s) {
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}

pair<int, int> duplikat(const vector<int>& lista) {
    set<int> liczby_unikalne;
    int duplikat;
    int suma = 0;
    for(auto itr = lista.begin(); itr != lista.end(); itr++) {
        auto res = liczby_unikalne.insert(*itr);
        if(!res.second) {
            duplikat = *res.first;
        } else {
            suma += *res.first;
        }
    }
    suma -= duplikat;
    return pair<int, int>(duplikat, suma);
}

template<typename T> set<T> alternatywaWykluczajaca(set<T> s1, set<T> s2) {
    set<T> intersec;
    set<T> unionset;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(intersec, intersec.begin()));
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(unionset, unionset.begin()));
    for(auto itr = intersec.begin(); itr != intersec.end(); itr++) {
        unionset.erase(*itr);
    }
    return unionset;
}

char znak(const string& a, const string& b) {
    map<char, int> ilosc;
    for(char _a: a) {
        ilosc.insert(pair<char, int>(_a, 1));
    }

    for(char _b: b) {
        if(ilosc.contains(_b))
            ilosc.insert(pair<char, int>(_b, 2));
        else ilosc.insert(pair<char, int>(_b, 1));
    }
    for (const auto& [key, value] : ilosc)
        if (value == 2)
            return key;
    return 'a'; //nie wiem co
}

int main() {
//    set<int> s;
//    s.insert(0);
//    s.insert(1);
//    s.insert(2);
//    s.insert(3);
//    s.insert(7);
//    s.insert(3);
//    show(s);
//    s.erase(s.begin(), s.find(2));
//    show(s);
//    s.erase(2);
//    show(s);
//    cout << s.count(2) << endl;
//
//    set<int> s1 = {1, 2, 3, 7};
//    set<int> s2 = {-2, 4, 1, 7, 6};
//    cout << "s1: ";
//    show(s1);
//    cout << "s2: ";
//    show(s2);
//    set<int> sUnion, sIntersec, sDiffer;
//
//    //set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator<int>(sUnion, sUnion.begin()));
//    set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),
//                     insert_iterator(sIntersec,sIntersec.begin()));
//    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),
//                      insert_iterator(sDiffer,sDiffer.begin()));
//
//
//    set<int> s3 = {3,8};
//    pair<set<int>::iterator, bool> res;
//    res=s3.insert(6);
//    cout << "Dodano element: " << *(res.first) << endl;
//    cout << "czy dodany: " << res.second << endl;
//    show(s3);

//    map<string, int> m;
//    m.insert(pair<string,int>("Kowalski", 4500));
//    m.insert(make_pair("Kowalski", 4500));
//    m["Adamek"] = 3000;
//    showMap(m);
//    int salary=m.find("Kowalski")->second;
//    cout<<"Zarobki Kowalskiego: "<<salary<<endl;
//    m.erase("Adamek");
//    showMap(m);
//    cout<< "Czy jest Kowalski? "<<m.count("Kowalski")<<endl;
//
//    map<string, int>::iterator it = searchByValue(m, 2000);
//    if(it != m.end())
//        cout << "elem znaleziony:" << it->first << " " << it->second << endl;
//    else cout << "Brak elem" << endl;

//Zadanie 5.1

    vector<int> lista = {1,2,3,4,5,6,7,8,8,9,10};
    auto dup = duplikat(lista);
    cout << "Zduplikowana wartosc " << dup.first << " suma reszty " << dup.second;

    set<int> s1 = {1,2,3,4,5,6};
    set<int> s2 = {5,6,7,8,9,10};

    cout << endl;
    show(alternatywaWykluczajaca(s1, s2));

    return 0;
}