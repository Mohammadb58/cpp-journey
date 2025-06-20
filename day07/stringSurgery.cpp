#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "\nWelcome to the String Surgery program.";
    cout << "\n\nPlease enter your full name: ";
    getline(cin >> ws, name);
    int firstSpace = name.find(' ');
    int secondtSpace = name.find(' ', firstSpace + 1);
    int thirdSpace = name.find(' ', secondtSpace + 1);
    string fName = name.substr(0, firstSpace);
    string sName = name.substr(firstSpace+1, secondtSpace-firstSpace);
    string tName = name.substr(secondtSpace+1, thirdSpace-secondtSpace);
    bool a = fName.empty();
    bool b = sName.empty();
    bool c = tName.empty();
    //bool x = name.compare(" ") == 0;
    int countX = count(name.begin(), name.end(), ' ');
    if (countX == 2 && !a && !b && !c){
        cout << "\nYour name is " << name;
        cout << "\n\nYour first name is: " << fName << endl;
        cout << "\nYour middle name is: " << sName << endl;
        cout << "\nYour last name is: " << tName << endl;
    }
    else{
        cout << "\nInvalid name format\n";
    }
    return 0;
}