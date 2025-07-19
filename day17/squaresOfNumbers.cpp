#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int z = 0;
    for(int i = 1; i <= 10; i++){
        z = pow(i,2);
        cout << z << ' ';
    }
    return 0;
}