#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> nums = {10, 20, 30, 40, 50};
    nums.insert(nums.begin() + 2, 25);

    nums.erase(nums.begin() + 4);
    for(const int num : nums){
        cout << num << " ";
    }
    cout << "\n\n";
    return 0;
}
