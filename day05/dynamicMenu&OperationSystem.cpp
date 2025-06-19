#include <iostream>

using namespace std;

int main(){
    char option;
    double a,b,c;
    bool result = true;
    bool zero = false;
    cout << "\nWelcome to the simple calculator.";
    cout << "\nPlease choose an operant (+ - * /) or ('q' to quit): ";
    cin >> option;
    if (option == 'q' || option == 'Q'){
        cout << "\nThank you. Have a good day!\n";
    }
    else {
        if (option == '+' || option == '-' || option == '*' || option == '/'){
            cout << "Please enter the 1st num: ";
            cin >> a;
            cout << "Please enter the 2nd num: ";
            cin >> b;
            switch(option){
                case '+':
                    c = a+b;
                    break;
                case '-':
                    c = a-b;
                    break;
                case '*':
                    c = a*b;
                    break;
                case '/':
                    if (b == 0){
                        zero = true;
                    }
                    else {
                        c = a/b;
                    }
                    break;
                /* cant use % due to both nums being double!
                case '%':
                    c = a%b;
                    break;
                    */
                default:
                    cout << "\nInvaild operant!\n"; 
                    result = false;
            }
            if (result == true && zero == false){
                cout << "\nThe result is " << c <<"\n\n";
            }
            else{
                cout << "\nInvaild input\n";
            }
        }
        else {
            cout << "\nInvaild input\n";
        }
    }
    return 0;
}