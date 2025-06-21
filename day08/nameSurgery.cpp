#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string name;
    cout << "\nEnter your full name: ";
    getline(cin >> ws, name);
    int len = name.length();
    int space = count(name.begin(), name.end(), ' ');


    if (space == 2){
        // finding the last space 
        int len = name.length();
        int lastSpace = name.rfind(' ');
        int firstSpace = name.find(' ');
        string middleName = name.substr(firstSpace+1, (lastSpace-firstSpace)-1);
        string firstName = name.substr(0, firstSpace);
        string lastName = name.substr(lastSpace+1, (len - lastSpace) -1);
        bool emptyMiddleName = middleName.empty();
        bool emptyFirstName = firstName.empty();
        bool emptyLastName = lastName.empty();
        //cout << lastSpace << ' '<< firstSpace << ' ' << len <<  endl;
        //cout << firstName << ' ' << firstName.length() << '\n' << middleName << ' ' << middleName.length() << '\n' << lastName << ' '<< lastName.length() <<  endl;


        //cout << '\n' << middleName << ' ' << middleName.length() << endl;
        //cout << '\n' << boolalpha << emptyMiddleName << '\n';
        if (!emptyMiddleName && !emptyFirstName && !emptyLastName){
            //string lastName = name.substr(lastSpace+1, len);
            cout << "\nYour middle name is: " << middleName << "\n\n";
            //cout << space << ' ' << firstSpace << ' ' << lastSpace << '\n' << middleName << '\n' << lastName << '\n';
        }
        else{
            cout << "\nNot enought parts.\n";
        }
    }
    
    else {
        cout << "\nNot enought parts.\n";
    }
    return 0;
}