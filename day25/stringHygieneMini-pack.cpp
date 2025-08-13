#include<iostream>
#include<string>
using namespace std;

string trimEdges(string s){
    int len = 0, leadingChar, trailingChar;
    string trimmedString = "";
    len = s.length();
    bool allSpaces = true;
    if(!s.empty()){
        for (int i = 0; i < len; i++){
            if (s[i] != ' '){
                allSpaces = false;
            }
        }
    }
    if((!allSpaces && !s.empty()) && (s[0] == ' ' || s[len - 1] == ' ')){
        leadingChar = s.find_first_not_of(' ');
        trailingChar = s.find_last_not_of(' ');
        trimmedString = s.substr(leadingChar, trailingChar-leadingChar+1);
        return trimmedString;
    }
    else {
        return trimmedString = s;
    }
}

int main(){

    cout << "\n-----------------------------------";
    string s = "";
    cout << "Enter s string: ";
    // Didn't use >> ws sinsce it pre trims leading space!
    getline(cin, s);
    cout << "String:: " << trimEdges(s);

    cout << "\n-----------------------------------";

    return 0;
}