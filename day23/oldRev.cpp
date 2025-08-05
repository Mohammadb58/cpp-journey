#include<iostream>

using namespace std;

int main(){
    cout << "-----------------------------------";
    int num = 0, nums = 0, count = 0, sum = 0;

    cout << "\nHow many numbers would you like to enter: ";
    cin >> num;

    for(int i = 1; i <= num; i++){
        cout << "\nPlease enter the " << i << " num: ";
        cin >> nums;
        if (nums % 3 == 0 && nums % 4 == 0 && nums != 0){
            count++;
            sum += nums;
        }
    }
    cout << "\n\nBased on a secret rule, " << count << " of your nums followed it!";
    cout << "\nThe sum is " << sum << endl;

    
    cout << "-----------------------------------";
    return 0;
}

