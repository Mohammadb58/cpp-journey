#include<iostream>
using namespace std;

bool ageCheck(int age){
    bool adult = false;
    if(age >= 18){
        adult = true;
    }
    return adult;
}

int main(){
    cout << "-----------------------------------";
    int age = 0;
    cout << "\n\nAGE: ";
    cin >> age;

    if(ageCheck(age) == true){
        cout << "\nYou are an adult.";
    }
    else{
        cout << "\nYou are not an adult.";
    }
    cout << "\n-----------------------------------";
    return 0;
}

