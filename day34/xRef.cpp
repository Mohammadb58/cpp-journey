#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 6;

    int& xRef = x;   // xRef is a reference (alias) to x
    int z = xRef;    // z gets a copy of x's current value

    xRef += 2;       // x = x + 2 → x becomes 7
    xRef = y;        // assign y's value (6) into x
    y += 4;          // y = 10

    cout << x << " " << y << " " << z << endl;

    return 0;
}
