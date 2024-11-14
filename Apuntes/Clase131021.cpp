/*#include <iostream>
using namespace std;

// typedefs
typedef unsigned short int Picha;

int main()
{
 Picha width = 5;
 Picha length;
 length = 10;
 Picha area = width * length;
 cout << "width: " << width << endl;
 cout << "length: " << length << endl;
 cout << "area: " << area << endl;
 cout << "You've created a Picha" << endl;
 }
*/

/*#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number a number higher than 100: " << endl;
    cin >> n;

    if(n > 100) {
        cout << "Vamono surmano ahi ta" << endl;
    }

    if(n < 100) {
        cout << "Picha ma grande que 100";
    }
}
*/

/*#include <iostream>z
#include <cmath>
using namespace std;

int main()
{
    char letter;
    cout << "Enter a letter: " << endl;
    cin >> letter;

    if(letter >= 'a' and letter <= 'z') {
           letter += 'A' - 'a';
            cout << letter << " This is the letter in uppercase" << endl;

    }

}
*/

/*#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please, enter a number: " << endl;
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even" << endl;
    }
    else if(number % 2 != 0) {
        cout << "The number is odd" << endl;
    }
}
int main()
{
    int number;

    cout << "Please, enter a number: " << endl;
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is even" << endl;
    }
    else {
        cout << "The number is odd" << endl;
    }
}
*/

#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Please, enter a number: " << endl;
    cin >> a;

    if (a < 5) {
        cout << "Failed" << endl;
    }

    else if (a < 6) {
        cout << "D" << endl;
    }

    else if (a < 8) {
        cout << "C" << endl;
    }

    else if (a < 9){
        cout << "B" << endl;
    }

    else if (a < 10){
        cout << "A" << endl;
    }
    else if(a == 10) {
        cout << "A+" << endl;
    }
    else {
        cout << "This can not be your result, dumbass" << endl;
    }
}



