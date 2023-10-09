#include <iostream>
#include "Person.h"
#include "Teacher.h"
#include "Student.h"

using namespace std;
int main() {
//    cout<<endl<<"Obiekty klasy Person"<<endl;
//    Person o1("Grazyna","Nowak",45);
//    o1.showInfoPerson();
//    cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
//    o1.setAge(16);
//    cout<<endl<<"Obiekty klasy Teacher"<<endl;
//    Teacher n1("Barbara","Kowalska",56,30,"Phd");
//    n1.showInfoTeacher();
//    cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
//    n1.setAge(34);

//    //Statyczna tablica statycznych obiektów
//    Person person1[3];
//    //Dynamiczna tablica statycznych obiektów
//    Person* person2;
//    //Statyczna tablica dynamicznych obiektów
//    Person* person3[3];
//    //Dynamiczna tablica dynamicznych obiektów
//    Person** person4;
//
//    for (int i = 0; i < 3; i++) {
//        person1[i].init("Anna", "Nowak", 20+i);
//        person1[i].showInfoPerson();
//    }
//
//    person2 = new Person[3];
//    for (int i = 0; i < 3; i++) {
//        person2[i].init("Anna", "Nowak", 20+i);
//        person2[i].showInfoPerson();
//    }
//
//    for (int i = 0; i < 3; i++) {
//        person3[i] = new Person("Anna", "Nowak", 20+i);
//        person3[i]->showInfoPerson();
//    }
//
//    person4 = new Person * [3];
//    for (int i = 0; i < 3; i++) {
//        person4[i] = new Person("Anna", "Nowak", 20+i);
//        person4[i]->showInfoPerson();
//    }
//
//    for(int i = 0; i < 3; i++)
//        delete person3[i];
//
//    for(int i = 0; i < 3; i++)
//        delete person4[i];
//
//    delete [] person4;

    //Statyczna tablica statycznych obiektów
    Student student1[3];
    //Dynamiczna tablica statycznych obiektów
    Student* student2;
    //Statyczna tablica dynamicznych obiektów
    Student* student3[3];
    //Dynamiczna tablica dynamicznych obiektów
    Student** student4;

    for (int i = 0; i < 3; i++) {
        student1[i].init("Anna", "Nowak", 20+i, "04321");
        student1[i].showInfoStudent();
    }

    student2 = new Student[3];
    for (int i = 0; i < 3; i++) {
        student2[i].init("Anna", "Nowak", 20+i, "04321");
        student2[i].showInfoStudent();
    }

    for (int i = 0; i < 3; i++) {
        student3[i] = new Student("Anna", "Nowak", 20+i, "04321");
        student3[i]->showInfoStudent();
    }

    student4 = new Student*[3];
    for (int i = 0; i < 3; i++) {
        student4[i] = new Student("Anna", "Nowak", 20+i, "04321");
        student4[i]->showInfoStudent();
    }

    for(int i = 0; i < 3; i++)
        delete student3[i];

    for(int i = 0; i < 3; i++)
        delete student4[i];

    delete [] student4;
    return 0;
}
