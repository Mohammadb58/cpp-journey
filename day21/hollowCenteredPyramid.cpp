#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------\n";
    int n = 5;
    for (int i = 1; i <= n; i++){
        for (int j = n; j > i; j--){
            cout << " ";
        }
        cout << "*";
        if(i > 1){
            for (int k = 1; k <= (2 * i - 3); k++) {
                cout << " ";
        }
        cout << "*";
        }
        cout << endl;   
    }
    cout << "-----------------------------------";
    return 0;
}