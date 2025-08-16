#include<iostream>

using namespace std;

void updateScore(int &score, int points = 10, bool doublePoints = false){
    if(doublePoints){
        score += points * 2;
    }
    else{
        score += points;
    }
    cout << "\n" << score;
}

void runTests(){
    int score = 0;
    updateScore(score);
    score = 0;
    updateScore(score, 5);
    score = 0;
    updateScore(score, 20, true);
}

int main(){
    cout << "\n-----------------------------------";
    runTests();
    cout << "\n-----------------------------------";

    return 0;
}