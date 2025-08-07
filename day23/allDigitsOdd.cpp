#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    int num = 0, curr = 0, numAmount = 0, counter = 0;
    bool odd = true;
    cout << "How many numbers would you like to enter: ";
    cin >> numAmount;
    for (int i = 1; i <= numAmount; i++){
        num = 0;
        odd = true;
        cout << "\nEnter the number: ";
        cin >> num;
        while (num > 0){
            curr = num % 10;
            if (curr % 2 == 0){
                odd = false;
                break;
            }
            num /= 10;
        }
        if(odd){
            cout << "All digits are odd!";
            counter++;
        }
        else{
            cout << "FAILED!!!";
        }
    }
    cout << "\n\n" << counter << " out of " << numAmount << " passed!!!";

    cout << "\n-----------------------------------";
    return 0;
}

