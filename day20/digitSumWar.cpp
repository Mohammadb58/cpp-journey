#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int j = 0, z = 0, sum = 0, total = 0;
    for (int i = 1; i <= 500; i++){
        sum = 0;
        j = i;
        while (j > 0){
            z = j % 10;
            sum += z;
            j = j / 10;
        }
        if(sum % 2 != 0){
            total += i;
        }
    }
    cout << "\n\n" << total << "\n\n";
    
    cout << "-----------------------------------";
    return 0;
}