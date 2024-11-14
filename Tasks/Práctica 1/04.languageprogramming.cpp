//04.languageprogramming.cpp
//Pablo Julián Campoy Fernández  18-10-2021

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please, enter an integer: " << endl;
    cin >> n;
    cout << n << endl;

    return 0;
}

//If you put a number that's not an integer, for example an number with a decimal part, the program won't show you the decimal part, just the entire part of the number.
//If you put a character or a word, the program will print a "0".
//If you put an integer, the program will print that integer.
