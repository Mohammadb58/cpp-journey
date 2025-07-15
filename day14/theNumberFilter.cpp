#include <iostream>
using namespace std;

int main() {
    cout << "\n-----------------------------------------\n";
    int amountOfNums = 0, num = 0, even = 0, odd =0, zero = 0;
    cout << "\nHow many numbers would you like to enter: ";
    cin >> amountOfNums;
    if (amountOfNums > 0){
        while(amountOfNums != 0){
            cout << "\nEnter num: ";
            cin >> num;
            if (num % 2 == 0){
                even++;
            }
            else if(num % 2 != 0){
                odd++;
            }
            if(num == 0){
                zero++;
            }
            amountOfNums--;
        }
        cout << "There was " << even << " even nums!\n" << "There was " << odd << " odd nums!\n" << "There was " << zero << " zeros!\n";
    }
    else{
        cout<< "\nInvaild amount!";
    }
    

    cout << "\n-----------------------------------------\n";
    return 0;
}
