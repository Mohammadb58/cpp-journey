#include <iostream>

using namespace std;

int main(){
    cout << "\n------------------------------\n";
    double num;
    cout << "\nPlease enter a postive none zero num: ";
    cin >> num;

    while (num <= 0){
        cout << "\nInvaild num.";
        cout << "\n\nPlease enter a postive none zero num: ";
        cin >> num;
    }

    while (num > 1){
        cout << '\n' << num;
        num -= 1;
    }
    cout << '\n' << 1;
    cout << "\n------------------------------\n";
    return 0;
}

