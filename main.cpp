#include <iostream>
#include "Person.h"
#include "Teacher.h"

using namespace std;
int main() {
    cout<<endl<<"Obiekty klasy Person"<<endl;
    Person o1("Grazyna","Nowak",45);
    o1.showInfoPerson();
    cout<<"Czy pelnoletnia?: "<<o1.is_18()<<endl;
    o1.setAge(16);
    cout<<endl<<"Obiekty klasy Teacher"<<endl;
    Teacher n1("Barbara","Kowalska",56,30,"Phd");
    n1.showInfoTeacher();
    cout<<"Czy ma Phd?: "<<n1.is_Phd()<<endl;
    n1.setAge(34);
    return 0;
}
