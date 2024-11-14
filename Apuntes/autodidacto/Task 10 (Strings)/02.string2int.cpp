//string2int.cpp
//pabloojdr     23-01-2022

#include <iostream>
using namespace std;

int str2int(string s, int base=10);

int main()
{
    cout << str2int("121231") << endl;
    cout << str2int("1111", 2) << endl;
    cout << str2int("77", 8) << endl;
    cout << str2int("A", 16) << endl;
    cout << str2int("FFFF", 16) << endl;
    return 0;
}

int str2int(string s, int base)
{
    int r = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'A')
            r = r * base + (s[i] - 'A' + 10);
        else
            r = r * base + (s[i] - '0');
    }
    return r;
}
