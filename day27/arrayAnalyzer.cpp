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
    cout << "\nHow many nums would you like the array to have?";
    int theSizeOfTheArray = getValidNum();
    int theArray[theSizeOfTheArray] = {};
    int currentNum;
    int k = 4;
    for (int i = 0; i < theSizeOfTheArray; i++){
        currentNum = getValidNum();
        theArray[i] = currentNum;
    }
    int shiftedArray[theSizeOfTheArray] = {};
    for(int i = 0; i < theSizeOfTheArray; i++){
        shiftedArray[(i+k)% theSizeOfTheArray] = theArray[i];
    }
    cout << "\nOriginal array: ";
    for(int i = 0; i < theSizeOfTheArray; i++){
        cout << theArray[i] << " ";
    }
    cout << "\nShifted array: ";
    for(int i = 0; i < theSizeOfTheArray; i++){
        cout << shiftedArray[i] << " ";
    }

    cout << "\n-----------------------------------";

    return 0;
}