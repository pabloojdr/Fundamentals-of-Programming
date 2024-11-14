//comparingstrings.cpp
//pabloojdr     08-02-2022

#include <iostream>
using namespace std;


int strcomp(string s1, string s2);
void readstring(string& s);

int main()
{
    string a, b;
    readstring(a);
    readstring(b);

    cout << strcomp(a, b);

}

void readstring(string& s){
    cout << "Please, enter a word: ";
    cin >> s;
    cout << endl;
}

int strcomp(string s1, string s2){
    int result;

    if(s1.length() == s2.length()){
        result = 0;
    }

    else if(s1.length() < s2.length()){
        result = -1;
    }

    else if(s1.length() > s2.length()){
        result = 1;
    }

    return result;
}
