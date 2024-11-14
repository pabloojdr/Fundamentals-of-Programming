//01.greatestprime.cpp
//pabloojdr     21-01-2022

#include <iostream>
#include <array>

using namespace std;

const int N = 200;

typedef array<int,N> TArr;

struct TElements{
    TArr arr;
    int elements;
};

void readarr(TElements& a);
void greatestprime(TElements a);
void printgreatest(TElements a);


int main()
{
    TElements num;


    readarr(num);
    greatestprime(num);
    printgreatest(num);
}


void readarr(TElements& a)
{
    cout << "Please, enter integers (enter 0 to stop): ";
    int i = 0;
    while(cin >> a.arr[i] and a.arr[i] != 0){
        ++i;
        ++a.elements;
    }
}


void greatestprime(TElements a){
    int maxi = a.arr[0];
    for(int i = 0; i < a.elements; i++){
        int j = 2;
        if(a.arr[i] % j == 0){
            cout << "No prime numbers entered.";
            }

        else if(a.arr[i] % j != 0 and a.arr[i] > maxi){
            a.arr[i] = maxi;
            cout << "The greatest prime is: " << maxi;
            }

            j++;



    }

}


void printgreatest(TElements a){
    int maxi = a.arr[0];

    for(int i = 0; i < a.elements; i++){
        if(a.arr[i] > maxi and a.arr[i] % 2 != 0){
            maxi = a.arr[i];
        }
    }
        cout << "The greatest prime entered is: " << maxi;
}



