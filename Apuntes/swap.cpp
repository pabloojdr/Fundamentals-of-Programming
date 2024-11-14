//swapp.cpp
//pabloojdr  10-11-2021

#include <iostream>
using namespace std;


void swap(int& a, int& b); //without & the program does nothing, a and b stay the same way. With &, a is changed with b.

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << x << ", " << y << endl;

    swap(x, y);
    cout << x << ", " << y << endl;

    return 0;
}

void swap(int& a, int& b)
{
    int t = a; //a, b, t are local in swap, they have nothing to do with the previous program. They live in different programs.
    a = b;
    b = t;
}
