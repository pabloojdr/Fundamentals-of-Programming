#include <iostream>
using namespace std;

const double tax = 25.0;
const int HOURLY_PAY = 60.0;

int main(){
    double hours , days , total , net;

    cout << "Enter the number of worked hours: ";
    cin >> hours;
    cout << "Enter the number of worked days: ";
    cin >> days;

    total = hours * days * HOURLY_PAY;
    net = total - tax;

    cout << "The gross amount to be paid is: ";
    cout << total << endl ;
    cout << "The net amount to be paid is: ";
    cout << net << endl ;

    return 0;

}
