#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    string word = "Mohammad";
    stack<char> revWord;
    for(int i = 0; i < word.size(); i++){
        word[i] = toupper(word[i]);
        revWord.push(word[i]);
    }
    // now the stack has the word "Hello" stacked 
    while(!revWord.empty()){
        cout << revWord.top();
        revWord.pop();
    }
    cout << "\n\n";
    return 0;
}
