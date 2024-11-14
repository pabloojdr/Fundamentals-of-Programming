//01.task4.cpp
//Pablo Julián Campoy Fernández 22-10-2021

#include <iostream>
using namespace std;

int main()
{
    float number;
    float biggest = 0;
    float smallest = 0;
    float a_mean;
    float sum = 0;
    int counter = 0;
    int N;

    cout << "Please, write the amount of numbers that are included in your serie: " << endl;
    cin >> N;
    cout << "Please, enter the serie of numbers: " << endl;



    while (counter != N){
        cin >> number;
        sum += number;

        if (counter == 0){
            biggest = number;
            smallest = number;
        }

        if (biggest < number){
            biggest = number;
    }

        if (smallest > number){
            smallest = number;
    }
        ++counter;

    }



    a_mean = sum/counter;

    cout << "The biggest number is: " << biggest << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << "The arithmetic average is: " << a_mean << endl;


}
