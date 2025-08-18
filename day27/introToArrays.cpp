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
    int nums = 0, sum = 0, numToSearch = 0, searchFound = 0;
    nums = getValidNum();
    // array dec
    int numsArray[nums] = {};
    int num = 0;
    for (int i = 0; i < nums; i++){
        num = getValidNum();
        numsArray[i] = num;
    }
    int largestNumInArray = numsArray[0];
    int smallesttNumInArray = numsArray[0];
    cout << "\nNow, enter a number to search for: ";
    cin >> numToSearch;
    if(sizeof(numsArray)/sizeof(numsArray[0]) != 0){
        cout << "\nThe array has " << sizeof(numsArray)/sizeof(numsArray[0]) << " nums!";
        for (int i = 0; i < (sizeof(numsArray)/sizeof(numsArray[0])); i++){
            if(numToSearch == numsArray[i]){
                searchFound++;
            }
            if(largestNumInArray < numsArray[i]){
                largestNumInArray = numsArray[i];
            }
            else if (smallesttNumInArray > numsArray[i]){
                smallesttNumInArray = numsArray[i];
            }
            sum += numsArray[i];
            if(i == 0){
                cout << "\nVal: " << numsArray[i] << " ";
            }
            else{
                cout << numsArray[i] << " ";
            }
        }
    }
    cout << "\nFOR A SUM OF " << sum;
    cout << "\nAND THE LARGEST NUM IS.... " << largestNumInArray;
    cout << "\nAND THE SMALLEST NUM IS.... " << smallesttNumInArray;
    cout << "\nThe num " << numToSearch << " was found " << searchFound << " time/s!";
    
    cout << "\n-----------------------------------";

    return 0;
}