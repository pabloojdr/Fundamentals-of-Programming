//transpose.cpp
//pabloojdr     23-01-2022

#include <iostream>
#include <array>
using namespace std;

const int NR = 4;
const int NC = 4;

typedef array<array<int, NC>, NR> TMat;
void readMat(TMat& a);
void printMat(TMat& a);
void transpose(TMat& a);

int main()
{
    TMat b;
    readMat(b);
    printMat(b);
    cout << endl;
    transpose(b);


}

void readMat(TMat& a){

    cout << "Please, enter the 16 elements of the matrix: " << endl;

    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }
}

void printMat(TMat& a){
    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(TMat& a){
    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
