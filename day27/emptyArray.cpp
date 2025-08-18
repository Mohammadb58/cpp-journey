#include<iostream>
#include<limits>

using namespace std;

int main(){
    cout << "\n-----------------------------------";
    int array1[5] = {};
    int array2[5];

    cout << "\nArray 1: ";
    for (int i = 0; i < 5; i++){
        cout << array1[i] << " ";
    }
    cout << "\nArray 2: ";
    for (int i = 0; i < 5; i++){
        cout << array2[i] << " ";
    }
    cout << "\n-----------------------------------";

    return 0;
}