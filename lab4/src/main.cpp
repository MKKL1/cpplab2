//
// Created by krystian on 07.11.2023.
//
#include <iostream>
#include <random>
#include <vector>
#include <algorithm>
#include "City.h"

using namespace std;

template <typename T>
void show(T &con)
{
    for(auto it=con.begin( ); it!=con.end( ); it++)
        cout << *it << " ";
    cout << endl;
}

void showCities(const vector<City>& c) {
    for(auto & it : c) {
        it.showCity();
    }
}

void the_most(const vector<City>& c, int mode) {
    switch(mode) {
        case 1:
            cout << "Miasto, w którym jest najwięcej różnych kodów pocztowych" << endl;
            max_element(c.begin(), c.end(),
                        [] (const City& a, const City& b)
                            {
                                return a.unique_postal_codes() < b.unique_postal_codes();
                            }
                        )->showCity();
            break;
        case 2:
            cout << "Miasto, w którym mieszka najmniej mieszkańców" << endl;
            min_element(c.begin(), c.end(),
                        [] (const City& a, const City& b)
                            {
                                return a.city_citizens()  < b.city_citizens();
                            }
                        )->showCity();
            break;
        default:
            //Albo runtime execption
            cout << "Brak trybu" << endl;
            break;
    }
}

void statatistic(const vector<City>& c) {
    for (const auto& city : c) {
        city.showCity();
        cout << " Liczba mieszkancow: " << city.city_citizens() << endl;
        cout << " Liczba kobiet: " << city.women() << endl;
        cout << " Liczba mezczyzn: " << city.city_citizens() - city.women() << endl;
        cout << " Liczba pelnoletnich: " << city.adults() << endl;
        cout << " Liczba niepelnoletnich: " << city.city_citizens() - city.adults() << endl;
    }
}

void sort_cities(vector<City>& c) {
    sort(c.begin(), c.end(),
         [] (const City& a, const City& b)
             {
                 return a.city_citizens()  < b.city_citizens();
             }
    );
}

int liczba_cyfr(int n) {
    int i = 0;
    while(n > 0) {
        n /= 10;
        i++;
    }
    return i;
}

int suma_cyfr_w_liczbie(int n) {
    int suma = 0;
    while(n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

bool CompareData(int a, int b)
{
    if(suma_cyfr_w_liczbie(a) < suma_cyfr_w_liczbie(b)) return true;
    else if(suma_cyfr_w_liczbie(a) > suma_cyfr_w_liczbie(b)) return false;

    if(liczba_cyfr(a) > liczba_cyfr(b)) return true;
    else if(liczba_cyfr(a) < liczba_cyfr(b)) return false;

    return false;
}

int main() {
    //Zadanie 4.1
/*
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(12);
    v.push_back(32);

    for(int i=0; i<v.size(); i++) {
        cout << v[i] << endl;
    }


    cout << "at" << endl;
    for(int i=0; i<v.size(); i++) {
        cout << v.at(i) << endl;
    }


    cout << "Iterator" << endl;
    vector<int>::iterator it;
    for(it=v.begin(); it != v.end(); it++) {
        cout << *it << endl;
    }


    cout << "begin: " << *v.begin() << " front " << v.front() << endl;
    cout << "end: " << *(v.end()-1) << " back " << v.back() << endl;

    show(v);
    v.pop_back();
    show(v);

    vector<int> numbers = {6, 8, 1, 12, 19, 4};
    show(numbers);
    sort(numbers.begin(), numbers.end());
    show(numbers);

    cout << "binary search: " << endl;
    cout << binary_search(numbers.begin(), numbers.end(), 3) << endl;

    cout << "count: " << endl;
    cout << count(numbers.begin(), numbers.end(), 3);
    show(numbers);

    cout<<"reverse"<<endl;
    reverse(numbers.begin(),numbers.begin()+4);
    show(numbers);

    cout<<"random_shuffle"<<endl;
    //tutaj zmiana
    shuffle(numbers.begin(),numbers.end(), std::mt19937(std::random_device()()));
    show(numbers);

    cout<<"max element"<<endl;
    cout<<*max_element(numbers.begin(),numbers.end())<<endl;

    cout<<"merge"<<endl;
    vector<int>numbers2(4,6);
    vector<int>res(numbers.size()+numbers2.size());
    sort(numbers.begin(),numbers.end());
    merge(numbers.begin(),numbers.end(),numbers2.begin(),numbers2.end(),res.begin());
    show(res);
*/

//Zadanie 4.2

//    random_device randomDevice;
//    mt19937 rng(randomDevice());
//    uniform_int_distribution<int> distribution(-100, 100);
//    vector<int> numbers3;
//    int n = 20;
//    for (int i = 0; i < n; ++i) {
//        int x = distribution(rng);
//        if(x < 0) numbers3.insert(numbers3.begin(), x);
//        else numbers3.push_back(x);
//    }
//    show(numbers3);

//Zadanie 4.3
//    Citizen c1("Jan", "Kowalski", "12-345", 20, 'M');
//    Citizen c2("Anna", "Nowak", "12-325", 15, 'K');
//    Citizen c3("Adam", "Nowak", "12-345", 20, 'M');
//    Citizen c4("Marek", "Kowalski", "12-345", 16, 'M');
//    Citizen c5("Marek", "Kowalski", "13-345", 21, 'M');
//    Citizen c6("Marek", "Kowalski", "14-345", 17, 'M');
//    Citizen c7("Marek", "Kowalski", "15-345", 23, 'M');
//    Citizen c8("Marek", "Kowalski", "16-345", 24, 'M');
//    Citizen c9("Anna", "Nowak", "13-325", 26, 'K');
//    Citizen c10("Anna", "Nowak", "18-325", 21, 'K');
//    Citizen c11("Anna", "Nowak", "23-325", 15, 'K');
//    Citizen c12("Anna", "Nowak", "92-325", 23, 'K');
//    City city1("Warszawa");
//    city1.addCitizen(c1);
//    city1.addCitizen(c2);
//    city1.addCitizen(c3);
//    city1.addCitizen(c4);
//
//    City city2("Krakow");
//    city2.addCitizen(c5);
//    city2.addCitizen(c6);
//    city2.addCitizen(c7);
//
//    City city3("Gdansk");
//    city3.addCitizen(c9);
//    city3.addCitizen(c10);
//    city3.addCitizen(c11);
//    city3.addCitizen(c12);
//
//    vector<City> cities = {city1, city2, city3};
//    showCities(cities);
//    the_most(cities, 1);
//    the_most(cities, 2);
//    statatistic(cities);
//    sort_cities(cities);
//    showCities(cities);



//Zadanie 4.4
    vector<int> numbers4 = {6, 8, 1, 12, 19, 4, 3, 5, 7, 9, 10, 11, 13, 14, 15, 16, 17, 18, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    show(numbers4);
    sort(numbers4.begin(), numbers4.end(), CompareData);
    for_each(numbers4.begin(), numbers4.end(), [](int n) { cout << n << " "; });
    return 0;
}
