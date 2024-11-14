//10.timetable.cpp
//Pabloojdr  31-10-2021

#include <iostream>
#include <iomanip>
using namespace std;

const int one = 1;
const int last = 10;

int main()
{
    for (int row = one; row <= last; row++) {

        for (int col = one; col <= last; col++)
            cout << setw(4) << row * col;

        cout << endl;
    }

    return 0;
}
