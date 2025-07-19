#include<iostream>

using namespace std;

int main(){
    int n = 5;
    for (int i = 2; i <= 5; i++){
        for (int j = 2; j <= i - 1; j++){
            if (n%j == 0){
                cout << "\n\nPRIME\n\n";
            }
            else {
                cout << "\n\nNOT PRIME\n\n";
            }
        }
    }
    return 0;
}