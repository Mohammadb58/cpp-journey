#include<iostream>
#include<limits>

using namespace std;

void sumOf2DArray(int nums[][3], int rows, int cols){
    int sum = 0;
    for(int i = 0; i < rows; i++){
        sum = 0;
        for(int j =0; j < cols; j++){
            //cout << "\nDEBUG: " << j;
            sum += nums[i][j];
        }
        cout << "\nSUM of " << i + 1 << " row: " << sum;
    }
}

int main(){
    cout << "\n-----------------------------------";
    // 2D array
    int nums[][3] = {{1, 2, 3}, 
                   {4, 5, 6},
                   {7, 8, 9}};
    int rows = sizeof(nums) / sizeof(nums[0]);
    int cols = sizeof(nums[0]) / sizeof(nums[0][0]);
    sumOf2DArray(nums, rows, cols);
    cout << "\n-----------------------------------";

    return 0;
}