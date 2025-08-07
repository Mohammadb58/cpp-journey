#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    srand(time(0));
    int guess = 0, guessCount = 0, randomNumToGuess = (rand() % 25) + 1, attempts = (rand() % 6) + 5;
    bool win = false;
    cout << "\nWelcome to the number guessing game!.";
    cout << "\nRULES: \n1. You have limited attempts which are all randomly chosen. \n2. You have to guess the number which will range from 1 to 25! \n3. NO HINTS, and good luck!!!";
    cout << "DEBUG: " << randomNumToGuess << "AND " << attempts; 
    for(int i = 1; i <= attempts; i++){
        cout << "\nGUESS: ";
        cin >> guess;
        guessCount++;
        if(guess == randomNumToGuess){
            win = true;
            break;
        }
    }

    if(win){
        cout << "WOW, YOU WONNN!!! with only " << guessCount << " attempts!";
    }
    else{
        cout << "Sorry, all attempts were used!";
    }
    cout << "\n-----------------------------------";
    return 0;
}

