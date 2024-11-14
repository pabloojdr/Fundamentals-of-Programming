//10.heartbeats.cpp
//Pablo Julián Campoy Fernández  18-10-2021

#include <iostream>
using namespace std;

int main()
{
    int age;
    int N;

    cout << "Please, enter your age: " << endl;
    cin >> age;

    N = 220 - age;

    cout << "The maximum number your heart should reach is: " << N << endl;
}
