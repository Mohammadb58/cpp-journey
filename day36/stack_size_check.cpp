#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    stack<string> theStack;
    theStack.push("ALI");
    theStack.push("MALEK");
    theStack.push("JAVID");
    theStack.push("MK");
    theStack.push("MA");

    cout << "\nSIZE:" << theStack.size();
    while(!theStack.empty()){
        cout << endl << theStack.top(); 
        theStack.pop();
    }

    cout << "\n\n";
    return 0;
}
