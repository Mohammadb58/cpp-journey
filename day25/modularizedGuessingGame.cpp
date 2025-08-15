#include<iostream>
#include<string>
#include<ctime>
using namespace std;

void minMaxCheck(int &min, int &max){
    while(min >= max){
        cout << "\nInvaild Range!";
        cout << "\nEnter the min range to guess: ";
        cin >> min;
        cout << "\nEnter the max range to guess: ";
        cin >> max;
    }
}

int generateSecret(int min, int max){
    int numberToGuess = (rand() % (max - min + 1)) + min;
    //cout << "\nDEBUG" << numberToGuess << "\n";
    return numberToGuess;
}
int getPlayerGuess(){
    int guess = 0;
    cout << "\nGuess: ";
    cin >> guess;
    return guess;
}
bool checkGuess(int guess, int numberToGuess){
    bool won = false;
    if (numberToGuess < guess){
        cout << "\nTRY LOWER!";
    }
    else if (numberToGuess > guess){
        cout << "\nTRY HIGHER!";
    }
    else{
        cout << "\nDEAD ON!";
        won = true;
    }
    return won;
}
void playGame(){
    int min = 0, max = 0;
    cout << "\nWelcome to the guessing the number game!";
    cout << "\nEnter the min range to guess: ";
    cin >> min;
    cout << "\nEnter the max range to guess: ";
    cin >> max;
    // reused the var name since we are out the scoop
    minMaxCheck(min, max);
    int numberToGuess = generateSecret(min, max);
    int guess = getPlayerGuess();
    bool won = checkGuess(guess, numberToGuess);
    while(!won){
        guess = getPlayerGuess();
        won = checkGuess(guess, numberToGuess);
    }
}

int main(){

    cout << "\n-----------------------------------";
    srand(time(NULL));
    //playGame();
    /*
    thats why we need pass-by-ref
    int min = 55;
    int max  = 10;
    minMaxCheck(min, max);
    cout << "\nDEBUG: NEW min " << min;
    cout << "\nDEBUG: NEW max " << max;
    */

    cout << "\n-----------------------------------";

    return 0;
}