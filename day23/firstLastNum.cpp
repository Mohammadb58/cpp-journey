#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    int num = 0, numCopy = 0, lastDigit = 0, firstDigit = 0;
    string strNum;
    cout << "Please enter a 2 digit positive number, " << "\n1. first digit is odd!" << "\n2. last digit is even!";
    cout << "\nNumber: ";
    cin >> num;

    while (num <= 9){
        cout << "\nInvaild NUMBER!!!";
        cout << "\nNumber: ";
        cin >> num;
    }
    numCopy = num;

    while (numCopy >= 10){
        numCopy /= 10;
    }
    firstDigit = numCopy;

    lastDigit = num % 10;
    if (firstDigit % 2 != 0 && lastDigit % 2 == 0){
        cout << "CORRECT!!!";
    }
    else {
        cout << "FAILED!!!";
    }

    cout << "\n-----------------------------------";
    return 0;
}

