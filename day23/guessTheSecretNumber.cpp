#include<iostream>
#include<ctime>

using namespace std;

int main(){
    cout << "-----------------------------------";
    srand(time(NULL));
    int randomNumberToGuess = (rand() % 20) + 1, guess = 0, att = 0;
    //cout << "\n\n" << randomNumberToGuess << "\n\n";
    cout << "Welcome, you have to guess the random number to exit the loop...\n\n" << "OR, You stay stuck in a inf looooop!!!.\n";
    cout << "\nGuess: ";
    cin >> guess;
    att++;
    while(guess != randomNumberToGuess){
        cout << "\nINF LOOOOP!!!";
        if (guess > randomNumberToGuess){
            cout << "\nYour guess is too high!";
        }
        else{
            cout << "\nYour guess is too low!";
        }
        cout << "\nGUESS: ";
        cin >> guess;
        att++;
    }

    cout << "Ok, You are out but can you do it again!, And it took " << att << " attempts!";
    cout << "\n-----------------------------------";
    return 0;
}

