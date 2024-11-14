//01.largestinteger.cpp
//pabloojdr  29-11-2021

#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Please, enter two integers: " << endl;
    cin >> a >> b;

    if (a < b){
        cout << "The largest integer is " << b << endl;
    }

    else {
        cout << "The largest integer is " << a << endl;
    }

    int c, d, e, f;

    cout << "Please, enter four integers: " << endl;
    cin >> c >> d >> e >> f;

    if(c >> d and c >> e and c >> f){
        cout << "The largest integer is: " << c << endl;
    }

    else if(d >> c and d >> e and d >> f){
        cout << "The largest integer is: " << d << endl;
    }

    else if(e >> c and e >> d and e >> f){
        cout << "The largest integer is: " << e << endl;
    }

    else {
        cout << "The largest integer is: " << f << endl;
    }

    return 0;
}
