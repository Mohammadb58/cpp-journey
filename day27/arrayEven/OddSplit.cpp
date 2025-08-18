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
    int currentNum, evenNumCounter = 0, oddNumCounter = 0;
    for (int i = 0; i < theSizeOfTheArray; i++){
        currentNum = getValidNum();
        theArray[i] = currentNum;
    }
    cout << "\nThe array has: ";
    for(int i = 0; i < theSizeOfTheArray; i++){
        cout << theArray[i] << " ";
    }
    cout << "\nThe array evens are: ";
    for(int i = 0; i < theSizeOfTheArray; i++){
        if(theArray[i] % 2 == 0){
            cout << theArray[i] << " ";
            evenNumCounter++;
        }
    }
    cout << "\nCount: " << evenNumCounter;
    cout << "\nThe array odds are: ";
    for(int i = 0; i < theSizeOfTheArray; i++){
        if(theArray[i] % 2 != 0){
            cout << theArray[i] << " ";
            oddNumCounter++;
        }
    }
    cout << "\nCount: " << oddNumCounter;

    cout << "\n-----------------------------------";

    return 0;
}