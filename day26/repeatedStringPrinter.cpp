#include<iostream>
#include<algorithm>
using namespace std;

void printStringNTimes(string text, int count = 3){
    for(int i = 0; i < count; i++){
        cout << text << " ";
    }
}
void runTests(){
    printStringNTimes("MOE", 5);
}

int main(){
    cout << "\n-----------------------------------";
    runTests();
    cout << "\n-----------------------------------";

    return 0;
}