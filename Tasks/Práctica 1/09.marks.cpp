//09.marks.cpp
//Pablo Julián Campoy Fernández  18-10-2021

#include <iostream>
using namespace std;

int main()
{
    float c1;
    float c2;
    float f;
    float valuef;
    float F;

    cout << "Please, enter the score of your first control test: " << endl;
    cin >> c1;

    cout << "Please, enter the score of your second control test: " << endl;
    cin >> c2;

    cout << "Please, enter the score of your final test: " << endl;
    cin >> f;

    valuef = (10 - (c1 * 0.1 + c2 * 0.2)) / 10;

    F = c1 * 0.1 + c2 * 0.2 + f * valuef;

    cout << "Your final score is: " << F << endl;


}
