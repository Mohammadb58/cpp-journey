#include <iostream>

using namespace std;

int main(){
    cout << '\n';

    string name;
    cout << "Enter your full name: ";
    getline(cin >> ws, name);
    int len = name.length();
    bool space = (name.find(' ') != string::npos);
    if (space){
        int firstSpace = name.find(' ');
        //cout << name << endl;
        name.erase(0, firstSpace+1);
        //cout << name << endl;
        bool space2 = (name.find(' ') != string::npos);
        if (space2){
            int secondSpace = name.find(' ');
            //cout << secondSpace << endl;
            name.erase(secondSpace, len);
            //cout << name << endl;
            //cout << firstSpace << endl;
            //cout << secondSpace << endl;
            cout << "Your middle name is " << name;
            cout << '\n';
        }
        else{
            cout << "Not enough parts in the name\n"; 
        }
    }
    else{
        cout << "Not enough parts in the name\n";
    }
    
    return 0;
}