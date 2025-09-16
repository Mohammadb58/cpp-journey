#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> nums = {4,22,1,2,3,4};
    int target = 3, index = 0;
    bool found = false;

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            found = true;
            index = i;
            break;
        }
    }
    if(found){
        cout << "\nFOUND AT Index " << index;
    }
    else{
        cout << "\nNOT FOUND!";
    }
    cout << "\n\n";
    return 0;
}
