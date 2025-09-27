#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    unordered_set<int> nums = {1, 2, 3, 4, 5};
    bool isThere = nums.count(3);
    if(isThere){
        cout << "\n3 is in the set";
    }
    else{
        cout << "\n3 is not in the set";
    }
    cout << "\n\n";
    for(auto it = nums.begin(); it != nums.end(); it++){
        cout << *it << " ";
    }
    cout << "\nSIZE: " << nums.size();
    nums.clear();
    cout << "\nNEW SIZE: " << nums.size();

    cout << "\n\n";
    return 0;
}
