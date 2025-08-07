#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    cout << "\nRANDOM EVENT GENERATOR";
    cout << "\nLets start you at 0 coins and 10 HEALTH!";

    srand(time(0));

    int num = (rand() % 5) + 1;
    int coins = 0, health = 10;

    cout << "\nnum: " << num;
    
    for (int i = 1; i <= 10; i++){
        if(health <= 0){
            break;
        }
        num = (rand() % 5) + 1;
        switch(num){
            case 1:
                cout << "\nYou found a coin!";
                coins++;
                break;
            case 2:
                cout << "\nA wild animal appeared!";
                health -= 2;
                break;
            case 3:
                cout << "\nYou tripped and lost health!";
                health -= 4;
                break;
            case 4:
                cout << "\nYou found a secret passage!";
                coins += 5;
                break;
            case 5:
                cout << "\nYou did nothing. Time passes...";
                break;
        }
    }
    
    if(health > 0){
        cout << "\n\nYou are still alive! and have " << coins << " coins!";
    }
    else{
        cout << "\n\nYOU ARE DEAD!";
    }

    cout << "\n-----------------------------------";
    return 0;
}

