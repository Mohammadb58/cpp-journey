#include <iostream>

using namespace std;

int main(){
    cout << '\n';
    // Remove the " Abu Rashed" part without hardcoding any numbers.
    string name;
    cout << "Enter your first name: ";
    getline(cin >> ws, name);
    bool isThereASpace = (name.find(' ') != string::npos); 
    if (isThereASpace){
        int space = name.find(' ');
        int substrLength = name.length() - space;
        name.erase(space, substrLength); 
        cout << name;
    }
    else{
        cout << name;
    }
    cout << '\n';
    return 0;
}