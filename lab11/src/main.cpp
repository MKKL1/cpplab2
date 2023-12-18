#include <iostream>
#include <memory>
#include <vector>
#include "Person.h"
#include "Elem.h"
#include "Bufor.h"
#include "BuforArr.h"
#include "BuforFile.h"


using namespace std;
void funcUniqueModify(unique_ptr<int> &uniquePtr) {
    *uniquePtr = 112;
}

void funcUniqueDeleter(int *p) {
    delete [] p;
    cout << "funcUniqueDeleter: usunieta tablica" << endl;
}

unique_ptr<int[]> funcUniqueArray(int n) {
    unique_ptr<int[]> arr(new int[n]);
    for(int i = 0; i < n; i++) arr[i] = i+7;
    return arr;
}

void funDeleter(Person* p) {
    cout << "Osoba usunieta: ";
    p->info();
    delete p;
}
int main() {
//    std::cout << "Hello, World!" << std::endl;
//    unique_ptr<int> uptr1(new int(12));
//    cout << "wartosc uptr1: " << *uptr1 << endl;
//    cout << "Adres uptr1: " << uptr1.get() << endl;
//
//    unique_ptr<int> uptr2;
//    cout << "Przed move" << endl;
//    cout << "Adres uptr1: " << uptr1.get() << endl;
//    cout << "Adres uptr2: " << uptr2.get() << endl;
//    uptr2 = std::move(uptr1);
//    cout << "Po move: " << endl;
//    cout << "Adres uptr1: " << uptr1.get() << endl;
//    cout << "Adres uptr2: " << uptr2.get() << endl;
//
//    funcUniqueModify(uptr2);
//    cout << "Wartosc uptr2: " << *uptr2 << endl;
//    cout << "Przed reset: Adres uptr2: " << uptr2.get() << endl;
//    uptr2.reset();
//    cout << "Po reset: Adres uptr2: " << uptr2.get() << endl;
//

//    shared_ptr<Person> sptr1(new Person("Ola",32));
//    shared_ptr<Person> sptr2(new Person("Ula",52));
//
//    sptr1->info();
//
//    cout << "Licznik sptr1: " << sptr1.use_count() << endl;
//    cout << "Licznik sptr2: " << sptr2.use_count() << endl;
//
//    vector<shared_ptr<Person>> firstInOffice;
//    firstInOffice.push_back(sptr1);
//    firstInOffice.push_back(sptr2);
//    firstInOffice.push_back(sptr2);
//    firstInOffice.push_back(sptr1);
//    firstInOffice.push_back(sptr2);
//
//    cout<<"Po dodaniu do kontenera"<<endl;
//    cout<<"Licznik sptr1: "<<sptr1.use_count()<<endl;
//    cout<<"Licznik sptr2: "<<sptr2.use_count()<<endl;
//
//    for (const shared_ptr<Person>& ptr : firstInOffice)
//        ptr->info();
//    cout << endl;
//
//    firstInOffice.resize(3);
//
//    cout << "Po resize"<<endl;
//    cout << "Licznik sptr1: " << sptr1.use_count() << endl;
//    cout << "Licznik sptr2: " << sptr2.use_count() << endl;
//
//    shared_ptr<Person> sptr3(new Person("Magda",22),funDeleter);
//    sptr3->info();

//    shared_ptr<Elem> el1(new Elem);
//    shared_ptr<Elem> el2(new Elem);
//    el1->next = el2;
//    el2->prev = el1;
//    shared_ptr<Elem> tempEl(el2->prev);
//    cout << "Adres: " << tempEl << endl;
    vector<shared_ptr<Bufor>> bufory;
    for(int i = 0; i < 2; i++) {
        shared_ptr<Bufor> bufor = shared_ptr<Bufor>(new BuforArr(10));
        bufor->add(5);
        bufor->add(5);
        bufor->add(2);
        bufor->add(1);
        bufor->write();
        bufory.push_back(bufor);
    }
    for(int i = 0; i < 3; i++) {
        shared_ptr<Bufor> bufor2 = shared_ptr<Bufor>(new BuforFile("plik" + std::to_string(i) + ".txt"));
        bufor2->add(2);
        bufor2->add(6);
        bufor2->add(2);
        bufor2->add(1);
        bufor2->write();
        bufory.push_back(bufor2);
    }


    return 0;
}
