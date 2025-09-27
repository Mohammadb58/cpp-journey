#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    unordered_set<string> colors = {"red", "green", "blue", "yellow"};

    auto it = colors.find("green");
    if(it != colors.end()){
        colors.erase("green");
    }
    colors.insert("purple");

    for(const string& color : colors){
        cout << color << " ";
    }
    cout << "\nSSIZE: " << colors.size();
    cout << "\n\n";
    return 0;
}
