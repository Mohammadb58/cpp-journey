#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    cout << "\n------------------------------";
    ofstream fout("testingFileWriting.txt");
    for(int i = 0; i < 10000; i++){
        fout << i << ". " << "COOKED!" << "\n";
    }
    fout.close();
    cout << "\n------------------------------";
    return 0;
}