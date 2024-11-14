//rhombus.cpp
//pabloojdr  3-11-2021

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Please, enter the side of the rhombus: " << endl;
    cin >> n;

    for (int row = 1; row <= n; row++){

        for(int i = 0; i < n - row; ++i){ //Hay n rows en la mitad del del rombo. Hay n - row espacios en la mitad del rombo. i es el numero de la row, es un counter (no lo usamos).
            cout << " ";
        }

        for(int i = 0; i < 2 * row - 1; ++i){
            cout << "*";
        }

        cout << endl;
    }

    for(int row = 1; row <= n; ++row){

        for(int i = 0; i < row; ++i){
            cout << " ";
        }

        for(int i = 0; i < 2 * (n - row) - 1; ++i){
            cout << "*";
        }

        cout << endl;
    }

}
