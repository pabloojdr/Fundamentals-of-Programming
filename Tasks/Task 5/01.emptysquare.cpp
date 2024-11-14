//01.emptysquare.cpp
//Pabloojdr  29-10-2021

#include <iostream>
using namespace std;

int main()
{
    int row = 1;
    int col = 1;

    for(row = 1; row <= 5; ++row){

    for (col = 1; col <= 5; ++col){
        if(col == 1 or col == 5 or row == 1 or row == 5){
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
