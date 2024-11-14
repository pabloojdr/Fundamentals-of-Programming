//03.threenumbers.cpp
//Pablo Julián Campoy Fernández 25-10-2021

#include <iostream>
using namespace std;

int main()
{
    int n;
    int m;
    int c;

    cout << "Please, enter three integers: " << endl;
    cin >> n;
    cin >> m;
    cin >> c;

    if (n > m and n > c and m > c){

        cout << "Ordered: " << c <<", "<<  m << ", " << n << endl;

    }

     else if (n > m and n > c and c > m){

        cout << "Ordered: " << m <<", "<<  c << ", " << n << endl;

    }

     else if (m > n and m > c and n > c){

        cout << "Ordered: " << c <<", "<< n << ", " << m << endl;

    }

      else if (m > n and m > c and c > n){

        cout << "Ordered: " << n <<", "<<  c << ", " << m << endl;

    }

      else if (c > n and c > m and n > m){

        cout << "Ordered: " << m <<", "<< n << ", " << c << endl;

    }

      else if (c > n and c > m and m > n){

        cout << "Ordered: " << n <<", "<< m << ", " << c << endl;

    }


}
