//primenumber.cpp
//Pablo Julián Campoy Fernández  27-10-2021


#include <iostream>
using namespace std;

int main()

{
    int n;

    cout << "Please, enter an integer: " << endl;
    cin >> n;

    int d = 2;
    while (n % d != 0){
        ++d;
    }
        if ( n == d){
            cout << "The number is prime." << endl;
        }

        else {
            cout << "The number is not prime." << endl;
        }
    return 0;
}
