//02.returnthedigit.cpp
//pabloojdr  10/11/2021

#include <iostream>
using namespace std;

int numdigits (int n, int base = 10);
{
    int counter = 1;

        while (n > 0){
        n /= base;
        counter++;
    }

    return counter;

}


int main()
{
    int n;

    cout << "Please, enter a number: " << endl;
    cin >> n;


}
