#include <iostream>

using namespace std;

template <typename T>
void mswap(T& a, T& b) {
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main() {
    int a = 8;
    int b = 6;
    mswap(a,b);
    cout << "a: " << a << " b: " << b << endl;
}