//04.evalofs.cpp
//Pablo Julián Campoy Fernández 22-10-2021

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float n;
    float N = 1;
    float s;
    int i = 1;
    int p = 1;
    const int MAXPOW = 10;

    cout << "Please, enter a number: " << endl;
    cin >>  n;

    while (p < MAXPOW) {

        N *= N * n ;
        s = 1 + (pow(n, p) / N);
        N++;
        i++;
        p++;
        cout << s << endl;

    }


    return 0;

}
