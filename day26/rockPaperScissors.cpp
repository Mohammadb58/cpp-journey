#include<iostream>
#include<ctime>
using namespace std;

// 1 = Rock, 2 = Paper, 3 = Scissors
int computerChoice(){
    int cpu = (rand() % 3) + 1;
    return cpu;
}
int userChoice(){
    int user = 0;
    cout << "\n (1) rock (2) paper (3) scissors shot: ";
    cin >> user;
    while(user >= 4 || user <= 0){
        cout << "\nInvaild!!!";
        cout << "\n (1) rock (2) paper (3) scissors shot: ";
        cin >> user;
    }
    return user;
}

int determineWinner(int user, int cpu){
    if (user == cpu){
        return 0;
    }
    else if ((user == 1 && cpu == 3) || (user == 2 && cpu == 1) || (user == 3 && cpu == 2)){
        return 1;
    }
    else{
        return -1;
    }
}
void printChoice(int choice){
    switch (choice)
    {
    case 1:
        cout << "\nRock";
        break;
    case 2:
        cout << "\nPaper";
        break;
    case 3:
        cout << "\nScissors";
        break;
    }
}

void playGame(){
    int rounds = 0;
    cout << "\n\nHow many rounds would you like to play: ";
    cin >> rounds;
    for(int i = 1; i <= rounds; i++){
        int cpu = computerChoice();
        int user = userChoice();
        int winner = determineWinner(user, cpu);
        cout << "\nYou choose: ";
        printChoice(user);
        cout << "\nThe cpu choose: ";
        printChoice(cpu);
        if(winner == 0){
            cout << "\nIt's a tie!!!";
        }
        else if(winner == 1){
            cout << "\nYOU WON!!!";
        }
        else{
            cout << "\nYOU LOST!";
        }
    }
}
/*
void runMatch(int rounds = 3){
    for(int i = 1; i <= rounds; i++){
        playGame();
    }
}
    */

int main(){
    cout << "\n-----------------------------------";
    srand(time(NULL));
    playGame();
    cout << "\n-----------------------------------";

    return 0;
}