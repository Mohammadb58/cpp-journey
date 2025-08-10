#include<iostream>
#include <string>
#include<cctype>

using namespace std;

int upgradeNum(int x){
    return (x*3)+10;
}
int tripleUpgrade(int x){
    return upgradeNum(x) * 2;
}

int conditionalUpgrade(int x){
    int z = upgradeNum(x);
    int y = 0;
    if(z > 100){
        y = z * 5;
    }
    else{
        y = tripleUpgrade(x);
    }
    return y;
}
string statusLabel(int x){
    int z = upgradeNum(x);
    string y;
    if(z > 100){
        y = "--------";
    }
    else{
        y = "________";
    }
    return y;
}
double scaledValue(int x){
    return conditionalUpgrade(x) / 2.0;
}

int digitCount(string s){
    int digitCounter = 0;
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            digitCounter++;
        }
    }
    return digitCounter;
}
string maskDigits(string s){
    for(int i = 0; i < s.length(); i++){
        if(isdigit(s[i])){
            s[i] = '-';
        }
    }
    return s;
}
string trimEdges(string s){
    int leadingChar = 0, trailingChar = 0;
    string subS = "";
    if(!s.empty() && (s[0] == ' ' || s[s.length()-1] == ' ')){
        leadingChar = s.find_first_not_of(' ');   
        trailingChar = s.find_last_not_of(' ');
        subS = s.substr(leadingChar, trailingChar-leadingChar);
        //cout << "\n\nDEBUG: " << trailingChar << "\n\n";
    }
    else{
        subS = s;
    }
    return subS;
}

string compressSpaces(string s){
    for(int i = 0; i < s.length(); i++){
        if(i != 0){
            if(s[i] == ' ' && s[i- 1] == ' '){
                s = s.erase(i,1);
                i--;
            }
        }
        else{
            continue;
        }
        
    }
    return s;
}

int main(){
    cout << "-----------------------------------";
    int x = 0;
    string s = "";
    char userConChoice;
    cout << "\nEnter x value: ";
    cin >> x;
    cout << "\nEnter s string: ";
    getline(cin >> ws, s);
    do{
        
        cout << "\n-_--- MENU ---_-";
        cout << "\nA. Show upgradeNum(x)" << 
                "\nB. Show tripleUpgrade(x)" << 
                "\nC. Show conditionalUpgrade(x)" << 
                "\nD. Show statusLabel(x) and scaledValue(x) together" << 
                "\nE. Change x" <<
                "\nF. Count how many characters in s are digits" <<
                "\nG. Mask all digits in your s string" <<
                "\nH. Remove leading and trailing space" << 
                "\nI. Any run of spaces collapsed to a single space" << 
                "\nJ. Change s" <<
                "\nQ. Quit";
        cout << "\nEnter: ";
        cin >> userConChoice;
        switch (userConChoice){
        case 'A':
            cout << "\nResult: " << upgradeNum(x);
            break;
        case 'B':
            cout << "\nResult: " << tripleUpgrade(x);
            break;
        case 'C':
            cout << "\nResult: " << conditionalUpgrade(x);
            break;
        case 'D':
            cout << "\nResult Status: " << statusLabel(x) << " AND " << scaledValue(x);
            break;
        case 'E': 
            cout << "\nEnter x value: ";
            cin >> x;
            break;
        case 'Q':
            userConChoice = 'q';
            break;
        case 'F':
            cout << "Your s string has " << digitCount(s) << " digits!";
            break; 
        case 'G':
            cout << "Your masked s string is " << maskDigits(s);
            break;
        case 'H':
            cout << "Your cleaned s string is " << trimEdges(s);
            break;
        case 'I':
            cout << "Your collapsed s string is " << compressSpaces(s);
            break;
        case 'J': 
            cout << "\nEnter s string: ";
            cin >> s;
        default:
            break;
        }

    }while(userConChoice != 'q');

    cout << "\n-----------------------------------";
    return 0;
}