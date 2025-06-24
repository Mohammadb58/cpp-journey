#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------\n";
    string input;
    bool ava = true;
    int len, counter = 0, vowelCounter = 0, digitCounter = 0, spaceCounter = 0, specialCharCounter = 0;
    cout << "\nPlease enter a full line of text: ";
    getline(cin >> ws, input);

    len = input.length();
    while(len != counter){
        if(input[counter] == 'a' || input[counter] == 'e' ||input[counter] == 'i' ||input[counter] == 'o' ||input[counter] == 'u' || input[counter] == 'A' || input[counter] == 'E' ||input[counter] == 'I' ||input[counter] == 'O' ||input[counter] == 'U'){
            vowelCounter++;
        }
        else if(isdigit(input[counter])){
            digitCounter++;
        }
        else if(input[counter] == ' '){
            spaceCounter++;
        }
        else if(input[counter] == '!' || input[counter] == '@' || input[counter] == '$' || input[counter] == '%' || input[counter] == '^' || input[counter] == '&' || input[counter] == '*' || input[counter] == ')' || input[counter] == ')' || input[counter] == '-' || input[counter] == '_' || input[counter] == '?'){
            specialCharCounter++;
        }
        else{
            ava = false;
        }
        counter++;
    }
    if(ava){
        cout << "\nYour string has " << vowelCounter << " Vowel/s!\n";
        cout << "\nYour string has " << digitCounter << " Digit/s!\n";
        cout << "\nYour string has " << spaceCounter << " Space/s!\n";
        cout << "\nYour string has " << specialCharCounter << " Special Char/s!\n";
    }
    else{
        cout << "\nYour char was not detected!\n";
    }
    cout << "\n------------------------------------------\n";
    return 0;
}