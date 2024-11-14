//fillrandmat.cpp
//pabloojdr     23-01-2022

#include <iostream>
#include <array>
#include <time.h>
using namespace std;

const int NR = 10;
const int NC = 10;
const int RANDMAX = 20;

typedef array<array<int, NC>,NR> TMatrix;
void fillrandMat(TMatrix& m);
void printmat(TMatrix m);

int main()
{
    srand(time(NULL));
    TMatrix b;
    fillrandMat(b);
    printmat(b);
}

void fillrandMat(TMatrix& m){

    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            m[i][j] = rand() % RANDMAX;
        }
    }
}

void printmat(TMatrix m){
    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;

    }
}
