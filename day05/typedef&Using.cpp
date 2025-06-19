#include <iostream>

using namespace std;

typedef double decimalNum;
typedef pair<string, int> dictionary_t;
using character = char;

int main(){
    decimalNum num;
    cout << "Enter a dec num: ";
    cin >> num;
    cout << num << endl;

    // char still works 
    char a;
    character b;
    cout << "\nEnter a char: ";
    cin >> a;
    cout << "char: " << a;
    cout << "\nEnter a char: ";
    cin >> b;
    cout << "character: " << b << endl;

    dictionary_t score = {"Mohammad", 90};
    
    cout << score.first << '-'<< score.second << endl;

    return 0;
}