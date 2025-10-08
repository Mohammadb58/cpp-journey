#include<iostream>
#include<map>
#include<vector>
using namespace std;

map<string, int> countWords(const vector<string>& fruits){
    map<string, int> countedWords;
    for(int i = 0; i < fruits.size(); i++){
        countedWords[fruits[i]]++;
    }

    return countedWords;
}

int main() {
    cout << "\n\n";
    vector<string> fruits = {"apple", "banana", "apple", "cherry", "banana", "apple"};
    map<string, int> countedWords = countWords(fruits);

    for(const auto& pair : countedWords){
        cout << pair.first << " " << pair.second << endl;
    }
    cout << "\n\n";
    return 0;
}
