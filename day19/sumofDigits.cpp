#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    // Note: the n value can be chnaged or req from the user
    int n = 55, sum = 0;   

    while (n > 0){
        sum += n % 10;
        n = n / 10;
    }
    cout << "\n" << sum <<"\n";
    cout << "-----------------------------------";
    return 0;
}