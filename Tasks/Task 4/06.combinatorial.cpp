//06.combinatorial.cpp
//Pablo Julián Campoy Fernández 22-10-2021

#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;
    int X;
    int Y;
    int R;
    int comb;

    cout << "Please, enter two integers: " << endl;
    cin >> x;
    cin >> y;

    while (x != 0 and y != 0){
        X *= x;
        x++;

        Y *= y;
        y++;

        R = (X) - (Y);

        comb = X / (Y * (R));

        if (x == 0){
            cout << "This is not possible." << endl;
        }

        else if (y == 0){
            cout << "The combinatorial number is 0." << endl;
        }
        x--;
        y--;



    }

    cout << "Your combinatorial number is: " << comb << endl;
}
