//03.chessboard.cpp
//pabloojdr  08-11-2021

#include <iostream>
using namespace std;

int main()
{
    int boardsize = 8;
    int row;
    int col;

    for(row = 1; row <= boardsize; row++){

        for(col = 1; col <= boardsize; col++){
            if((col+row) % 2 == 0){
                cout << "W";
            }

            else{

                cout << "B";
            }
        }

         cout << endl;
    }

}
