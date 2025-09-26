#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

int QueueSumFunction(queue<int>& nums){
    int sum = 0;
    while(!nums.empty()){
        sum += nums.front();
        nums.pop();
    }
    return sum;
}

int main() {
    cout << "\n\n";
    queue<int> nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);

    int sum = QueueSumFunction(nums);
    cout << "\nSUM: " << sum;
    cout << "\n\n";
    return 0;
}
