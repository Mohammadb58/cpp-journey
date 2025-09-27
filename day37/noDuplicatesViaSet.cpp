#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    vector<int> nums = {1,2,2,3,4,5,5,5,5,5};
    set<int> noDupNums;
    for(int i = 0; i < nums.size(); i++){
        noDupNums.insert(nums.at(i));
    }
    for(int num : noDupNums){
        cout << num << endl;
    }

    cout << "\n\n";
    return 0;
}
