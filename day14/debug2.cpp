#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter your age: ";
    getline(cin, input);
    int age = stoi(input);

    if (age = 18) {
        cout << "You're exactly 18!";
    }
    else if (age > 18) {
        cout << "You're older than 18.";
    }
    else {
        cout << "You're younger than 18.";
    }

    return 0;
}
