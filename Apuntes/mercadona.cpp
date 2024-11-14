#include <iostream>
using namespace std;

int main()
{
    float price;
    float s = 0;
    float average;
    float counted;
    float highest = 0;
    float lowest = 0;

    cout << "New Costumer, enter prices: " << endl;

    while (cin >> price and price != 0){
        s += price; //s = s + price
        ++counted;

        if(counted == 0){
            highest = lowest = price;
        }

        else if(highest < price){
            highest = price;
        }

        else if (lowest > price){
                lowest = price;
        }

    }
    average = s/counted;
    cout << "Total: " << s << endl;
    cout << "The average is: " << average << endl;
    cout << "The highest price is: " << highest << endl;
    cout << "The lowest price is: " << lowest << endl;
}
