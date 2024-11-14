//alternateserie.cpp
//pabloojdr     19-01-2022

#include <iostream>
#include <math.h>
using namespace std;

double alternateserie(int n);

int main()
{
    int n;

    cout << "Please, enter an integer to calculate its alternate serie: ";
    cin >> n;

    cout << "The alternate series of " << n << " is: " << alternateserie(n);
}


double alternateserie(int n)
{
    double sum = 0.0;

    for(int i = 1; i <= n; i++){
        sum = sum + (pow(-1,(1+i)) * (1.0/i));
    }

    return sum;
}
