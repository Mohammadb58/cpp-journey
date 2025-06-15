#include <iostream>
using namespace std;

int main(){
    cout << "\nWelcome to the ASCII Decoder.\n";
    // Declare the two user inputs 
    int input;
    string input2; 
    
    cout << "\nPlease enter a number to ASCII Decoder: ";
    // getline(cin, input); wont work sinsce this is not a string
    cin >> input;
    char ASCII = (char)input;

    cout << "\nYour ASCII code is " << ASCII << ".\n";
    
    cout << "\nPlease enter a letter or symbol to ASCII Decoder: ";
    getline(cin >> ws, input2);
    
    int ASCII2 = (int)input2[0];

    cout << "\nYour ASCII code is " << ASCII2 << ".\n";
    cout<<input2<<endl;

    return 0;
}