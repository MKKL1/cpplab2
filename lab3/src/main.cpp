#include <iostream>
#include <limits>
#include "Adding.h"
#include "Student.h"

using namespace std;
//Napisz funkcję szablonową, która przyjmuje jako argument tablicę o typie będącym
//parametrem szablonu i rozmiar tablicy typu całkowitego. Zadaniem funkcji jest znalezienie
//elementu minimalnego w tablicy i zwrócenie go.
template <typename T>
T min(T tab[], int n) {
    T _min = tab[0];
    for (int i = 1; i < n; ++i) {
        T current = tab[i];
        if(current < _min) _min = current;
    }
    return _min;
}
int main() {
    int liczby[] = {7,2,3,4,5};
    cout << "min: " << min(liczby, 5) << endl;
}