#include <iostream>
using namespace std;

int main() {
    int nums[3][3] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}
    };
    cout << "\nARRAY: " << &nums;

    cout << "\n\nValue    Address\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << nums[i][j] << "   at   " << &nums[i][j] << "\n";
        }
    }
    cout << "\n\n";

    cout << nums[1]    << "\n";  // prints address of row 1 (same as &nums[1][0])
    cout << *nums[1]   << "\n";  // prints value at row 1 col 0 → 4
    cout << *(nums[1]+2) << "\n"; // row 1 col 2 → 6


    return 0;
}
