//06.glassofwine.cpp
//Pabloojdr  30-10-2021

#include <iostream>
using namespace std;

int main()
{
    int halfwidth;
    cout << "Enter the half of the wine glass width: ";

    while (cin >> halfwidth and halfwidth != 0) {

        cout << endl;

        for (int line = 0; line < halfwidth; ++line) {

            for (int i = 0; i <= line; ++i) cout << ' ';

            for (int i = 0; i < 2 * (halfwidth-line) + 1; ++i) cout << '&';

            cout << endl;
        }

        for (int line = 0; line < halfwidth; ++line) {

            for (int i = 0; i <= halfwidth; ++i) cout << ' ';

            cout << '&' << endl;
        }

        for (int line = 1; 3 * line <= halfwidth + 1 ; ++line) {

            for (int i = 0; i <= halfwidth - 3 * line; ++i) cout << ' ';

            for (int i = 0; i < 6 * line + 1;  ++i) cout << '&';

            cout << endl;
        }
    }
}
