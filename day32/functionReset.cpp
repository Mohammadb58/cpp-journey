#include<iostream>

using namespace std;

void resetPtr(int** ppNum){
    *ppNum = nullptr;
}

int main(){
    cout << "\n------------------------------";
    int num = 42;
    int* pNum = &num;
    cout << "\npNum: " << pNum;
    resetPtr(&pNum);
    cout << "\npNum: " << pNum;
    cout << "\n------------------------------";
    return 0;
}