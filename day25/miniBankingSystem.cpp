#include <iostream>
#include "banking.h"
using namespace std;

int main() {
    double balance = 500;
    deposit(balance, 200);
    withdraw(balance, 100);
    printBalance(balance);
    return 0;
}

