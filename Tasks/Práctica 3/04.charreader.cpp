//04.charreader.cpp
//pabloojdr  08-11-2021

#include <iostream>
using namespace std;

int main()
{
    char word;
    int counter = 0;

    cout << "Please, enter a word: " << endl;

    while(cin >> word and word != '.'){
        counter++;

        cout << "The ASCII value for " << word << " is: " << (int) word << endl;
    }

    cout << "There are " << counter << " chars." << endl;

}
