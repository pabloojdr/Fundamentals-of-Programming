#include <iostream>;
using namespace std;

int main()
{
    int rows = 4;
    int columns = 4;


    for(int i = 1; i <= rows; i++){
            cout << "*";

        for(int j = 1; j < columns; ++j){
            cout << "*";
            }

        cout << endl;
        }

    return 0;
}
