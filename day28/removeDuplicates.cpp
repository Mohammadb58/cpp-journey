#include<iostream>
#include<limits>

using namespace std;

void uniqueCount(int nums[], int SIZE){
    int foundIndxAdj = 0;
    bool seen = false;
    int seenArrayNums[SIZE] = {};
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
    // printing the array
    cout << "\nNEW ARRAY: ";
    for(int i = 0; i < SIZE - foundIndxAdj; i++){
        cout << seenArrayNums[i] << " ";
    }
}

int main(){
    cout << "\n-----------------------------------";
    int nums[] = {10, 5, 8, 3, 5, 9, 10};
    int SIZE = sizeof(nums)/sizeof(nums[0]);
    uniqueCount(nums, SIZE);
    cout << "\n-----------------------------------";

    return 0;
}