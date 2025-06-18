#include <iostream>
using namespace std;

int main(){
    // int, double, char, string, bool, const
    /*
    int num;
    // int
    cout << "Enter a num: ";
    cin >> num;
    cout << "Original num:" << num << endl;
    // This will keep the output as a double 
    double newNum = 1.5;
    cout << "num + num: " << newNum+num << endl;
    // This only works from 36-126 and it shows thr eqv in ASCII
    char newNum2 = (char)num;
    cout << "num as a char: " << newNum2 << endl;
    // This adds 65 for the 'A' plus the user num
    char newNum3 = 'A';
    cout << "num + char: " << newNum3+num << endl;
    // This makes the int a string like 65 -> "65"
    string newNum4 = to_string(num);
    cout << "num as a string: " << newNum4 << endl;
    //We cant do string + int but we can do string + string
    //string newNum5 = "Mohammad";
    //cout << "string + char: " << newNum5+num << endl; 
    // will retuen 1/0 
    bool newNum6 = (bool)num;
    cout << "num as a bool: " << newNum6 << endl;
    // any non-zero num is true else false 
    cout << "num as a boolalpha: " << boolalpha << newNum6 << endl;
    

    double dec;
    // double
    cout << "Enter a double dec: ";
    cin >> dec;
    cout << "Original dec: " << dec << endl;
    // This will keep the output as a double 
    double newDec = 1.5;
    cout << "dec + dec: " << newDec+dec << endl;
    // This only works from 36-126 and it shows the eqv in ASCII
    // AND 65.3 will be the sliced into 65 so 'A'
    char newDec2 = (char)dec;
    cout << "dec as a char: " << newDec2 << endl;
    // This adds 65 for the 'A' plus the user num = double in this case
    char newDec3 = 'A';
    cout << "dec + char: " << newDec3+dec << endl;
    // This makes the double a string like 65 -> "65.000000"
    string newDec4 = to_string(dec);
    cout << "dec as a string: " << newDec4 << endl;
    // will return 1/0 
    bool newDec5 = (bool)dec;
    cout << "dec as a bool: " << newDec5 << endl;
    // any non-zero num is true else false 
    cout << "dec as a boolalpha: " << boolalpha << newDec5 << endl;
    */

    char charA;
    // char
    cout << "Enter a char: ";
    cin >> charA;
    cout << "Original char: " << charA << endl;
    // This will add 1.5 ro the num eqv to the char is ASCII table  
    double value = 1.5;
    cout << "dec + 1.5: " << charA+value << endl;
    // This adds 'A' and user char to become int not a new char
    char charB = 'A';
    cout << "char + 'A': " << charB+charA << endl;
    // This adds the char to the name 
    string name = "Mohammad";
    cout << "Mohammad + char: " << name+charA << endl;
    // This will ret a num not 'A' tp "A", becuase to_string is for nums 
    string charA2 = to_string(charA);
    cout << "char as a string: " << charA2 << endl;
    // This converts 'A' tp "A"
    string charA3 (1, charA);
    cout << "char as a string: " << charA3 << endl;
    // will return 1/0 
    bool charA4 = (bool)charA;
    cout << "char as a bool: " << charA4 << endl;
    
    /*
    string name;
    // string
    cout << "Enter a string: ";
    getline(cin>>ws, name);
    cout << name << endl;
    bool working;
    // bool
    cout << "Enter a bool state(1/0): ";
    cin >> working;
    cout << working << endl;
    bool x;
    // const
    cout << "Enter a another bool state(1/0): ";
    cin >> x;
    const bool y = x;
    cout << y << endl;
    */
    return 0;
}