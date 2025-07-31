#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    string s = "Never let the fear of striking out keep you from playing the game.";
    int eCount = 0;
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == 'e'){
            eCount++;
        }
    }
    cout << "\n" << eCount << "\n";

    cout << "-----------------------------------";
    return 0;
}