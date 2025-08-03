#include<iostream>
#include<cctype>
using namespace std;

int main(){
    cout << "-----------------------------------";
    string name = "MOHAMMAD", newName = "ali";
    for (char c : name){
        c = tolower(c);
        cout << c;
    }
    cout << "\n";
    for (char c : newName){
        c = toupper(c);
        cout << c;
    }
    cout << endl;

    cout << "-----------------------------------";
    return 0;
}

