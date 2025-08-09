#include<iostream>
using namespace std;

double sum(double num1, double num2){
    return num1 + num2;
}
double avr(double num1, double num2){
    return (num1 + num2) / 2;
}


int main(){
    cout << "-----------------------------------";
    double num1 = 0, num2 = 0;
    cout << "Please enter num1: ";
    cin >> num1;
    cout << "Please enter num2 ";
    cin >> num2;   
    cout << "\nThe sum : " << sum(num1, num2);
    cout << "\nThe avr : " << avr(num1, num2);

    cout << "\n-----------------------------------";
    return 0;
}

