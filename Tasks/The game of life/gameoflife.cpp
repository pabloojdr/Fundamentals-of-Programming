//gameoflife.cpp
//pabloojdr     16/01/2022


#include <iostream>
#include <array>
#include <time.h>
#include <stdlib.h>
#include <chrono>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
using namespace std;

const int NCOLUMS = 100;
const int NROWS = 40;
typedef array<array<int,NCOLUMS>,NROWS> TMatrix;
TMatrix fillrandmat();
void printmat(TMatrix a);
TMatrix condition(TMatrix& a, TMatrix& b);
void newgeneration(TMatrix a, int n);


int main()
{
    srand (time(NULL));
    int n;
    cout << "Please, enter the number of generations you want to create: " << endl;
    cin >> n;
    cout << "First generation (random): " << endl;
    TMatrix mat = fillrandmat();
    printmat(mat);

    newgeneration(mat, n);

}


TMatrix fillrandmat(){
    TMatrix a;

    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLUMS; j++){
            a[i][j] = rand() % 2;
        }
    }

    return a;
}

void printmat(TMatrix a){


    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLUMS; j++){
        if (a[i][j] == 0){
            cout << " ";

        }

        else if(a[i][j] == 1){
            cout << "*";
        }
        }
        cout << endl;
    }

}

TMatrix condition(TMatrix& a){
    int sum = 0;
    TMatrix b = a;

    for(int i = 0; i < NROWS; i++){
        for(int j = 0; j < NCOLUMS; j++){
            sum = a[i-1][j-1]+a[i][j-1]+a[i+1][j-1]+a[i-1][j]+a[i+1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1];

            if(a[i][j] == 1 and sum < 2){
                b[i][j] = 0;
            }
            else if(a[i][j] == 1 and sum ==2 or sum == 3){
                b[i][j] = 1;
            }
            else if(a[i][j] == 1 and sum > 3){
                b[i][j] = 0;
            }
            else if(a[i][j] == 0 and sum == 3){
                b[i][j] = 1;
            }
        }
    }


    return b;
}

void newgeneration(TMatrix a, int n){
    for(int i = 0; i < n; i++){

        usleep(1000000);
        system("CLS");

        TMatrix newmat = condition(a);
        cout << endl;
        cout << "The new generation is: " << endl;

        printmat(newmat);





        a = newmat;
    }
}
