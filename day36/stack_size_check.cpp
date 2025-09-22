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

    cout << "\nSIZE: \n" << theStack.size();
    while(!theStack.empty()){
        cout << theStack.top() << endl; 
        theStack.pop();
    }

    cout << "\n\n";
    return 0;
}
