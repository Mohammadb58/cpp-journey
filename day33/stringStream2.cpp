#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
using namespace std;


int main(){
    cout << "\n------------------------------";
    string const TEXT = "Data, structures are not fun to !!learn!!";
    string word;
    stringstream TEXTStream(TEXT);
    int WordCounter = 0;
    while(TEXTStream >> word){
        while(ispunct(word.back()) || word.front()){
            word.pop_back();
        }
        cout << "\n" << word;
        WordCounter++;
    }
    cout << "\nThe string has " << WordCounter << " words!";

    cout << "\n------------------------------";
    return 0;
}