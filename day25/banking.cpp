#include <iostream>
#include "banking.h"
using namespace std;

void deposit(double &balance, double amount) {
    balance += amount;
}

bool withdraw(double &balance, double amount) {
    if(amount <= balance && amount <= 10000) {
        balance -= amount;
        return true;
    }
    return false;
}

void printBalance(double balance) {
    cout << "\nBalance: " << balance;
}
