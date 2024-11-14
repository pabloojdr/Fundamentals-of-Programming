//06.ascii.cpp
//Pablo Julián Campoy Fernández  18-10-2021

#include <iostream>
using namespace std;

int main()
{
    char a;
    char b;
    char c;
    char d;

    cout << "Please, enter a word with four characters: " << endl;
    cin >> a >> b >> c >> d;

    a += 1;
    b += 1;
    c += 1;
    d += 1;


    cout << a << b << c << d << endl;
}
