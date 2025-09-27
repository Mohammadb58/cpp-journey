#include<iostream>
#include<set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    set<int> nums;
    nums.insert(1);
    nums.insert(2);
    nums.insert(2);
    nums.insert(3);
    nums.insert(4);
    nums.insert(5);

    for(int num : nums){
        cout << num << endl;
    }
    nums.erase(2);
    // the set has 1 3 4 5 
    auto itrator = nums.find(2);
    if(itrator != nums.end()){
        cout << "\nFound";
    }
    else{
        cout << "\nNot found";
    }
    cout << "\n\n";
    return 0;
}
