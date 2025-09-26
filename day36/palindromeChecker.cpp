#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    bool palindrome = true;
    string word = "SONOS";
    stack<char> revWord1;
    stack<char> revWord2;
    for(int i = 0; i < word.size(); i++){
        word[i] = toupper(word[i]);
        revWord1.push(word[i]);
    }
    /*
    while(!revWord1.empty()){
        cout << revWord1.top();
        revWord1.pop();
    }
    */
    int i = 0;
    while(!revWord1.empty()){
        if(revWord1.top() != word.at(i)){
            palindrome = false;
            break;
        }
        revWord1.pop();
        i++;
    }
    if(palindrome){
        cout << "\nPalindrome!";
    }
    else{
        cout << "\nNot palindrome!";
    }
    cout << "\n\n";
    return 0;
}
