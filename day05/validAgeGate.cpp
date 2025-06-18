#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int age, remAge;
    cout << "Please enter your age to vote: ";
    cin >> age;

    if (age >= 18){
        cout << "\nThanks. You can vote.\n";
    }
    else if (age < 0){
        cout << "\nInvaild age.\n";
    }
    else {
        remAge = 18 - age;
        cout << "Sorry you can't vote, but you can vote in " << remAge << " years.\n";
    }
    return 0;
}