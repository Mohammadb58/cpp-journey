#include<iostream>
#include<string>

using namespace std;

void resetPtr(int** ppNum){
    *ppNum = nullptr;
}

int main(){
    cout << "\n-----------------------------------";
    int num = 10;
    int* pNum = &num;
    resetPtr(&pNum);
    cout << "\npNum: " << pNum;
    cout << "\n-----------------------------------";
    return 0;
}