//06.taxes.cpp
//Pablo Julián Campoy Fernández


#include <iostream>
using namespace std;

const float taxes = 0.12;
const float discount_amount = 300;
const float discount_per = 0.05;

int main()
{
    float price;
    float discount = 0;
    cout << "Enter base price: ";
    cin >> price;
    price -= price * taxes;
    if (price > discount_amount) {
        discount = price * discount_per;
        price -= discount;
    }
    cout << "Retail price: " << price
         << " euros the discount of " << discount
         << " euros has been applied already" << endl;
    return 0;
}
