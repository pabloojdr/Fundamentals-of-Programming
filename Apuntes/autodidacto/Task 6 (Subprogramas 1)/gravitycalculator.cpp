//gravitycalculator.cpp
//pabloojdr     19-01-2022

#include <iostream>
using namespace std;

const float G = 6.67428e-11;
const float earthmass = 5.974e24;
const float earthradio = 6378140;
const float geostationary = 35786000;
float gravity(float m1, float m2, float d);

int main()
{
    float m2;

    cout << "Please, enter the mass of the body you want to calculate its acceleration: ";
    cin >> m2;

    cout << "The acceleration of the body is: " << gravity(earthmass, m2, earthradio) << endl;
    cout << "The geostationary acceleration of the body is: " << gravity(earthmass, m2, geostationary);


}

float gravity(float m1, float m2, float d)
{
    float Fg;

    Fg = ((-G)*m1*m2)/(d * d);

    return Fg;
}
