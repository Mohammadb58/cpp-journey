#include <iostream>

using namespace std;

int main(){
    int age, remAge;
    string name;
    cout << "Please enter your name: ";
    getline(cin >> ws, name);
    if (name != "" && name != "   "){
        cout << "Please enter your age to vote: ";
        cin >> age;
        if (age >= 18){
            cout << "\nThanks " << name <<". You can vote.\n";
        }
        else if (age < 0){
            cout << "\nInvaild age.\n";
        }
        else {
            remAge = 18 - age;
            cout << "Sorry you can't vote, but you can vote in " << remAge << " years.\n";
        }
    }
    else{
        cout << "\nInvaild name.\n";
    }
    return 0;
}