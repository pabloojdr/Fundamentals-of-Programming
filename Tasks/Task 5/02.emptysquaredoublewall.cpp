//02.emptysquaredoublewall.cpp
//Pabloojdr  29-10-2021

#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int col = 1;

    for(row = 1; row <= 6; ++row){

    for (col = 1; col <= 6; ++col){
        if(col == 1 or col == 2 or col == 5 or col == 6 or row == 1 or row == 2 or row == 5 or row == 6){
            cout << "*";
    }

    else {
        cout << " ";
    }
    }

    cout << endl;

    }

    return 0;
}

