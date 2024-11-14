//alumnheights.cpp
//pabloojdr     21-01-2022

#include <iostream>
#include <array>
using namespace std;

const int T = 5;
typedef array<float, T>TVec;
void readArr(TVec& a);
float printmedia(TVec a);

int main()
{
    TVec b;
    readArr(b);
    printmedia(b);

    cout << "The heigths' media is: " << printmedia(b);


}

void readArr(TVec& a){

    cout << "Please, enter the alumns' height: " << endl;

    for(float i = 0.0; i < T; i++){
        cin >> a[i];
    }

}

float printmedia(TVec a){

    float media = 0.0;

    for(float i = 0; i < T; i++){
    media += (a[i]/T);
    }

    return media;
}
