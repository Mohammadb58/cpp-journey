#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "\n-----------------------------------";
    int num = 1;
    int* pNum = &num;

    cout << "\nnum val: " << num; // 1
    cout << "\nnum address: " << &num; // hex address of num
    cout << "\nnum address deref: " << *(&num); // 1
    cout << "\npNum val: " << pNum; // hex address of num
    cout << "\npNum address: " << &pNum; // hex address of pNum
    cout << "\npNum address deref: " << *(&pNum); // hex address of num 
    cout << "\npNum address x2deref: " << **(&pNum); // hex address of num 
    cout << "\n-----------------------------------";
    return 0;
}