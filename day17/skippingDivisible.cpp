#include<iostream>

using namespace std;

int main(){
    for(int i = 10; i <= 30; i++){
        if (i%4 == 0){
            continue;
        }
        else{
            cout << i << ' ';
        }
    }
    return 0;
}