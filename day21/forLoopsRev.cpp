#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 4;
    //n = 4*2-1;
    for(int i = 1; i <= n; i++){
        for(int j = 3; j >= i; j--){
            cout << " ";
        }
        for(int k = 1; k <= 2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "-----------------------------------";
    return 0;
}