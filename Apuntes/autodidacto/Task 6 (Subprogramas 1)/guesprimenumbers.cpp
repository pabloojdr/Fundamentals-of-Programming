//guessprimenumbers.cpp
//pabloojdr     20-01-2022

#include <iostream>
using namespace std;

bool isprime(int n);

int main()
{
    int n;

    cout << "Please enter a number to know if it is prime or not: ";
    cin >> n;

    isprime(n);

    if(isprime(n) == true){
        cout << n << " is prime." << endl;
    }

    else if(isprime(n) == false){
        cout << n << " is not prime." << endl;
    }

    return 0;
}

bool isprime(int n)
{
    bool prime = true;
    int i = 2;
    int division;

    while(prime and i <= n){
        division = (n%i);

        if(division == 0){
            prime = false;
        }

        else if(division != 0){
            prime = true;
        }
    }



    return prime;
}
