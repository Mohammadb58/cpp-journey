#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------------------\n";
    cout << "\nWelcome to the Sentence Statistics program!";

    string sentence  ;
    cout << "\n\nPlease enter a full sentence: ";
    getline(cin, sentence);
    
    if (!sentence.empty()){
        int spaces = count(sentence.begin(), sentence.end(), ' ');
        int words = spaces + 1;
        int len = sentence.length();
        int charCount = len - spaces;
        cout << "\n- " << sentence << '\n';
        cout << "\nYour string has " << words << " words!\n";
        cout << "\nYour string has " << spaces << " spaces!\n";
        cout << "\nYour string has " << charCount << " chars!\n";
        double charCount2 = (double)charCount;
        double words2 = (double) words;
        cout << "\nYour string Average word length is " << charCount2 / words2 << " chars per word!\n";
        cout << "\n\n------------------------------------------------------\n\n";
    }
    else{
        cout << "\nInvaild input!\n\n";
    }

    return 0;
}