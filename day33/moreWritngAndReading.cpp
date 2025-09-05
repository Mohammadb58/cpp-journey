#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    cout << "\n------------------------------";
    ofstream fout("zoo.txt");
    fout << "5 lions" << "\n3 tigers" << "\n7 bears";
    fout.close();
    ifstream fin("zoo.txt");
    int num =0, sum = 0;
    string word;
    while(fin >> ws){
        if(fin >> num){
            sum += num;
        }
        else{
            fin.clear();
            fin >> word;
        }
    }
    fout.close();
    cout << "\n" << sum;
    cout << "\n------------------------------";
    return 0;
}