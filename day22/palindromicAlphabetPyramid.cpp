#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 4, num = 0;
    char convChar = 'A';
    for (int i = 1; i <= n; i++){
        for (int j = n*2-1; j > i*2-1; j--){
            cout << " ";
        }
        num = i+64;
        for (int k = 1; k <= i*2-1; k++){
            cout << char(num) << " ";
            if (k < i){
                num--;
            }
            else{
                num++;
            }
        }
        cout << endl;
    }
    
    cout << "-----------------------------------";
    return 0;
}

