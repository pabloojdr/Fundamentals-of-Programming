//harmonicsum.cpp
//pabloojdr     19-01-2022

#include <iostream>
using namespace std;

double harmonic(int n);

int main()
{
    int n;
    cout << "Please, enter an integer to calculate its harmonic sum: ";
    cin >> n;

    cout << "The harmonic sum of " << n << " is: " << harmonic(n);

    return 0;


}

double harmonic(int n)
{
    double sum = 0.0;

    for(int i = 1; i <= n; i++){
        sum = sum + (1.0/i);
    }

    return sum;
}
