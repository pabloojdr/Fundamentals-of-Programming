//squarePoly.cpp
//pabloojdr     18-02-2022

#include <iostream>
#include <math.h>
using namespace std;

float solvesquarePoly(float a, float b, float c, float x1, float x2);
void quadEc(float a, float b, float c, float x1, float x2);

int main()
{
    int a, b, c, x1 = 0, x2 = 0;

    cout << "Please, enter the number that follows x^2: ";
    cin >> a;
    cout << "Please, enter the number that follows x: ";
    cin >> b;
    cout << "Please, enter the a number (lonely digit): ";
    cin >> c;

    cout << "The solutions are: " << solvesquarePoly(a, b, c, x1, x2);
    quadEc(a, b, c, x1, x2);
}


float solvesquarePoly(float a, float b, float c, float x1, float x2)
{
    x1 = -b + sqrt((b*b - 4*a*c)/2*a);
    x2 = -b - sqrt((b*b - 4*a*c)/2*a);

    return x1, x2;
}

void quadEc(float a, float b, float c, float x1, float x2)
{
    if(x1 != x2){
        cout << "The solutions are different real numbers." << endl;
    }

    else if(a == 0){
        cout << "The solution is a simple number." << endl;
    }

    else if(a == 0 and b == 0 and c != 0){
        cout << "This is an impossible equation." << endl;
    }

    else if(a == 0 and b == 0 and c == 0){
        cout << "This is a trivial equation." <<  endl;
    }


}

