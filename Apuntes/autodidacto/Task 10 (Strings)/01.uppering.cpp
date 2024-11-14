//uppering.cpp
//pabloojdr     26-01-2022

#include <iostream>
using namespace std;

string toUpper(string s);

int main()
{
    string u = "A string from the main()";
    toUpper(u);
}

string toUpper(string s)
{
    string r;
    for(int i = 0; i < s.length(); i++){
        r += toupper(s[i]);
    }

    cout << r << endl;
    return r;
}
