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
    while (rowUser <= 2 || colUser <= 2){
        cout << "\nInvaild input";
        cout << "\nEnter row num: ";
        cin >> rowUser;
        cout << "\nEnter col num: ";
        cin >> colUser;
    }
        
    while(row != rowUser + 1){
        col = 1;
        while(col != colUser + 1){
            if (row == 1 || row == rowUser || col == 1 || col == colUser){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
            col++;
        }
        cout << '\n';
        row++;
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}

