#include<iostream>
#include<cmath>

using namespace std;

int main(){
    cout << "\n-----------------------------------------\n";
    double num1 = 0, num2 = 0;
    double total =0;
    char operant;
    bool num2IsZero = false;
    string op = "/*+-";
    cout << "\n"
            "7 8 9 \n" <<
            "4 5 6 \n" <<
            "1 2 3 \n" <<
            "0 . = \n" <<
            "Num: ";
    cin >> num1;
    cout << "\n" <<
            "/, *, +, - \n" <<
            "Operant:  ";
    cin >> operant;
    if (op.find(operant) != string::npos){
        cout << "\n"
            "7 8 9 \n" <<
            "4 5 6 \n" <<
            "1 2 3 \n" <<
            "0 . = \n" <<
            "Num: ";
        cin >> num2;
        switch(operant){
            case '/':
                if (num2 != 0){
                    total = num1 / num2;
                }
                else{
                    num2IsZero = true;
                }
                break;
            case '*':
                total = num1 * num2;
                break;
            case '+':
                total = num1 + num2;
                break;
            case '-':
                total = num1 - num2;
                break;
            }
        if (num2IsZero == false){
            cout << "The total is "<< total;
        }
        else{
          cout <<"\nInvaild, You Can't divide by 0!";  
        }
    }
    else{
        cout <<"\nInvaild operant!";
    }

    cout << "\n-----------------------------------------\n";
    return 0;
}