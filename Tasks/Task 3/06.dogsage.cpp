//06.dogsage.cpp
//Pablo Julián Campoy Fernández 15-10-2021

/*5.- Write a program to calculate a dog’s age in dog’s years. For the first two years, a dog year is equal
to 10.5 human years. After that, each dog year equals 4 human years. For example:
Input a dog’s age in human years: 15
The dog’s age in dog’s years is 73*/

#include <iostream>
using namespace std;


int main()
{
    float humanyear;
    float dogyear1;
    float dogyear2;

    cout << "Please, enter the dog's age in human years: " << endl;
    cin >> humanyear;

    if (humanyear <= 2) {
        dogyear1 = humanyear * 10.5;
        cout << "Your dog's age in dog years is: " << dogyear1 << endl;
    }

    else if (humanyear > 2){
        dogyear2 = 2 * 10.5 + ((humanyear - 2) * 4);
        cout << "Your dog's age in dog years is: " << dogyear2 << endl;
    }
    return 0;
}
