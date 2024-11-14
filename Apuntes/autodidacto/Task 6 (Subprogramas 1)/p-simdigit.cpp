#include <iostream>
using namespace std;


int digit(int number, int p, int base);

int main()
{
    int n;
    int p;
    int b;

    cout << "Please, enter a number: ";
    cin >> n;
    cout << "Please enter the p-sim number you want to know: ";
    cin >> p;
    cout << "Please, enter the base: ";
    cin >> b;

    cout << "The digit of (" << n << ", " << p << ", " << b << ") you are looking for is: " << digit(n, p, b) << endl;


}

int digit(int number, int p, int base){


    for(int i; i < p; ++i){}

        p = (number % base);



    return p;
}
