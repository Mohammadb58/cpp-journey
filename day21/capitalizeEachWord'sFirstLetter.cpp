#include<iostream>
#include<cctype>
using namespace std;

int main(){
    cout << "-----------------------------------";
    string s = "never let the fear of striking out keep you from playing the game";
    for(int i = 0; i < s.length(); i++){
        s[0] = toupper(s[0]);
        if(s[i] == ' '){
            s[i+1] = toupper(s[i+1]);
        }
    }
    cout << "\n" << s << '\n';

    
    cout << "-----------------------------------";
    return 0;
}

