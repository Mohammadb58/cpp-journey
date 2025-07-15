#include <iostream>
using namespace std;

int main() {
    cout << "\n-----------------------------------------\n";
    double num;
    cout << "Enter a num: ";
    cin >> num;
    int num2 = int(num);
    cout << "\nOriginal num is " << num << "\n\nThe new num is " << num2;
    if (num != num2){
        cout << "\n\nDecimal lost!";
    }
    else{
        cout << "\nNo Decimal was lost!";
    }

    cout << "\n-----------------------------------------\n";
    return 0;
}
