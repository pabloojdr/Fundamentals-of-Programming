//01.controlstructures.cpp
//Pablo Julián Campoy Fernández 14-10-2021

#include <iostream>
using namespace std;

/* 1.- Devise the next progams:
a) Ask the user for two intergers and show which one is the largest. */

/* int main()
{
    int a;
    int b;

    cout << "Please, enter an integer: " << endl;
    cin >> a;
    cout << "Please, enter another integer: " << endl;
    cin >> b;

    if (a < b) {
        cout << b << " is the largest integer." << endl;
    }

    else {
        cout << a << " is the largest integer." << endl;
    }


}
*/

//b) Ask for three integers and show which one is the largest.

int main()
{
    int c;
    int d;
    int e;

    cout << "Please, enter a first integer: " << endl;
    cin >> c;
    cout << "Please, enter a second integer: " << endl;
    cin >> d;
    cout << "Please, enter a third integer: " << endl;
    cin >> e;

    if (d < c and e < d) {
        cout << c << " is the largest integer." << endl;
    }

    else if (c < d and e < d) {
        cout << d << " is the largest integer." << endl;
    }

    else if (c < e and d < e) {
        cout << e << " is the largest integer." << endl;
    }

}
