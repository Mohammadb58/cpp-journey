#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "\n-----------------------------------";
    string const VOWELS = "aeiou";
    string userString  = "";
    int lengthOfUserString = 0, vowelsCount = 0, vowelsCount2 = 0;
    cout << "Please enter a sentence: "; 
    getline(cin >> ws, userString);
    lengthOfUserString = userString.length(); 
    // classic range based loop
    for(int i = 0; i < lengthOfUserString; i++){
        userString[i] = tolower(userString[i]);
        if(VOWELS.find(userString[i]) != string::npos){
            vowelsCount++;
        }
    }
    // for each loop
    for(char c : userString){
        if(VOWELS.find(c) != string::npos){
            vowelsCount2++;
        }
    }
    cout << "\nThe string has (RANGE) " << vowelsCount << " vowels!";
    cout << "\nThe string has (EACH) " << vowelsCount2 << " vowels!";
    cout << "\n-----------------------------------";

    return 0;
}