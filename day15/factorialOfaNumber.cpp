#include<iostream>

using namespace std;

int main(){
    int z = 1;
    int n = 3;
    if (n >= 1){
        for(int i = 1; i <= n; i++){
            z = i * z;
        }
    }
    else if (n == 0){
        z = 1;
    }
    else{
        z = 0;
    }
    cout << '\n' << z << '\n';
    return 0;
}