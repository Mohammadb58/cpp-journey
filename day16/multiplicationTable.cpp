#include<iostream>

using namespace std;

int main(){
    int n = 5, z = 0;
    for(int i = 1; i <= 10; i++){
        z = n * i;
        cout << n << " * " << i << " = " << z << '\n';
    }

    return 0;
}