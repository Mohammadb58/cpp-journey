#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 5;

    for (int i = 1; i <= n*2-1; i++){
        for(int j = n-1; j >= i; j--){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            if (i <= n){
                if(k == 1 || k == i){
                    cout << '*' << " ";
                }
                else{
                    cout << "  ";
                }
            }
            else{
                if(k == i-1|| k == i){
                    cout << ' ' << ' ';
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    
    cout << "-----------------------------------";
    return 0;
}

