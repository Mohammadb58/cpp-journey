#include <iostream>

using namespace std;

int main(){
    cout << "\n-----------------------------------------\n";
    int row = 1, col = 1, num = 1;
    int rowUser = 1, colUser = 1;
    cout << "\nEnter row num: ";
    cin >> rowUser;
    cout << "\nEnter col num: ";
    cin >> colUser;
    while (rowUser <= 0 || colUser <= 0){
        cout << "\nInvaild input";
        cout << "\nEnter row num: ";
        cin >> rowUser;
        cout << "\nEnter col num: ";
        cin >> colUser;
    }
    while(row != rowUser + 1){
        col = 1;
        while(col != colUser + 1){
            cout << num << ' ';
            col++;
            num++;
        }
        cout << '\n';
        row++;
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}

