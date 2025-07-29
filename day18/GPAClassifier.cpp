#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    string GPA, newGPA, newGPA2;
    int leading = 0, trailing = 0;
    cout << "Please enter you GPA: ";
    getline(cin, GPA);
    int len = GPA.length();
    if (GPA[0] == ' '){
        leading = GPA.find_first_not_of(' ');
        newGPA = GPA.substr(leading, len);
    }
    else{
        newGPA = GPA;
    }   
    int len2 = newGPA.length();
    if (newGPA[len2 - 1] == ' '){
        trailing = newGPA.find_last_not_of(' ');
        newGPA2 = newGPA.substr(0, trailing + 1);
    }
    else{
        newGPA2 = newGPA;
    }
    int dot = newGPA2.find('.');
    if((dot == 1)){
        double numGPA = stod(newGPA2);
        cout << '\n' << numGPA << '\n'; 
        if (numGPA < 2.0){
            cout << "\nPoor.\n";
        } 
        else if (numGPA >= 2.0 && numGPA <= 2.9){
            cout << "\nAverage.\n";
        } 
        else if (numGPA >= 3.0 && numGPA <= 3.6){
            cout << "\nGood.\n";
        } 
        else if (numGPA >= 3.7 && numGPA <= 4.0){
            cout << "\nExcellent.\n";
        } 
        else{
            cout << "\nInvalid GPA range\n";
        }
    }
    else{
        cout << "\nINVAILD GPA"<< '\n';
    }
    cout << "-----------------------------------";
    return 0;
}