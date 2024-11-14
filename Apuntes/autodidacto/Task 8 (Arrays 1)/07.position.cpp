//position.cpp
//pabloojdr     07-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 5;
typedef array<int, N> TVec;

void readArr(TVec& a);
int findpos(TVec a, int pos);

int main()
{
    TVec b;
    int n;

    readArr(b);
    cout << endl;

    cout << "Please, enter the number you want to know its position: ";
    cin >> n;

    cout << "The position of " << n << " is: " << findpos(b, n);

}

void readArr(TVec& a){
    cout << "Please, enter five integers: ";

    for(int i = 0 ; i < N; i++){
        cin >> a[i];
    }
}

int findpos(TVec a, int n){
    int pos = -1;
    for(int i = 1; i < N; i++){
        if(a[i] == n){
            pos = (i + 1);
        }


    }

    return pos;
}
