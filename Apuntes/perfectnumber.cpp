//perfectnumber.cpp
//pabloojdr  3-11-2021

#include <iostream>
using namespace std;

int main()
{
    int n = 28;
    int n = 0;

    for(int d = 1; d < n; ++d){

        if(n % d == 0){
            s += d;
        }

        if(s == n){
            cout << "It's perfect." << endl;
        }

        else {
            cout << "It's not perfect." << endl;
        }
    }


}
