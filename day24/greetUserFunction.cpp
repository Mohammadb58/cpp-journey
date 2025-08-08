#include<iostream>
using namespace std;

void welcomeMessage(string name){
    cout << "\nHello, " << name << " ! Nice to meet you.";
}

int main(){
    cout << "-----------------------------------";
    string name;
    cout << "\nPlease enter your name: ";
    getline(cin >> ws, name);

    welcomeMessage(name);
    cout << "\n-----------------------------------";
    return 0;
}

