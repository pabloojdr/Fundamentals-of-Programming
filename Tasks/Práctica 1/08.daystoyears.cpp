//08.daystoyears.cpp
//Pablo Juli�n Campoy Fern�ndez 118-10-2021

#include <iostream>
using namespace std;

int main ()
{
    int ageDays;

    cout << " Input the age in days : ";
    cin >> ageDays;

    int ageYears = ageDays / 365;

    cout << "Years: " << ageYears << endl ;

    return 0;
}

