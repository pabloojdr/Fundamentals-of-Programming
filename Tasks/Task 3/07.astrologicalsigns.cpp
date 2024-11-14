//07.astrologicalsigns.cpp
//Pablo Julián Campoy Fernández 14-10-2021

#include <iostream>
using namespace std;

int main()
{
    int day;
    int month;

    cout << "Please, enter the day you were born: " << endl;
    cin >> day;
    cout << "Please, enter the number of the month you were born: " << endl;
    cin >> month;

    if((day >= 21 and month == 3) or (day <= 20 and month == 4)) {
        cout << "Your astrological sign is Aries" << endl;
    }

    else if ((day >= 20 and month == 4) or (day <= 21 and month == 5)) {
        cout << "Your astrological sign is Taurus" << endl;
    }

    else if ((day > 21 and month == 5) or (day <= 21 and month == 6)) {
        cout << "Your astrological sign is Gemini" << endl;
    }

    else if ((day > 21 and month == 6) or (day <= 22 and month == 7)) {
        cout << "Your astrological sign is Cancer" << endl;
    }

    else if ((day > 22 and month == 7) or (day <= 23 and month == 8)) {
        cout << "Your astrological sign is Leo" << endl;
    }

    else if ((day > 23 and month == 8) or (day <= 22 and month == 9)) {
        cout << "Your astrological sign is Virgo" << endl;
    }

    else if ((day > 22 and month == 9) or (day <= 23 and month == 10)) {
        cout << "Your astrological sign is Libra" << endl;
    }

    else if ((day > 23 and month == 10) or (day <= 22 and month == 11)) {
        cout << "Your astrological sign is Scorpio" << endl;
    }

    else if ((day > 22 and month == 11) or (day <= 21 and month == 12)) {
        cout << "Your astrological sign is Sagittarius" << endl;
    }

    else if ((day > 21 and month == 12) or (day <= 20 and month == 1)) {
        cout << "Your astrological sign is Capricorn" << endl;
    }

    else if ((day > 20 and month == 1) or (day <= 19 and month == 2)) {
        cout << "Your astrological sign is Aquarius" << endl;
    }

    else if ((day > 19 and month == 2) or (day < 21 and month == 3)) {
        cout << "Your astrological sign is Piscis" << endl;
    }

    return 0;
}
