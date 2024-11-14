//08.teeth.cpp
//Alberto Ramírez Collado       31-10-2021

#include <iostream>
using namespace std;

int main() {
    int h, t;

    cout << "Enter height: ";
    cin >> h;
    
    cout << "Enter number of teeth: ";
    cin >> t;
    
cout << endl;
    for (int row = 1; row <= h; row++) {
      for (int t2 = 1; t2 <= t; t2++) {
        for (int i = 0; i < (h - row); i++)
            cout << ' ';
        cout << '*';
        for (int i = 0; i < (2 * (row - 1) - 1); i++)
            cout << ' ';
        if (row > 1 and row < h)
            cout << '*';
        for (int i = 0; i < (h - row - 1); i++)
            cout << ' ';
      }
      cout << endl;
    }

    return 0;
}