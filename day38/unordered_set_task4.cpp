#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    unordered_set<string> anm = {"cat", "dog", "bird"};
    anm.erase("dog");
    cout << "\nSIZE: " << anm.size() << endl;
    if(!anm.empty()){ 
        for(const string& an : anm){
            cout << an << " ";
        }
    }
    anm.clear();
    if(anm.empty()){
        cout << "\nEmpty Now";
    }
    cout << "\n\n";
    return 0;
}
