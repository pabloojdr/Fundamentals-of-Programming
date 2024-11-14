//02.factorial.cpp
//Pablo Julián Campoy Fernández 22-10-2021

#include <iostream>
using namespace std;

int main()
{
    int n;
    int N = 1;
    float sum;

    cout << "Please, enter a number: " << endl;
    cin >> n;

    while (n >= 1){
        N *= n;
        n--;


    if (n < 0){
        cout << "Factorial if a negative number does not exist." << endl;
    }

    else if (n == 0){
        cout << "Factorial is: 1" << endl;
    }
    }

    n++;

    cout << "Factorial is: " << N << endl;

    return 0;
}
