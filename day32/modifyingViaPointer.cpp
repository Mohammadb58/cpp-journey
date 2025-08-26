#include<iostream>

using namespace std;

int main(){
    cout << "\n------------------------------";
    int num = 42;
    int* pNum = &num;
    *pNum = 99;

    cout << "\nnum: " << num;
    cout << "\npNum: " << pNum;
    cout << "\n------------------------------";
    return 0;
}