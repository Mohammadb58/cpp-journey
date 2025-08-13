#include<iostream>
#include<string>
using namespace std;

int targetCount(string s, char target, bool caseSen){
    int len = s.length(), counter = 0;
    if(!caseSen){
        target = tolower(target);
        for (int i = 0; i < len; i++){
            s[i] = tolower(s[i]);
        }
    }
    for (int i = 0; i < len; i++){
        if(s[i] == target){
            counter++;
        }
    }
    return counter;
}

int main(){
    cout << "\n-----------------------------------";
    string s;
    char target;
    bool caseSen = false;
    cout << "\nPlease enter a string of test: ";
    getline(cin, s);
    cout << "\nEnter the char target to look for: ";
    cin >> target;
    cout << "\nWould you like it case-sensitive (1/0): ";
    cin >> caseSen;
    cout << "\nThe target " << target << " appeared " << targetCount(s, target, caseSen) << " times!";
    cout << "\n-----------------------------------";

    return 0;
}