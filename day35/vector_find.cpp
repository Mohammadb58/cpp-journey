#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> nums = {5, 10, 15, 20, 25, 30};
    int target = 5;
    auto findTarget = find(nums.begin(), nums.end(), target);
    if(findTarget != nums.end()){
        int index = findTarget - nums.begin();
        cout << "\nFOUND at " << index;
    }
    else{
        cout << "\nNOT FOUND!";
    }
    cout << "\n\n";
    return 0;
}
