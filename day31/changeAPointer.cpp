#include<iostream>
#include<string>

using namespace std;

void resetPtr(int** pNum){
    *pNum = nullptr;
}

int main(){
    cout << "\n-----------------------------------";
    int num = 10;
    *(&num) = 42;
    /*
    int* pNum = &num;
    //int** ppNum = &pNum;
    resetPtr(&pNum);
    cout << "\npNum: " << pNum;
    */
   cout << "\nnum: " << num;
    cout << "\n-----------------------------------";
    return 0;
}