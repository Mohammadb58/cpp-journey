#include<iostream>

using namespace std;

int main(){
    cout << "\n-----------------------------------------\n";
    double num = 0;
    cout << "Enter a num: ";
    cin >> num;
    if(num >= 2){
        while(num > 1){
            num = num / 2;
            if(num <= 1){
                break;
            }
            cout << num << '\n';
        }
    }
    else{
        cout << "\nAlready below threshold!";
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}