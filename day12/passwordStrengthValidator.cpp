#include <iostream>
#include <cctype>
using namespace std;

int main(){
    cout << "\n----------------------------------------\n";
    string password;
    string specials = "!@#$%^&*()-_=+[]{}|;:',.<>/?";
    int space = 0, len = 0, counter = 0;
    bool isDigitInPassword = false, isUpper = false, isLower = false, isSpecial = false;
    do{
        space = 0;
        len = 0; 
        counter = 0;
        isDigitInPassword = false;
        isUpper = false; 
        isLower = false;
        isSpecial = false;
        cout << "\nPlease enter your password: ";
        getline(cin >> ws, password);
        len = password.length(); // we need it to be over 8
        space = password.find(' '); // we need it to be -1
        while(password[counter]){
            if(specials.find(password[counter]) != string::npos){
                isSpecial = true;
            }
            if(isupper(password[counter])){
                isUpper = true;
            }
            if(islower(password[counter])){
                isLower = true;
            }
            if(isdigit(password[counter])){
                isDigitInPassword = true;
            }
            counter++; // we need it to be true 
        }
        if (space == -1 && len >= 8 && isDigitInPassword == true && isUpper == true && isLower == true && isSpecial == true){
            cout << "\nYou'r password " << password << " is vaild and strong\n";
        }
        else if(space != -1){
            cout << "\nInvaild, Password can't have spaces!\n";
        }
        else if(len < 8){
            cout << "\nInvaild, Password can't less that 8 chars!\n";
        }
        else if(isDigitInPassword == false){
            cout << "\nInvaild, Password must contain one digit!\n";
        }
        else if(isUpper == false){
            cout << "\nInvaild, Password must contain one upper case letter!\n";
        }
        else if(isLower == false){
            cout << "\nInvaild, Password must contain one lower case letter!\n";
        }
        else if(isSpecial == false){
            cout << "\nInvaild, Password must contain one special char!\n";
        }
        else{
            cout << "\nInvaild!\n";   
        }
    } while(space != -1 || len < 8 || isDigitInPassword != true || isUpper != true || isLower != true || isSpecial != true);
    cout << "\n----------------------------------------\n";
    return 0;
}