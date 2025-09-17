#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    cout << "\n\n";
    vector<int> originalVector = {1,1,2,3,4,5,6,6,6,7,7,7,8,9};
    vector<int> noDupVector;
    bool exist = false;
    for(int i = 0; i < originalVector.size(); i++){
        exist = false;
        for(int j = 0; j < noDupVector.size(); j++){
            if(originalVector[i] == noDupVector[j]){
                exist = true;
                break;
            }
        }
        if(!exist){
            noDupVector.push_back(originalVector[i]);
        }
    }

    for(int num : noDupVector){
        cout << num << " ";
    }
    cout << "\n\n";
    return 0;
}
