#include <iostream>
using namespace std;

int main()
{
    char c = 'M';
    cout << "-> " << c << endl;
    cout << "Enter three letters: " << endl;
    cin >> c;
    cout << "-> " << c << endl;
    c = cin.get();
    cout << "-> " << c << endl;

    cin.get(c);
    cout << "-> " << c << endl;
}
