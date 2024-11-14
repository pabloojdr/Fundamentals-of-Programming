//basicsarray.cpp
//pabloojdr     06-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 3;
typedef array<int, N> TVec;

void printArr(TVec a);
void readArr(TVec& a);
TVec readArray(TVec& a);

int main()
{
    TVec b;
    readArr(b);
    printArr(b);
    cout << endl;
    readArray(b);
    printArr(b);
}


void printArr(TVec a){
    for(int i = 0; i < N; i++){
        cout << a[i] << " ";
    }
}

void readArr(TVec& a){
    cout << "Please, enter three integers: " << endl;

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
}

TVec readArray(TVec& a){
    cout << "Please, enter three integers: " << endl;

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    return a;
}

