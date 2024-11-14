//03.equation.cpp
//Pablo Julián Campoy Fernández 15-10-2021

/*
3.- Write a program to solve quadratic equations (ax2 + bx + c = 0) asking for the coefficients (a, b
and c) and applying the well known formula x1,2 = (−b ±√b2−4ac)/(2a) taking care
(a) not to try to compute the square root of a negative discriminant (d = b 2 − 4ac)
(b) also not to divide by 0 (if the user entered a zero a)
Tell the user when these conditions happen.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;

    cout << "Please, enter three coefficients: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;


    d = (-b+sqrt(b*b-4*a*c/2*a));
    e = (-b-sqrt(b*b-4*a*c/2*a));




    if ((b*b-4*a*c) > 0){
        cout << "Your solutions are: " << d << " and " << e << endl;
    }
    else if (a == 0) {
        cout << "There is no solution" << endl;
    }

    else {
        cout << "There are no real solutions" << endl;
    }

}


