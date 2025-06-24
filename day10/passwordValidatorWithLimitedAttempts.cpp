#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------\n";
    string input, cleanInput;
    int count = 2, len, space;
    cout << "\nPassword: ";
    getline(cin >> ws, input);
    len = input.length();
    space = input.find_last_not_of(' ');
    cleanInput = input.substr(0, space+1);
    
    while(cleanInput != "BEE58" && count != 0){
        cout << "\nWrong, You have " << count << " attempts left!\n";
        count--;
        cout << "\nPassword: ";
        getline(cin >> ws, input);
        len = input.length();
        space = input.find_last_not_of(' ');
        cleanInput = input.substr(0, space+1);
    }
    if(cleanInput == "BEE58"){
        cout << "\n- Welcome!\n";
    }
    else{
        cout << "\nYou have used all your attempts, Account locked!\n";
    }
    
    cout << "\n------------------------------------------\n";
    return 0;
}