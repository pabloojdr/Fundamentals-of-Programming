//string2intbase.cpp
//pabloojdr     26-01-2022

#include <iostream>
using namespace std;

int string2int(string s, int base);

int main()
{
    cout << string2int("FFFF", 16) << endl;

}


int string2int(string s, int base)
{
    int result = 0;
    for(int i = 0; i < s.length(); i++){

        if(s[i] >= 'A'){
            result = result * base + (s[i] - 'A' + 10);
        }

        else{
            result = result * base + (s[i] - '0');
        }

    }

    return result;
}
