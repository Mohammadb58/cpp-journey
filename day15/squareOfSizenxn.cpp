#include<iostream>

using namespace std;

int main(){
    int z = 0;
    for(int i = 1; i <= 100; i++){
        if((i % 2) == 0){
            z += i;
        }
        else{
            continue;
        }
    }
    cout << '\n' << z << "\n\n";

    return 0;
}