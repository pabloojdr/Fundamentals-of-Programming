#include <iostream>
using namespace std;

int main()
{
    int side;

    cout << "Please, enter the number of the square's side: ";
    cin >> side;

    for(int i = 0; i < side; ++i){
        cout << "*";
    cout << endl;
    }

    for(int j = 0; j < side - 2; ++j){
            cout << "*";

            for(int j = 0; j < side - 2; ++j){
                cout << " ";
            }

            cout << "*" << endl;
        }

    for(int i = 0; i < side; ++i){
            cout << "*";

            cout << endl;
        }

    return 0;
}
