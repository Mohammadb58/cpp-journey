#include<iostream>
#include<string>

using namespace std;

bool magicSquareCheck(int arr[][3], int rows, int cols){
    int sum = 0, target = 0;
    for(int i = 0; i < rows; i++){
        target += arr[0][i];
    }
    //cout << "DEBUG TARGET: " << target;
    bool vaild = false;
    for(int i = 0; i < rows; i++){
        sum = 0;
        for(int j = 0; j < cols; j++){
          sum += arr[i][j];  
        }
        if(sum != target){
            return false;
        }
        sum = 0;
        for(int k = 0; k < cols; k++){
            sum += arr[k][i];
        }
        if(sum != target){
            return false;
        }
        //cout << "\nDEBUG: vaild " << boolalpha << vaild;
        //cout << "\nDEBUG: sum: " << sum;
    }
    sum = 0;
    // Main diagonal (top-left → bottom-right)
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                sum += arr[i][j]; 
                //cout << "\nDEBUG SUM: " << sum;
                //cout << "\ni = " << i << " j = " << j;
            }
        }
    }
    if(sum != target){
        return false;
    }

    sum=0;
    // Anti-diagonal (top-right → bottom-left)  
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i + j == rows-1){
                sum += arr[i][j]; 
            }
        }
    }
    if(sum != target){
        return false;
    }
    return true;
}

int main(){
    cout << "\n-----------------------------------";
    int magicArray[][3] = {{8, 1, 6}, 
                           {3, 5, 7},
                           {4, 9, 2}};

    int rows = sizeof(magicArray) / sizeof(magicArray[0]);
    int cols = sizeof(magicArray[0]) / sizeof(magicArray[0][0]);
    bool valid = magicSquareCheck(magicArray, rows, cols);
    if(valid){
        cout << "\nMagic Square";
    }
    else{
        cout << "\nNot Magic Square";
    }
    cout << "\n-----------------------------------";

    return 0;
}