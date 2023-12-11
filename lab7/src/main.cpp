#include <fstream>
#include <iostream>
#include <limits>
#include <sstream>

#include "Kartoteka.h"

using namespace std;
int main() {
    //Zadanie 1
    // ifstream file("kod.txt");
    // ostringstream ss;
    // if (file.is_open()) {
    //     char c;
    //     while(!file.eof())
    //     {
    //         c = file.get();
    //         if(c == '/' && file.peek() == '/') {
    //             file.ignore(numeric_limits<std::streamsize>::max(),'\n');
    //             ss << '\n';
    //         }
    //         else ss << c;
    //     }
    //     file.close();
    // } else {
    //     cout << "Unable to open file" << endl;
    // }
    //
    // cout << ss.str();

    // int liczba = 0;
    // int suma = 0;
    //
    // while(suma != 21) {
    //     try {
    //         cout << "Podaj liczbe:";
    //         cin >> liczba;
    //         if(!cin) {
    //             throw invalid_argument("Nie podano liczby!");
    //         }
    //
    //         if(suma+liczba > 21) {
    //             throw exception();
    //         }
    //         suma += liczba;
    //     }
    //     catch (invalid_argument &e) {
    //         cout << e.what() << endl;
    //         cin.clear();
    //         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //     }
    //     catch (exception &e) {
    //         cout << "Podaj ponownie!" << endl;
    //     }
    //
    // }
    // cout << "Oczko!" << endl;

    Kartoteka kartoteka("dane.csv");
    cout << kartoteka.table_display() << endl;

    while(true) {
        cout << "Podaj opcje" << endl;
        int opcja = 0;
        cin >> opcja;
        switch (opcja) {
            case 1:
                cout << kartoteka.table_display() << endl;
            break;
            case 2:
                string imie;
                string nazwisko;
                char plec;
                int ocena;
                string email;
                cout << "Podaj imie nazwisko plec ocena email:" << endl;
                cin >> imie >> nazwisko >> plec >> ocena >> email;
                try {
                    Student student(imie, nazwisko, plec, ocena, email);
                    kartoteka.get_students().push_back(student);
                    cout << "Dodano studenta" << endl;
                } catch (exception &e) {
                    cout << e.what() << endl;
                }
                break;
            case 3:
                cout << "Podaj nazwisko do wyszukania" << endl;
                string nazwisko3;
                cin >> nazwisko3;
                cout << kartoteka.get_student(nazwisko3).to_str() << endl;
                break;
            case 4:
                break;
            case 5:
                cout << "Podaj liczbe osób do wyświetlenia" << endl;
                int n;
                cin >> n;
                for(int i = 0; i < n; i++) {
                    cout << kartoteka.get_students()[i].to_str() << endl;
                }
            case 6:
                sort(kartoteka.get_students().begin(), kartoteka.get_students().end(), [](const Student& a, const Student& b) {
                    return a.get_ocena() > b.get_ocena();
                });
                cout << "Posortowano" << endl;
                break;
            case 7:
                return 0;
            default: cout << "Nieznana opcja" << endl;
        }
    }
    return 0;
}