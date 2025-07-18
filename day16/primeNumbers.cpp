#include<iostream>

using namespace std;

int main(){
    for(int i = 2; i <= 6; i++){
        for (int j = 6; j > i; j--){
            if (j % i != 0){
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}