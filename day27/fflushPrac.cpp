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

        // this clears the cin buffer from any flag it throws
        cin.clear();
        // this says ignore any amount or if you reached a new line 
        // this functions from the <limits> takes two args
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