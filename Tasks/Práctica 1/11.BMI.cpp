//11.BMI.cpp
//Pablo Julián Campoy Fernández  18-10-2021

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float weight;
    float height;
    float BMI;

    cout << "Please, enter your weight (kg): " << endl;
    cin >> weight;

    cout << "Please, enter your height (m): " << endl;
    cin >> height;

    BMI = weight / pow(height, 2);

    cout << "Your Body Mass Index is: " << BMI << " kg/m^2." << endl;
}
