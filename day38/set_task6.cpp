#include<iostream>
#include<set>
#include<unordered_set>
#include<algorithm>
using namespace std;


int main() {
    cout << "\n\n";
    set<string> fruits = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape"};
    set<string> banned = {"banana", "date", "fig"};

    for(const string& ban : banned){
        for(auto it = fruits.begin(); it != fruits.end();){
            if(*it == ban){
                it = fruits.erase(it);
            }
            else{
                it++;
            }
        }
    }
    // cleaned set now
    for(auto it : fruits){
        cout << it << " ";
    }

    cout << "\n\n";
    return 0;
}
