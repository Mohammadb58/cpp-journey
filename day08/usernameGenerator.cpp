#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main(){
    cout << "\n------------------------------------------------------\n";
    cout << "\nWelcome to the Username Generator program!";

    string name;
    cout << "\n\nPlease enter your full name: ";
    getline(cin >> ws, name);
    // first name checks
    int firstSpace = name.find(' ');
    string firstName = name.substr(0, firstSpace);
    bool emptyFirstName = firstName.empty();
    // second name checks
    int lastSpace = name.rfind(' ');
    string middleName = name.substr(firstSpace+1, lastSpace - firstSpace - 1);
    bool emptyMiddleName = middleName.empty();
    // last name checks
    int len = name.length();
    string lastName = name.substr(lastSpace + 1, len - lastSpace);
    bool emptyLastName = lastName.empty();
    // length of name check
    int spaces = count(name.begin(), name.end(), ' ');
    
    if (!emptyFirstName && !emptyMiddleName && !emptyLastName && spaces == 2){
        char a =  tolower(firstName[0]);
        int b = middleName.length();
        string c = to_string(b);

        string username;
        username.push_back(a);
        username.append(c);
        username.append(lastName);
        cout << "\nYour username is " << username;
    }
    else{
        cout << "\nInvaild name format.";
    }
    cout << "\n\n------------------------------------------------------\n\n";

    return 0;
}