#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int threeCount = 0;
    for(int i = 1; i <= 1000; i++){
        int j = i;
        while(j > 0){
            if(j % 10 == 3){
                threeCount++;
            }
            j = j / 10;
        }
    }
    cout << '\n' << threeCount << '\n';
    cout << "\n-----------------------------------";
    return 0;
}