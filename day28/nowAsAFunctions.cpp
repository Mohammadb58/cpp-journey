#include<iostream>
#include<limits>

using namespace std;

int uniqueCount(int nums[], int SIZE, int seenArrayNums[]){
    int foundIndxAdj = 0, len = 0;
    bool seen = false;
    //int seenArrayNums[SIZE] = {};
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(nums[i] != seenArrayNums[j]){
                seen = false;
                //cout << "\n SEEN: " << seen;
            }
            else {
                seen = true;
                //SIZE--;
                //cout << "\n SEEN: " << seen;
                break;
            }
        }
        if (!seen){
            seenArrayNums[i - foundIndxAdj] = nums[i];
        }
        else{
            foundIndxAdj++;
        }
    }
    for(int i = 0; i < SIZE - foundIndxAdj; i++){
        len++;
    }
    return len;
}

int main(){
    cout << "\n-----------------------------------";
    int nums[] = {10, 5, 8, 3, 5, 9, 10};
    int SIZE = sizeof(nums)/sizeof(nums[0]);
    int seenArrayNums[SIZE] = {};
    int len = uniqueCount(nums, SIZE, seenArrayNums);
    cout << "\nNEW ARRAY: ";
    for (int i = 0; i < len; i++){
        cout << seenArrayNums[i] << " ";
    }
    cout << "\n-----------------------------------";

    return 0;
}