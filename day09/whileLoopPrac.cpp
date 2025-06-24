#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "------------------------------------------------------\n";
    string myName;
    cout << "\nEnter my name: ";
    getline(cin >>ws, myName);
    int space = myName.find_last_not_of(' ');
    string myName2= myName.substr(0, space+1);
    
    while(myName2.empty() || myName2 != "Mohammad"){
        cout << "\nThat's not how you spell my name!";
        cout << "\nEnter my name: ";
        getline(cin >>ws, myName);
        space = myName.find_last_not_of(' ');
        myName2= myName.substr(0, space+1);
    
    }
    cout << "\nCorrect that is it!\n";
    cout << "\nName2: " << myName2;
    cout << "\n------------------------------------------------------\n";
    return 0;
}