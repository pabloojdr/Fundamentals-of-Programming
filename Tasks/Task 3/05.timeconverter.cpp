//05.timeconverter.cpp
//Pablo Julián Campoy Fernández 15-10-2021

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int seconds_day = 86400;
    const int seconds_hours = 3600;
    const int seconds_minute = 60;
    const int seconds1 = 1;


    int input_seconds;
    int seconds;
    int minutes;
    int hours;
    int days;

    cout << "Please, enter an amount of seconds: " << endl;
    cin >> input_seconds;

    seconds = (((input_seconds % seconds_day) % seconds_hours) % seconds_minute) / seconds1;
    minutes = ((input_seconds % seconds_day) % seconds_hours) / seconds_minute;
    hours = (input_seconds % seconds_day) / seconds_hours;
    days = input_seconds / seconds_day;


    if (input_seconds > 0) {
        cout << "Your time is " << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;
    }
}
