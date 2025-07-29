#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    for(int i = 1; i <= 30; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout << "\nFizzBuzz.";
        }
        else if(i % 3== 0){
            cout << "\nFizz.";
        }
        else if(i % 5 == 0){
            cout << "\nBuzz.";
        }
        else{
            cout << "\n" << i;
        }
    }

    cout << "\n-----------------------------------";
    return 0;
}