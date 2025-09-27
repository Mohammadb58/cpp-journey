#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    set<int> nums;
    nums.insert(1);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);
    nums.insert(6);
    nums.insert(7);
    nums.insert(8);
    nums.insert(9);
    nums.insert(10); 

    for(auto it = nums.begin(); it != nums.end();){
        if(*it % 2 == 0){
            it = nums.erase(it);
        }
        else{
            it++;
        }
    }
    cout << "\n";
    for(const int& num : nums){
        cout << num << " ";
    }
    cout << "\nSIZE: " << nums.size();

    cout << "\n\n";
    return 0;
}
