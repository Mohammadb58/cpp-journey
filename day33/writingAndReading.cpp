#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    cout << "\n------------------------------";
    ofstream fout("nums.txt");
    for(int i = 0; i <= 50; i++){
        fout << i << "\n";
    }
    fout.close();
    ifstream fin("nums.txt");
    int num =0, sum = 0;
    while(fin >> num){
        sum += num;
    }
    fout.close();
    cout << "\n" << sum;
    cout << "\n------------------------------";
    return 0;
}