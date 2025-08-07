#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    cout << "\n\nEscape the wild, but make the correct decsions!";
    srand(time(0));
    int randomNum = 0, randomLife = 0;
    int coins = 0, health = 10;
    char charFight, buy;
    for(int i = 1; i <= 10; i++){
        randomNum = (rand() % 100) + 1;
        if (health <= 0){
            break;
        }
        if(randomNum >= 1 && randomNum <= 39){
            cout << "\n\nYou found a coin!";
            coins += 2;
        }
        else if(randomNum >= 40 && randomNum <= 49){
            cout << "\n\nA wild animal appeared!";
            cout << "\n\n[F]ight or [R]un: ";
            cin >> charFight;
            if (charFight == 'f' || charFight == 'F'){
                randomLife = (rand() % 2) + 1;
                if (randomLife == 1){
                    cout << "\n\nWow, You WON! COIN*****";
                    coins += 5;
                }
                else{
                    cout << "\n\nSorry";
                    health = 0;
                    break;
                }
            }
            else if ((charFight == 'r' || charFight == 'R') && coins >= 2){
                cout << "\n\nCOINS--";
                coins -= 2;
            }
        }
        else if(randomNum >= 50 && randomNum <= 59){
            cout << "\n\nYou tripped and lost health!";
            health -= 2;
            coins -=2;
        }
        else if(randomNum >= 60 && randomNum <= 64){
            cout << "\n\nYou found a secret passage!!";
            coins += 15;
        }
        else if (randomNum >= 65 && randomNum <=89){
            cout << "\n\nYou did nothing. Time passes...";      
        }
        else{
            cout << "\n\nTHE MERCHENT IS HERE\nBuy something?\n[H]ealth (+2 for 3 coins), [S]kip: ";
            cin >> buy;
            if((buy == 'h' || buy == 'H') && coins >= 3){
                health += 2;
                coins -= 3;
                cout << "\n\nYour new health is " << health << " and coins are " << coins;
            }
        }
    }
    if (health > 0){
        cout << "\n\nWOW, You made it with " << health << " health and " << coins << " coins!";
    }
    else{
        cout << "\n\nDEAD!";
    }
    
    cout << "\n-----------------------------------";
    return 0;
}

