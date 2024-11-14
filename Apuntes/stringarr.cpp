

#include <iostream>
#include <array>
using namespace std;

int main()
{
    string s = "Pablo Campoy";
    string name;

    int i = 0;
    while (i < s.length() and s[i] !=' '){
        ++i;
    }

    if(i < s.length()){
            name = s.substr(0, i);
        }

        else {
            name = s;
        }
        cout << name << endl;
    return 0;
}
