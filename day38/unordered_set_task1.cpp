#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    unordered_set<int> randNums = {10, 20, 30, 40, 20};

    for(const int& num : randNums){
        cout << num << " ";
    }
    cout << "\nSIZE: " << randNums.size();
    cout << "\n\n";
    return 0;
}
