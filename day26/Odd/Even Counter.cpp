#include<iostream>
#include<algorithm>
using namespace std;

bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }
    // no need for the else sinsce we exit if even 
    return false;
}
void countOddEven(int start, int end, int &evenCount, int &oddCount){
    if(start > end){
        swap(start, end);
    }
    for(int i = start; i <= end; i++){
        bool even = isEven(i);
        if(even){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
}
void runTests(){
    int evenCount = 0, oddCount = 0, start = 10, end = 4;
    countOddEven(start, end, evenCount, oddCount);
    cout << "EVEN: " << evenCount;
    cout << "\nODD: " << oddCount;
}

int main(){
    cout << "\n-----------------------------------";
    runTests();
    cout << "\n-----------------------------------";

    return 0;
}