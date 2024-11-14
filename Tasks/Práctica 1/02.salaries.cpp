//02.salaries.cpp
//Pablo Julián Campoy Fernández 18-10-2021

#include <iostream>
using namespace std;

const float tax = 25.0;
const float HOURLY_PAY = 60.0;

int main()
 {
    float hours;
    float days;
    float total;
    float net;

    cout << "Enter the number of worked hours: ";
    cin >> hours;
    cout << "Enter the number of worked days: ";
    cin >> days;
    total = hours * days * HOURLY_PAY;
    net = total - tax;
    cout << " The gross amount to be paid is: ";
    cout << total << endl;
    cout << " The net amount to be paid is: ";
    cout << net << endl;

 return 0;
}
