#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------\n";
    int w = 6, h = 4;
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            if(i == 1 || i == h || j == 1 || j == w){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "-----------------------------------";
    return 0;
}