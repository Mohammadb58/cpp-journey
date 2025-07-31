#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int rows = 0, z = 0;
    cout << "\nPlease enter the amount of ROWS: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            z++;
            cout << z << " ";
        }
        cout << "\n";
    }

    cout << "-----------------------------------";
    return 0;
}