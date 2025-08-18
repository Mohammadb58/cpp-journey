#include<iostream>
#include<limits>

using namespace std;

int main(){
    cout << "\n-----------------------------------";
    int originalArray[] = {1, 2, 3, 4, 5};
    int sizeOfTheOriginalArray = sizeof(originalArray) / sizeof(originalArray[0]);
    int copyArray[sizeOfTheOriginalArray] = {};
    // Now the copy needs to have a rev copy as 5, 4, 3, 2, 1.
    // store a rev array into the 
    for(int i = 0; i < sizeOfTheOriginalArray; i++){
        copyArray[i] = originalArray[sizeOfTheOriginalArray - i - 1];
    }
    cout << "\nThe new array: ";
    for(int i = 0; i < sizeOfTheOriginalArray; i++){
        cout << copyArray[i] << " ";
    }

    cout << "\n-----------------------------------";

    return 0;
}