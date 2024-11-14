//01.sumsUp2N.cpp
//pabloojdr  08-11-2021


#include <iostream>
using namespace std;

int main()
{
    int N;
    int sum = 0;
    int i = 1;
    cout << "Please, enter the limit N: " << endl;
    cin >> N;

    for (i = 1; i <= N; i++){
        sum += i;

    }

    cout << "The sum is: " << sum << endl;

    while (i < N){
        sum += i;
        i++;
    }

    cout << "The sum is: " << sum << endl;


    do {
        sum += i;
        ++i;



    }  while(N > i);

    cout << "The sum is: " << sum << endl;


}
