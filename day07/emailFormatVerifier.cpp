#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string email;
    cout << "\nWelcome to the Email Format Verifier.";
    cout << "\n\nPlease enter you email: ";
    getline(cin >> ws, email);
    bool dot = (email.find('.') != string::npos);
    bool atSign = (email.find('@') != string::npos);
    bool spaces = (email.find(' ') != string::npos);
    int dot2 = count(email.begin(), email.end(), '.');
    int atSign2 = count(email.begin(), email.end(), '@');
    int atSignIdx = email.find('@');
    int dotIdx = email.rfind('.');
    int secDotIdx = email.rfind('.', dotIdx-1);
    int len = email.length();
    //cout << dotIdx << ' ' << secDotIdx << endl;
    
    if(dot && atSign && !spaces && secDotIdx -1 < atSignIdx && atSign2 == 1 && dotIdx - 1 > atSignIdx && dotIdx !=0 && atSignIdx != 0 && dotIdx != len -1 && atSignIdx != len -1){
        cout << "\nVaild email: " << email << endl;
    }
    else {
        cout << "\nInvaild email format\n";
    }
    
    return 0;
}