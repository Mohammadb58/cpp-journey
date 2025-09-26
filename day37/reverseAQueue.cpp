#include<iostream>
#include<queue>
#include<stack>
#include<algorithm>
using namespace std;

queue<int> revQueue(queue<int>& nums){
    stack<int> revStack;
    queue<int> finalQ;
    while(!nums.empty()){
        revStack.push(nums.front());
        nums.pop();
    }
    while(!revStack.empty()){
        finalQ.push(revStack.top());
        revStack.pop();
    }
    return finalQ;
}

int main() {
    cout << "\n\n";
    queue<int> nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);

    queue<int> revOfNums = revQueue(nums);

    while(!revOfNums.empty()){
        cout << "\nNum: " << revOfNums.front();
        revOfNums.pop();
    }
    cout << "\n\n";
    return 0;
}
