#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    queue<string> printer;
    printer.push("Doc1");
    printer.push("Doc2");
    printer.push("Doc3");

    // processing 
    while(!printer.empty()){
        cout << "\nProccessing: " << printer.front();
        cout << "\n\nDONE\n";
        cout << "\nCurrent size: " << printer.size();
        printer.pop();
    }
    cout << "\nALL DONE";
    cout << "\n\n";
    return 0;
}
