#include <iostream>

using namespace std;

int main(){
    cout << "\n-----------------------------------------\n";
    string name;
    int count = 0, len = 0;
    cout << "\nPlease enter you full name: ";
    getline(cin, name);
    int nameFullLen = name.length();
    while(count != nameFullLen){
        //cout << '\n' << name[count];
        if (name[count] != ' '){
            len++;
        }
        count++;
    }
    if(len > 0){
        cout << "\nHello, " << name << "!";
        cout << "\nThe name has " << len << " chars!";
    }
    else{
        cout << "\nInvaild name!";       
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}

