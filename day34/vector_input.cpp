#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> nums;
    int userAmountOfNums = 0, num = 0;
    cout << "\nHow many elements: ";
    cin >> userAmountOfNums;

    for(int i = 0; i < userAmountOfNums; i++){
        cout << "\nEnter value: ";
        cin >> num;
        nums.push_back(num);
    }

    for(int numL: nums){
        cout << numL << " ";
    }
    cout << "\n\n";
    return 0;
}
