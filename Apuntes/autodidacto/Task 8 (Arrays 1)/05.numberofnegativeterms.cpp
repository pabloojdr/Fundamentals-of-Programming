//numberofnegativeterms.cpp
//pabloojdr     06-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

void readArr(TVec& a);
int numberNegTerms(TVec& a);

int main()
{
    TVec b;
    readArr(b);
    cout << "The number of negative elements in the array is: " << numberNegTerms(b) << endl;
}

void readArr(TVec& a){
    cout << "Please, enter five integers: ";

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
}

int numberNegTerms(TVec& a){
    int num = 0;

    for(int i = 0; i < N; i++){
        if(a[i] < 0){
            num++;
        }

        else{
            num += 0;
        }
    }

    return num;
}
