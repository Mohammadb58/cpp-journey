#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int guess = 0, i = 0;
    char cont;
    do{
        guess = 0, i = 0;
        cout << "Please enter a number between 1-99: ";
        cin >> guess;
        if (guess <= 0){
            cout << "\nINVAILD GUESS!";
        }
        else{
            while(i != guess + 1){
                if(i >= 100){
                    break;
                }
                if (i % 4 == 0 || i % 6 == 0){
                    i++;
                    continue;
                }
                else{
                    cout << "\n" << i;
                    i++;
                }
            }
        }
        cout << "\nWould you like to play again (Y/y): ";
        cin >> cont;
    }while(cont == 'Y' || cont == 'y');
    cout << "\n-----------------------------------";
    return 0;
}