#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> nums = {10, 20, 30, 40, 50};
    nums[0] = 100;
    nums[1] = 500;
    for(int num : nums){
        cout << num << " ";
    }
    cout << "\n\n";
    return 0;
}
