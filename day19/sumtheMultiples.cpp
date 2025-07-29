#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int z = 0;
    for(int i = 1; i <= 100; i++){
        if (i % 3 == 0 || i % 7 == 0){
            z += i;
        }
    }
    cout << "\n\n" << z << "\n\n";

    cout << "\n-----------------------------------";
    return 0;
}