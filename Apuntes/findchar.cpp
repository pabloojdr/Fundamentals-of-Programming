

#include <iostream>
#include <array>
using namespace std;

int rfind(string s, char c);

int main()
{
    string s = "/Users/me/myfile.cpp";

    int pos = rfind(s, '/');
    cout << pos << endl;
    cout << s.substr(pos + 1, s.length() - pos - 1) << endl;

    return 0;
}

int rfind(string s, char c)
{
    int i = s.length() -1;
    while (i >= 0 and s[i] != c){
        --i;
    }
    return i;
}
