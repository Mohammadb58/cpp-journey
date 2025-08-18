#include<iostream>
#include<limits>

using namespace std;

int getValidNum(){
    int num = 0;
    cout << "\nWhat is your number: ";
    while(!(cin >> num) || num < 0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvaild, Num: ";
    }
    return num;
}

int main(){
    cout << "\n-----------------------------------";
    int num1, num2, num3;
    num1 = getValidNum();
    num2 = getValidNum();
    num3 = num1 + num2;
    cout << "\nSUM: " << num3;

    cout << "\n-----------------------------------";

    return 0;
}