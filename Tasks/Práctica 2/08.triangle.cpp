//08.triangle.cpp
//Pablo Julián Campoy Fernández 25-10-2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float b;
    float c;

    cout << "Please, enter three numbers (they must be given in the following order: a <= b <= c): " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    while (a <= b and b <= c){

        if (c > a + b) {
            cout << "They can't form a triangle." << endl;

            return 0;
        }

        else if (a == b == c){
            cout << "The triangle is equilateral." << endl;

            return 0;
        }

        else if (a == b != c){
            cout << "The triangle is isosceles." << endl;

            return 0;
        }

        else if (pow(c, 2) == pow(a, 2) + pow(b, 2)){
            cout << "The triangle is rectangle." << endl;

            return 0;
        }

        else if (pow(c, 2) < pow(a, 2) + pow(b, 2)){
            cout << "The triangle is acute." << endl;

            return 0;
        }

        else if (pow(c, 2) > pow(a, 2) + pow(b, 2)){
            cout << "The triangle is obtuse." << endl;

            return 0;
        }
    }


    cout << "They are not in order." << endl;


    return 0;
}
