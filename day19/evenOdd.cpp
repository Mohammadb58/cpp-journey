#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    for(int i = 1; i <= 15; i++){
        if(i % 2 != 0){
            cout << i << " ";
        }
        else{
            cout << -i << " ";
        }
    }

    cout << "\n-----------------------------------";
    return 0;
}