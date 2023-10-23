#include <iostream>
#include "Adding.h"

using namespace std;

int main() {
    Adding<int> a1(5);
    a1.add(6);
    a1.show();

    Adding<string> a2("Hello ");
    a2.add("world!");
    a2.show();
}