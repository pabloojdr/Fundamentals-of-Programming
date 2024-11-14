#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x;
    cout << "Enter a number (0 ends): ";
    while ( cin >> x and x > 0) {
        cout << sqrt(x) << endl;
    }
    return 0;
}
