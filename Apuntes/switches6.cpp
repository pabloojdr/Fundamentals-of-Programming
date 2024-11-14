#include <iostream>
using namespace std;

int main()
{
    int i = 3;

    cout << ++i * 2 << endl;

    i = 3;

    cout << i++ * 2 << endl;

    cout << i << endl;

    return 0;
}

//++i sums before using it,
//i++ after using the value of i, it increments it
