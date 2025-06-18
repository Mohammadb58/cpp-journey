#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    cout << "\nWelcome to the Mystery ASCII program.\n";
    cout << "\nPlease enter a num from 65 to 90: ";
    cin >> a;
    if (a >= 65 && a <=90){
        char numToChar = (char)a;
        cout << "\nThe ASCII letter of your num is " << numToChar << "\n\n";
    }
    else {
        cout << "\nInvaild num.\n";
    }

    return 0;
}