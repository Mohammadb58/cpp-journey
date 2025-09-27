#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    set<string> fruits;
    fruits.insert("apple");
    fruits.insert("banana");
    fruits.insert("cherry");
    fruits.insert("date");

    auto itrator = fruits.find("banana");
    if(itrator != fruits.end()){
        fruits.erase("banana");
    }
    fruits.insert("elderberry");

    for(const string& s : fruits){
        cout << s << " ";
    }

    cout << "\n\n";
    return 0;
}
