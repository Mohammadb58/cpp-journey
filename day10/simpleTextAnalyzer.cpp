#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------\n";
    string input;
    bool ava = true;
    int len, alpha = 0, counter = 0, vowelCounter = 0, digitCounter = 0, spaceCounter = 0, specialCharCounter = 0;
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
        else if(
                input[counter] == 'b' || input[counter] == 'B' ||
                input[counter] == 'c' || input[counter] == 'C' ||
                input[counter] == 'd' || input[counter] == 'D' ||
                input[counter] == 'f' || input[counter] == 'F' ||
                input[counter] == 'g' || input[counter] == 'G' ||
                input[counter] == 'h' || input[counter] == 'H' ||
                input[counter] == 'j' || input[counter] == 'J' ||
                input[counter] == 'k' || input[counter] == 'K' ||
                input[counter] == 'l' || input[counter] == 'L' ||
                input[counter] == 'm' || input[counter] == 'M' ||
                input[counter] == 'n' || input[counter] == 'N' ||
                input[counter] == 'p' || input[counter] == 'P' ||
                input[counter] == 'q' || input[counter] == 'Q' ||
                input[counter] == 'r' || input[counter] == 'R' ||
                input[counter] == 's' || input[counter] == 'S' ||
                input[counter] == 't' || input[counter] == 'T' ||
                input[counter] == 'v' || input[counter] == 'V' ||
                input[counter] == 'w' || input[counter] == 'W' ||
                input[counter] == 'x' || input[counter] == 'X' ||
                input[counter] == 'y' || input[counter] == 'Y' ||
                input[counter] == 'z' || input[counter] == 'Z'){
                    alpha++;
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
        cout << "\nYour string has " << alpha << " Alphabetic Char/s!\n";

    }
    else{
        cout << "\nYour char was not detected!\n";
    }
    cout << "\n------------------------------------------\n";
    return 0;
}