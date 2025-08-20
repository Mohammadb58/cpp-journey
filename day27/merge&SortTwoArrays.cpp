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
    int arrayOneSize = 0, arrayTwoSize = 0, curr = 0, temp = 0;
    cout << "What is the size of the 1st array";
    arrayOneSize = getValidNum();
    cout << "What is the size of the 2st array";
    arrayTwoSize = getValidNum();
    // dec both arrays based on user input side 
    // However, cpp does not allow this its the IDE/GCC that allows it here in this case
    int arrayOne[arrayOneSize], arrayTwo[arrayTwoSize];
    
    // Filling array 1 with numbers.
    cout << "\nFill the First Array.";
    for(int i = 0; i < arrayOneSize; i++){
        curr = getValidNum();
        arrayOne[i] = curr;
    }
    // reseting curr num to be safe
    curr = 0;
    // Filling array 2 with numbers.
    cout << "\nFill the Second Array.";
    for(int i = 0; i < arrayTwoSize; i++){
        curr = getValidNum();
        arrayTwo[i] = curr;
    }
    // creating the 3rd array that will hold both array 1 & 2
    int arrayThree[arrayOneSize + arrayTwoSize];
    // filling it 
    for (int i = 0; i < arrayOneSize + arrayTwoSize; i++){
        if (i < arrayOneSize){
            arrayThree[i] = arrayOne[i];
        }
        else{
            arrayThree[i] = arrayTwo[i - arrayOneSize];
        }
    }
    // sorting the third array in ascending order
    // bubble sort 
    for(int i = 0; i < arrayOneSize + arrayTwoSize - 1; i++){
        // nested loop needed to run more than once
        // the idea here is for each elemnt there is in the array we need to check it agianst all elements to its right
        for(int j = 0; j < arrayOneSize + arrayTwoSize - i - 1; j++){
            if(arrayThree[j] > arrayThree[j + 1]){
                temp = arrayThree[j];
                arrayThree[j] = arrayThree[j + 1];
                arrayThree[j + 1] = temp;
            }
        }
    }

    // printing out the third array
    cout << "\nThird array: ";
    for (int i = 0; i < arrayOneSize + arrayTwoSize; i++){
        cout << arrayThree[i] << " ";
    }
    cout << "\n-----------------------------------";

    return 0;
}