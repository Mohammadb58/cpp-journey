#include <iostream>
#include <stack>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    stack<int> stackOfInts;
    stackOfInts.push(100);
    stackOfInts.push(200);
    stackOfInts.push(300);

    cout << "\nTOP: " << stackOfInts.top(); // 300

    stackOfInts.pop(); 
    cout << "\nNEW TOP: " << stackOfInts.top(); // 200

    cout << "\nSIZE: " << stackOfInts.size(); // 2

    if(stackOfInts.empty()){
        cout << "\nEMPTY";
    }
    else{
        cout << "\nNOT EMPTY";
    }

    cout << "\n\n";
    return 0;
}
