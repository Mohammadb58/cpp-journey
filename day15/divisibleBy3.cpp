#include<iostream>

using namespace std;

int main(){
    int z = 0;
    for(int i = 1; i <= 50; i++){
        if(i % 3 == 0){
            z++;
        }
    }
    cout << '\n' << z << '\n';

    return 0;
}