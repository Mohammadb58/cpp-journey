#include <iostream>
#include <queue>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";

    queue<int> ints;
    ints.push(12);
    ints.push(15);
    ints.push(17);
    ints.push(27);
    ints.push(44);
    // old 
    cout << "\nFront: " << ints.front();
    cout << "\nBack: " << ints.back();
    cout << "\nSize: " << ints.size();

    // x2 pops
    if(!ints.empty()){
        ints.pop();
        ints.pop();
    }
    cout << "\n\n";
    //new
    cout << "\nFront: " << ints.front();
    cout << "\nBack: " << ints.back();
    cout << "\nSize: " << ints.size();
    cout << "\n\n";
    return 0;
}
