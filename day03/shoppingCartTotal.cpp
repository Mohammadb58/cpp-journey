#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout << "--------------------------------------------------\n";
    cout << "Welcome to the Shopping Cart Total program.\n";

    double price1, price2, tax;
    cout << "Please enter the price of the first item: ";
    cin >> price1;
    /* if the user entred "5 5"
        we will skip the second cout */
    cout << "Please enter the price of the second item: ";
    cin >> price2;
    cout << "Please enter the sales tax: ";
    cin >> tax;
    double taxTotal = (((price1 + price2) * tax) / 100);
    double total = price1 + price2 + taxTotal;
    double noTaxTotal = (price1 + price2);
    cout << "Your total before tax is: $" << noTaxTotal << '\n';
    cout << "Your total after tax is: $" << total << '\n';
    return 0;
}