//03.cylinder.cpp
//Pablo Julián Campoy Fernández 06/10/2021

3.
#include <iostream> 
using namespace std;

const float PI = 3.141592;

int main()
{
    float radio;
    float height;
    float volumen;
    cout << "Enter the cylinder radio: ";
    cin >> radio; 
    cout << "Enter the cylinder height: ";
    cin >> height;
    volumen = PI * radio * radio * height;
    cout << "The volume of a cylinder with radio " << radio
    << " is " << volume << endl;
   
    return 0; 
}