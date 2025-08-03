#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 5, val = 0;
    for(int i = 1; i <= n; i++){
        for(int j = n*2-1; j > i*2-1; j--){
            cout << " ";
        }
        val = i;
        for(int k = 1; k <= i*2-1; k++){
            cout << val << " ";
            if (k < i){
                val++;
            }
            else{
                val--;
            }
        }
        cout << endl;
    }
    
    cout << "-----------------------------------";
    return 0;
}

