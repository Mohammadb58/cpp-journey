#include<iostream>
#include<sstream>
#include<string>
using namespace std;


int main(){
    cout << "\n------------------------------";
    string const TEXT = "Cpp is a powerful lang.";
    stringstream readFromText(TEXT);
    string word;
    while(readFromText >> word){
        cout << "\nWord: " << word;
    }

    cout << "\n------------------------------";
    return 0;
}