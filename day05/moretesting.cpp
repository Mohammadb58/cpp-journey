#include <iostream>
using namespace std;

int main(){
    // NOTES:
        // This won't crash if the user enter say "dog"
        // rather age will remain 0!
    cout << "Enter a an age: ";
    int age;
    cin >> age;
    cout << "\n-->" << age<< '\n';
}