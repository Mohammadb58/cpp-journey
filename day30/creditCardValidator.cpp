#include<iostream>
#include<string>

using namespace std;

int sumOfOddDigits(int const creditNumber[], int const size){
    int sumOfOdd = 0;
    /*
    cout << "\nDEBUG: ";
    for(int i = 0; i <size; i++){
        cout << creditNumber[i] << " ";
    }
    */
    for(int i = 0; i < size; i++){
        if(i % 2 != 0){
            //cout << "\nDEBUG i: " << i;
            //cout << "\nDEBUG creditNumber[i]: " << creditNumber[i];
            sumOfOdd += creditNumber[i];
        }
    }
    return sumOfOdd;
}

int vaildatCreditNumber(int const creditNumber[], int const size, int updatedCreditArray[]){
    int curr = 0, j = 0, whileLoopCurr = 0;
    //cout << "\nDEBUG: SIZE: " << size;
    for(int i = 0; i < size; i+=2){
        //cout << "\nDEBUG: i " << i;
        curr = creditNumber[i];
        curr *= 2;
        if(curr >= 10){
            while(curr > 0){
                whileLoopCurr = curr % 10;
                //cout << "\nDEBUG: " << curr;
                updatedCreditArray[j] = whileLoopCurr;
                curr /= 10;
                //cout << "\nDEBUG: " << curr;
                //cout << "\nDEBUG: if " << j << " ---- " << whileLoopCurr;;
                j++;
            }
        }
        else{
            //cout << "\nDEBUG: else " << j << " ---- " << curr;
            updatedCreditArray[j] = curr;
            j++;
        }
    }
    return j;
}

int main(){
    cout << "\n-----------------------------------";
    int const creditNumber[] = {6, 0, 1, 1, 0, 0, 0, 9, 9, 0, 1, 3, 9, 4, 2, 4};
    int size = sizeof(creditNumber) / sizeof(creditNumber[0]);
    int updatedCreditArray[size] = {};
    int j = vaildatCreditNumber(creditNumber, size, updatedCreditArray);
    int sum = 0;

    for(int i = 0; i < j; i++){
        sum += updatedCreditArray[i];
    }
    //cout << "\nSum : " << sum;

    int sumOfOdd = sumOfOddDigits(creditNumber, size);
    //cout << "\nDEBUG sumOfOdd: " << sumOfOdd;
    if((sum + sumOfOdd) % 10 == 0){
        cout << "\nVaild!";
    }
    else{
        cout << "\nInvild!";
    }

    cout << "\n-----------------------------------";
    return 0;
}