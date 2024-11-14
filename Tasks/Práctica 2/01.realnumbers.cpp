//01.realnumbers.cpp
//Pablo Julián Campoy Fernández 25-10-2021

#include <iostream>
using namespace std;

int main()
{
    float n;

    cout << "Please, enter a number: " << endl;
    cin >> n;

    if (n < 0){

        cout << n << " is a negative number." << endl;
    }

    else{
        cout << n << " is a positive number." << endl;
    }
}

