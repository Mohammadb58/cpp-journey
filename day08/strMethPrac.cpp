#include <iostream>

using namespace std;

int main(){
    string name = "Mohammad   ";
    int leading = name.find_first_not_of(' ');
    int trailing = name.find_last_not_of(' ');
    int len = name.length();
    string newName = name.erase(trailing+1, len-trailing);
    int len2 = newName.length();

    cout << '\n' << trailing << '\n' << newName << '\n' << len << '\n' << len2 << '\n';
    return 0;
}