#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    int userNum = 0, curr = 0, sum = 0, userNumOriginal = 0;
    cout << "Enter a number, any number you like: ";
    cin >> userNum;
    userNumOriginal = userNum;
    while (userNum > 0){
        curr = userNum % 10;
        if (curr % 2 == 0){
            sum += curr;
        } 
        userNum /= 10;
    }
    cout << "\n\nOriginal number: " << userNumOriginal;
    cout << "\nSum of ONLY even digits: " << sum;

    cout << "\n-----------------------------------";
    return 0;
}

