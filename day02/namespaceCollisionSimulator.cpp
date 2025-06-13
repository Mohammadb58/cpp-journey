#include<iostream>

using namespace std;

namespace SS{
    int x = 5;
}
int main(){
    using namespace SS;

    // This is like saying go to SS get x and print it!
    cout << SS::x << endl;

    // This is a string '55' not the int 55!
    string x = "55";

    cout << x << endl;

    cout << "THe value of the int x is " << SS::x << " and the value of the string x is " << x << endl;

    // The guessed x 
    cout << "The guessed x " << x << endl;
    cout << "The guessed x " << x << endl;

    // This is where the issue lies, the local version overwrites the int 5 
    // This issue can also occur using the using namespace std;
    
    return 0;
}