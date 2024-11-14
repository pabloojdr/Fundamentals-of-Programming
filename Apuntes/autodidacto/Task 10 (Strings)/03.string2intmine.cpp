//string2intmine.cpp
//pabloojdr     26-01-2022

#include <iostream>
using namespace std;

int stringtoint(string s);

int main()
{
    cout << stringtoint("123") << endl;

}

int stringtoint(string s)
{
    int result = 0;

    for(int i = 0; i < s.length(); i++){
        result = 10 * result + s[i] - '0';
    }

    return result;
}
