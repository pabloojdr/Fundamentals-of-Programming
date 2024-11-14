//leapyear.cpp
//pabloojdr     19/01/2022

#include <iostream>
using namespace std;

const int NOTLEAP = 0;
const int LEAP = 0;
int kindofyear (int a);

int main()
{
    int y;

    cout << "Please, enter a year to know wether it is a leap year or not: ";
    cin >> y;

    kindofyear(y);
    return 0;
}


int kindofyear(int a)
{
    if(((a % 4) == 0 and (a % 100) != 0) or ((a % 400) == 0)){
        cout << a << " is a leap year";
        }

    else{
        cout << a << " is not a leap year";
    }



    return a;
}
