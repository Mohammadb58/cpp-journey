#include<iostream>
#include<string>

using namespace std;

// we need a struct to hold both min and max values we will return to main

struct arrayMinMax{
    int minNumInArray = 0, maxNumInArray = 0;
};

arrayMinMax findMinMax(int ourArray[], int sizeOfTheArray){
    arrayMinMax arr;
    int minNumInArray = ourArray[0];
    int maxNumInArray = ourArray[0];
    cout << "DEBUG: min: " << minNumInArray << " max: " << maxNumInArray;
    for(int i = 0; i < sizeOfTheArray; i++){
        if(ourArray[i] > maxNumInArray){
            arr.maxNumInArray = ourArray[i];
        }
        else if (ourArray[i] < minNumInArray){
            arr.minNumInArray = ourArray[i];
        }
    }
    return arr;
}

int main(){
    cout << "\n-----------------------------------";
    int ourArray[] = {3, 6, 7, 2, 22, 10, 10, 23, 44, 53};
    int sizeOfTheArray = sizeof(ourArray) / sizeof(ourArray[0]);
    arrayMinMax arr = findMinMax(ourArray, sizeOfTheArray);
    cout << "\nThe array: \nMin: " << arr.minNumInArray << "\nMax: " << arr.maxNumInArray;  
    cout << "\n-----------------------------------";

    return 0;
}