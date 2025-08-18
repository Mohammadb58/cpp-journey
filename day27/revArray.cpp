#include<iostream>
#include<limits>

using namespace std;

int getValidNum(){
    int num = 0;
    cout << "\nWhat is the number: ";
    while(!(cin >> num) || num <= 0 || num > 100){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nInvaild, Num: ";
    }
    return num;
}

int main(){
    cout << "\n-----------------------------------";
    int arraySize = 0, currentNumToStoreInArray = 0;
    cout << "\nHow many numbers would you like in the array?";
    arraySize = getValidNum();
    int numsArray[arraySize];
    int theCopyOfNumsArray[arraySize];

    for(int i = 0; i < arraySize; i++){
        currentNumToStoreInArray = getValidNum();
        numsArray[i] = currentNumToStoreInArray;
    }
    cout << "\nYou entered: ";
    for(int j = 0; j < arraySize; j++){
        cout << numsArray[j] << " ";
        theCopyOfNumsArray[j] = numsArray[j];
    }
    cout << "\nIn reverse: ";
    for (int k = arraySize - 1; k >= 0; k--){
        cout << numsArray[k] << " ";
        theCopyOfNumsArray[numsArray - numsArray];
    }

    cout << "\nThe Copied Array: ";
    for(int c = 0; c < arraySize; c++){
        cout << theCopyOfNumsArray[c] << " ";
    }  
      

    cout << "\n-----------------------------------";

    return 0;
}