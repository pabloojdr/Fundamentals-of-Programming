//02.factorial.cpp
//Pablo Juli�n Campoy Fern�ndez 22-10-2021

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Factorial, n?: ";
    cin >> n;

    int i = 1;
    int f = 1;

    while (i <= n){
        f *= i;
        ++i;
    }

    cout << "factorial(" << n << "): " << f << endl;

    return 0;
}
