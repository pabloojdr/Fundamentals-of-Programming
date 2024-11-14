//identmatrix.cpp
//pabloojdr     23-01-2022

#include <iostream>
#include <array>
using namespace std;

const int NR = 200;
const int NC = 200;

typedef array<array<int, NC>, NR> TMat;
TMat identSqMat(TMat& a);
void printMat(TMat& a);

int main()
{
    TMat b;
    identSqMat(b);
    printMat(b);
}

TMat identSqMat(TMat& a){
    for(int i = 0; i < NR; i++){
        for(int j = 0; j < NC; j++){
            if(i == j){
                a[i][j] = 1;
            }

            else{
                a[i][j] = 0;
            }
        }
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


