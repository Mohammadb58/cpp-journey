#include<iostream>
using namespace std;

int main(){
    int n=1231;
    int total = 0;
    while (n > 0){
        total += n % 10;
        n /= 10;
    }
    cout << '\n' << total << '\n';


    return 0;
}