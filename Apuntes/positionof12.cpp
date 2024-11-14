//positionof12.cpp
//Pablo Julián Campoy Fernández  27-10-2021


#include <iostream>
using namespace std;

int main()
{
    int x;
    int cnt = 0;
    int posLast = 0;
    int posFirst = 0;
    bool alreadyEntered = false;

    while (cin >> x and x != 0){
        ++cnt;
        if(x == 12){
            posLast = cnt;

            if (not alreadyEntered){
                posFirst = cnt;
                alreadyEntered = true;
            }
        }
    }

    if (posLast == 0) {
        cout << "12 never entered." << endl;
    }

    else {
        cout << "Last time 12 was seeing: " << posLast << endl;
        cout << "First time 12 was seeing: " << posFirst << endl;
    }
    return 0;

}
