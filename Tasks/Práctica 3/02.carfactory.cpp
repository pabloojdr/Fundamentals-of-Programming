//02.carfactory.cpp
//pabloojdr  08-11-2021

#include <iostream>
using namespace std;

int main()
{
    int N_models;
    int prices;
    float sum = 0;
    float counter = 0;
    float average;

    cout << "Please, enter the number of models: " << endl;
    cin >> N_models;

    cout << "Please, enter the price of each model in €: " << endl;

    while (cin >> prices and counter < (N_models - 1)){
        sum += prices;
        counter++;
    }

    average = sum / counter;

    cout << "The average price of these " << N_models << " models is: " << average << endl;
}
