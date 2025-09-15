#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> words;
    words.push_back("Apple");
    words.push_back("Strawbarry");
    words.push_back("Banana");
    words.push_back("Green Apples");
    words.push_back("Red Apples");
    cout << endl;
    for(int i = 0; i < words.size(); i++){
        cout << words[i] << " ";
    }
    words.pop_back();
    words.pop_back();
    cout << endl;
    for(int i = 0; i < words.size(); i++){
        cout << words[i] << " ";
    }
    return 0;
}
