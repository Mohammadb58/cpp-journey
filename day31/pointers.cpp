#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "\n-----------------------------------";
    int num = 58;
    int* pNum = &num;

    // changing the valueof num theu pNum
    *pNum = 99;
    cout << "\nnum: " << num;
    cout << "\npNum: " << *pNum;

    cout << "\nnum: " << &num;
    cout << "\npNum: " << &pNum;
    cout << "\n-----------------------------------";
    return 0;
}