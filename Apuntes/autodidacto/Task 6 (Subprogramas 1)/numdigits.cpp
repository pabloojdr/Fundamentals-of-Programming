//This program reads a number and a base (number, base), then it will return you the base number. For example: (2021, 10) = 4.

#include <iostream>
using namespace std;


int numberdigits(int number, int base);

int main()
{
    int n;
    int b;

    cout << "Please, enter a number: ";
    cin >> n;
    cout << "Please, enter a base: ";
    cin >> b;

    cout << "The digit of (" << n << ", " << b << ") is: " << numberdigits(n, b) << endl;
}


int numberdigits(int number, int base){
    int digit = 0;

    while(number > 0){
        number /= base;
        digit++;
    }

    return digit;
}

