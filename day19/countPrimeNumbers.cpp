#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    bool notPrimeFlag = false;
    for(int i = 2; i <= 100; i++){
        for(int j = i - 1; j >= 2; j--){
            if (i % j == 0){
                notPrimeFlag = true;
            }
        }
        if(notPrimeFlag){
            cout << i << " NOT PRIME.\n";
        }
        else{
            cout << i << " PRIME.\n";
        }
        notPrimeFlag = false;
    }

    /*
    NOTES:
    for PRIME
    n=10 for example 
    we start at n - 1
    10%9= 1
    10%8= 2
    10%7= 3
    10%6= 4
    10%5= 0
    10%4= 2
    10%3= 1
    10%2= 0
    STOP HERE
    Conc: sinsce we have at lease one 0 it must not be PRIME.
    */
    cout << "-----------------------------------";
    return 0;
}