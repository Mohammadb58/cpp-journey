#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vecOfNumbers;
    for(int i = 1; i <= 10; i++){
        vecOfNumbers.push_back(i);
    }
    for(int i = 0; i < vecOfNumbers.size(); i++){
        if(i != vecOfNumbers.size() - 1){
            cout << vecOfNumbers[i] << " ";
        }
        else{
            cout << vecOfNumbers[i];
        } 
    }
    cout << endl;
    for(int i = vecOfNumbers.size() - 1; i >= 0; i--){
        if(i != 0){
            cout << vecOfNumbers[i] << " ";
        }
        else{
            cout << vecOfNumbers[i];
        } 
    }
    return 0;
}
