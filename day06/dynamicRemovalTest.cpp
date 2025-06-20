#include <iostream>

using namespace std;

int main(){
    cout << '\n';
    // Remove the " Abu Rashed" part without hardcoding any numbers.
    string name;
    cout << "Enter your first name: ";
    getline(cin >> ws, name);
    // name.find(' ') will always be true since its either a index or npos
    // this allows us to see if find ret npos aka no space found
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