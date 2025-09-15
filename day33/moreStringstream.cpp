#include<iostream>
#include<sstream>
#include<string>
using namespace std;


int main(){
    cout << "\n------------------------------";
    string TEXT = "25 50 75";
    stringstream TEXTStream(TEXT);
    int num = 0, sum = 0, count = 0;
    while(TEXTStream >> num){
        sum += num;
        count++;
    }
    cout << '\n' << sum / count;
    
    cout << "\n------------------------------";
    return 0;
}