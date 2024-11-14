//reversearray.cpp
//pabloojdr     06-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 3;
typedef array<int, N> TVec;

void readArr(TVec& a);
void printArr(TVec a);
void printRevArr(TVec a);


int main()
{
    TVec b;

    readArr(b);
    printArr(b);
    cout << endl;
    printRevArr(b);

}

void readArr(TVec& a){
    cout << "Please, enter three integers: ";

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

}


void printArr(TVec a){
    cout << "The array is:";
    for(int i = 0; i < N; i++){
        cout << " " << a[i];
    }
}

void printRevArr(TVec a){
    cout << "The reverse array is:";
    for(int i = 2; i >= 0; i--){
        cout << " " << a[i];
    }
}
