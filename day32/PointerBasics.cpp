#include<iostream>

using namespace std;

int main(){
    cout << "\n------------------------------------";
    int num = 42;
    int* pNum = &num;


    cout << "\nThe value of num: " << num;

    cout << "\nThe address of num: " << &num;

    cout << "\nThe value of pNum: " << pNum;

    cout << "\nThe value pNum point to: " << *pNum;
    // *pNum says (pNum is a pointer * deref its value)
    // aka go to such address in memeory and get its value
    cout << "\n------------------------------------";
    return 0;
}