#include<iostream>
#include<map>
using namespace std;


int main() {
    cout << "\n\n";
    map<string, int> cityPop;
    cityPop["Chicago"] = 2700000;
    cityPop["New York"] = 8400000;
    cityPop.emplace("Los Angeles", 4000000);

    for(const auto& pair : cityPop){
        cout << pair.first << " " << pair.second << endl;
    }
    cout << "\n\n";
    return 0;
}
