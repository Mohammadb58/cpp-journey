#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,z,y,x;
    cout << "\nPlease enter a number: ";
    cin >> a;
    cout << "\nPlease enter another number (not the same as the prev num.): ";
    cin >> b;
    if (a==b){
        cout << "\nThey can't be the same number.\n" << endl;
    }
    else {  
        z = max(a, b);
        y = min(a,b);
        x = z - y;
        cout << "\nThe largest num is " << z << " it's larger than " << y << " by " << x;
        if (y >= 0){
            cout << "\nThe square root of " << y << " is " << sqrt(y) << endl;
        }
    }
    return 0;
}