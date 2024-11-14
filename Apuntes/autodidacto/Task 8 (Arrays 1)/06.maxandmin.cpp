//maxandminim.cpp
//pabloojdr     06-02-2022

#include <iostream>
#include <array>
using namespace std;

const int N = 4;
typedef array<int, N> TVec;

void readArr(TVec& a);
int maxelem(TVec a);
int minelem(TVec a);

int main()
{
    TVec b;

    readArr(b);

    cout << "The maximun number is: " << maxelem(b) << endl;
    cout << "The minimun number is: " << minelem(b);

}

void readArr(TVec& a){
    cout << "Please, enter four integers: ";

    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
}

int maxelem(TVec a){
    int maxi = a[0];
    for(int i = 0; i < N; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }

    return maxi;
}

int minelem(TVec a){
    int mini = a[0];

    for(int i = 0; i < N; i++){
        if(a[i] < mini){
            mini = a[i];
        }
    }

    return mini;
}
