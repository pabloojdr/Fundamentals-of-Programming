//12.air.cpp
//Pablo Julián Campoy Fernández

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p;
    float v;
    float t;
    float m;

    cout << "Please, enter the volume of the mass air: " << endl;
    cin >> v;

    cout << "Please, enter the pressure of the mass air: " << endl;
    cin >> p;

    cout << "Please, enter the temperature of the mass air: " << endl;
    cin >> t;

    m = (p * v)/ (0.37 *(t + 460));

    cout << "The mass pressure is: " << m << endl;
}
