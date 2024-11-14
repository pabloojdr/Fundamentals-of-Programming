//n-thintegerpower.cpp
//pabloojdr     18-01-2022

#include <iostream>
using namespace std;


float powconditions(float x, int n);

int main()
{
    float x;
    int n;

    cout << "Please, enter a number: " ;
    cin >> x;

    cout << "Please, enter an exponent (positive, negative or 0): ";
    cin >> n;

    cout << "The number you are looking for is: " << powconditions(x, n) << endl;

    return 0;

}


float powx(float x, int n);
float powconditions(float x, int n)
{
    if(n < 0){
        return 1/powx(x, -n);
    }

    else{
        return powx(x, n);
    }
}

float powx(float x, int n)
{
    float r = 1;

    for(int i = 1; i <= n; i++){
        r *= x;

    }


    return r;
}



