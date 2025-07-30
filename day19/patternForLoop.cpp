#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    for(int i= 1; i <= 5; i++){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "-----------------------------------";
    return 0;
}