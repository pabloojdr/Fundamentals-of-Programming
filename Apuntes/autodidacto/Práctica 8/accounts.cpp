//accounts.cpp
//pabloojdr     23-01-2022

#include <iostream>
#include <array>
using namespace std;

const int MAXNAMES = 10;
typedef array<string, MAXNAMES> TNames;
typedef array<int, MAXNAMES> TAmount;
void readnanda(TNames& b, TAmount& a);

int main()
{
    TNames names;
    TAmount amounts;
    int amount = 0;
    readnanda(names, amounts);
    cout << names[1];


}


void readnanda(TNames& b, TAmount& a){
    for(int i = 0; i < MAXNAMES; i++){
        if(b[i] != "END"){
            cout << "Name: ";
            cin >> b[i];
            cout << "Amount: ";
            cin >> a[i];
            cout << endl;

        }

    }
}


