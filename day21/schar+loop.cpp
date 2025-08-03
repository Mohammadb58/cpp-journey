#include<iostream>
#include<cctype>
using namespace std;

int main(){
    cout << "-----------------------------------";
    string s = "Never let theE fear of striking out keep you from playing the game.";
    int eCount = 0;
    for(char c : s){
        c = tolower(c);
        if(c == 'e'){
            eCount++;
        }
    }
    cout << "\n" << eCount << endl;

    cout << "-----------------------------------";
    return 0;
}

