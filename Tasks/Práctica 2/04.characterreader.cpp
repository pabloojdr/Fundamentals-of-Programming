//04.characterreader.cpp
//Pablo Julián Campoy Fernández  25-10-2021

#include <iostream>
using namespace std;

int main()
{
    char c;

    cout << "Please, enter a character: " << endl;


    while (cin >> c){

        if (c == '.'){
            cout << "It is a dot." << endl;
        }

        cout << c << " is a letter." << endl;

        return 0;
    }
}

