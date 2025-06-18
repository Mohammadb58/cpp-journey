#include <iostream>

using namespace std;

int main(){
    char userChar;
    cout << "\nPlease enter any any single character (letter, digit, or symbol): ";
    cin >> userChar;
    /*
    char newUserChar = (char)userChar;
    cout << "DEBUG " << userChar << endl;
    cout << "DEBUG " << newUserChar << endl;
    */
    if (userChar >= 48 && userChar <= 57){
        cout << "\nYou entered " << userChar << " Which is a digit.\n";
    }
    else if  (userChar >= 65 && userChar <= 90){
        cout << "\nYou entered " << userChar << " Which is a capital letter.\n";
    }
    else if (userChar >= 97 && userChar <= 122){
        cout << "\nYou entered " << userChar << " Which is a lowercase letter.\n";
    }
    else{
        cout << "\nIt's something else\n";
    }
    return 0;
}