//scalarproduct.cpp
//pabloojdr     06-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 3;
typedef array<float, N> TVec;

void readArr(TVec& a);
float scalarProduct(TVec a, TVec b);

int main()
{
    TVec b;
    TVec c;

    readArr(b);
    readArr(c);

    cout << "The scalar product of the two vectors is: " << scalarProduct(b, c);

}


void readArr(TVec& a){
    cout << "Please, enter three integers: ";
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
}

float scalarProduct(TVec a, TVec b){
    float sum = 0.0;

    for(int i = 0; i < N; i++){
        sum += (a[i] * b[i]);
    }

    return sum;
}
