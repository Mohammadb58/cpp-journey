#include<iostream>
#include<sstream>
#include<string>
#include<cctype>
using namespace std;


int main(){
    cout << "\n------------------------------";
    string const TEXT = "20 dogs 30 cats 50 birds";
    int num = 0, sum = 0;
    string word;
    stringstream TEXTStream(TEXT);
    while(TEXTStream >> ws){
        if(TEXTStream >> num){
            sum += num;
        }
        else{
            TEXTStream.clear(); 
            TEXTStream >> word; 
        }
    }
    cout << "\nSum: " << sum;
    cout << "\n------------------------------";
    return 0;
}