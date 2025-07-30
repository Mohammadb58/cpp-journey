#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 55, sum = 0;   

    while (n > 0){
        sum += n % 10;
        n = n / 10;
    }
    cout << "\n" << sum <<"\n";
    cout << "-----------------------------------";
    return 0;
}