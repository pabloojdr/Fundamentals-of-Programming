//printmat.cpp
//pabloojdr     23-01-2022

#include <iostream>
#include <array>
using namespace std;

const int ROWS = 5;
const int COLUMNS = 5;

typedef array<array<int, COLUMNS>, ROWS> TMat;
TMat readmat(TMat& a);
void printmat(TMat a);

int main()
{
    TMat b;
    readmat(b);
    printmat(b);
}

TMat readmat(TMat& a){

    cout << "Please, enter the elements of the matrix: " << endl;

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            cin >> a[i][j];
        }
    }

    return a;
}

void printmat(TMat a){

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLUMNS; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
