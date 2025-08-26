#include<iostream>

using namespace std;

int main(){
    cout << "\n------------------------------";
    int num = 42;
    int* pNum = &num;
    int** ppNum = &pNum;

    cout << "\naddress pNum: " << &pNum;   // -> These two should be the same
    cout << "\nvalue of ppNum: " << ppNum; // -> 
    cout << "\nValue of ppNum 1x deref: " << *ppNum; // this should be pNum value 
    cout << "\nValue of ppNum 2x deref: " << **ppNum; // this should be num value (42)
    cout << "\n------------------------------";
    return 0;
}