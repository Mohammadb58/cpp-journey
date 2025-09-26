#include <iostream>
#include <stack>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    vector<string> pages = {"Home", "About", "Contact"};
    stack<string> currPage;
    for(int i = 0; i < pages.size(); i++){
        currPage.push(pages.at(i));
        cout << "\nCurrent Page: " << currPage.top();
    }

    //BACK button pressed
    currPage.pop();
    cout << "\nCurrent Page: " << currPage.top();
    cout << "\n\n";
    return 0;
}
