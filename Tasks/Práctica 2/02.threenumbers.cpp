//03.threenumbers.cpp
//Pablo Julián Campoy Fernández 25-10-2021

#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    int c;

    cout << "Please, enter three integers: " << endl;
    cin >> n;
    cin >> m;
    cin >> c;

    if (n > m and n > c){

        cout << n << " is the greatest number." << endl;

    }

    else if (m > n and m > c){

        cout << m << " is the greatest number." << endl;

    }

    else if (c > n and c > m) {

        cout << c << " is the greatest number." << endl;
    }

    else {

        cout << "They are the same number." << endl;
    }
}
