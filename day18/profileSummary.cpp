#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n = 12;
    cout << "-----------------------------------";
    string name, cleanedName, cleanedName2, finalName;
    int age = 0, leading = 0, len = 0, len2 = 0, trailing = 0, len3 = 0, roundedGAP = 0;
    double gpa = 0;
    bool spacesInc = false;
    cout << "Please enter your full name: ";
    getline(cin, name);
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Please enter your gpa: ";
    cin >> gpa;
    len = name.length();
    if(name[0] == ' '){
        leading = name.find_first_not_of(' ');
        cleanedName = name.substr(leading, len);
    }
    else {
        cleanedName = name;
    }
    len2 = cleanedName.length();
    if(cleanedName[len2 - 1] == ' '){
        trailing = cleanedName.find_last_not_of(' ');
        cleanedName2 = cleanedName.substr(0, trailing+1);
        finalName = cleanedName2;
        spacesInc = true;
    }
    else{
        finalName = cleanedName;
    }

    len3 = finalName.length();
    cout << "\n\nHello " << finalName << "! You are a(n) ";
    if(age < 0){
        cout << "Invalid age.\n";
    }
    else if(age >= 0 && age <= 12){
        cout << "Child.\n";
    }
    else if(age >= 13 && age <= 19){
        cout << "Teen.\n";
    }
    else if(age >= 20 && age <= 64){
        cout << "Adult.\n";
    }
    else{
        cout << "Senior.\n";
    }
    roundedGAP = round(gpa);
    cout << ". Your GPA rounds to " << roundedGAP << ". Your name has " << len3 << " characters.\n\n";

    cout << "-----------------------------------";
    return 0;
}