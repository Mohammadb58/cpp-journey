#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int n = 4, k = 1;
    //string space = string(k, ' ');
    n = 4*2-1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            if(i == 1 || i == n){
                cout << "*";
            }
            else{
                cout << "* *";

            }
        }
        cout << endl;
        
    }

    cout << "-----------------------------------";
    return 0;
}