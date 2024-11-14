// 01.questions.cpp
// Pablo Julián Campoy Fernández 14-10-2021

#include <iostream>
#include <cmath>
using namespace std;

/*/*2 The next piece of code asks the user for 2 float numbers and then asks for an algebraic operation
to make with them.
Add the operations power (ˆ) and modulus (%) and try it. Re-type it instead of copy-paste it.
*/


int main()
{
    float a, b, r;
    char op;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    cout << "Enter a char for the operation (+, -, *, /, ^, %): " << endl;
    cin >> op;

    if (op == '+') {
        r = a+b;
    }
    else if (op == '-') {
        r = a-b;
    }
    else if (op == '*') {
        r = a*b;
    }
    else if (op == '/') {
        r = a/b;
    }
    else if (op == '^') {
        pow(a, b);
    }
    else if (op == '%') {
        int (r) = int(a) % int(b);
    }

    else {
        cout << "Error: wrong operation. You can only use + - * / ^ %" << endl;
        r = 0;
    }

    cout << "r: " << r << endl;

    return 0;
}
