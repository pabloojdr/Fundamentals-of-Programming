//00.monthlenght.cpp
//Pablo Julián Campoy Fernández 10-10-2021

#include <iostream>
using namespace std;

/*6. C has not a special method to print the values true/false so it prints 1/0 for them. Ask the user
for an integer from 1 to 12, standing for the number of a month of the year. Then write true (1)
or false (0) depending on the month entered is a short (less than 31 days) or long. Don't use
conditionals, even if you know how. Use simple logical expressions. */

int main()
{
    int i;
    cout << "Enter a number from 1 to 12 (standing for the number of a month of the year): " << endl;
    cin >> i;

    bool isLongMonth = i == 1 or i == 3 or i == 5 or i == 7 or i == 8 or i == 10 or i == 12;
    cout << isLongMonth << " This is a Long Month" << endl;

       bool isShortMonth = i == 2 or i == 4 or i == 6 or i == 9 or i == 11;
    cout << isShortMonth << " This is a Short Month" << endl;


    return 0;
}
