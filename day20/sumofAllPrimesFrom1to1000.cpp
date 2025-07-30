#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    bool prime = true;
    int sum = 0;
    for(int i = 2; i <= 100000; i++){
        for(int j = i - 1; j >= 2; j--){
            if(i % j == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            sum += i;
        }
        prime = true;
    }
    cout << "The total is " << sum << endl;

    cout << "-----------------------------------";
    return 0;
}