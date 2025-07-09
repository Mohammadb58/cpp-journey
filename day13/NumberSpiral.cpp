#include <iostream>

using namespace std;

int main(){
    //cout << "1 2 3" << "\n8 9 4" << "\n7 6 5\n\n\n";
    cout << "\n-----------------------------------------\n";
    int row = 1, col = 1, num = 1, x = 0, y = 0;
    int rowUser = 3, colUser = 3;
    int grid[3][3] = {};
        
    while(x < colUser){
        grid[y][x] = num;
        while(y < rowUser){
            while(x < colUser){
                cout << grid[y][x];
                x++;
            }
            y++;
        }
        num++;
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}

