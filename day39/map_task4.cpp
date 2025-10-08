#include<iostream>
#include<map>
using namespace std;


int main() {
    cout << "\n\n";
    map<string, int> studentGrade;
    studentGrade["Alice"] = 90;
    studentGrade["Bob"] = 85;
    studentGrade["Charlie"] = 92;
    
    studentGrade["Bob"] = 95;
    studentGrade["David"] = 88;
    for(const auto& pair : studentGrade){
        cout << pair.first << " " << pair.second << endl;
    }

    cout << "\n\n";
    return 0;
}
