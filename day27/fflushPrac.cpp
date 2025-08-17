#include<iostream>
#include<ctime>
#include <limits>
using namespace std;

int main(){
    cout << "\n-----------------------------------";
    int age;
    while (true){
        cout << "\nEnter your age: ";
        cin >> age;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(age >= 1){
            cout << "\nYour age is " << age;
        }
        else{
            cout << "\nINVAILD AGE!!!";
        }
        }
    cout << "\n-----------------------------------";

    return 0;
}