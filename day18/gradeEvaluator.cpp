#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int grade = 0;
    cout << "What is your grade: ";
    cin >> grade;
    if (grade >= 0 && grade <= 100){
        cout << "You ";
        string status = (grade >= 60) ? "PASS!" : "FAIL!";
        cout << status;
        cout << ". Your grade: " << grade << "\n";
        switch (grade / 10){
        case 6:
            cout << "COOOKED!, You are not Alone!";
            break;
        case 7:
            cout << "Passed!, That what matters!";
            break;
        case 8:
            cout << "Great!, Passed with confidence!";
            break;
        case 9:
            cout << "Perfect!, Too easy!";
            break;
        case 10:
            cout << "Was is that easy!";
            break;
        default:
            cout << "Wow, That was bad!";
            break;
        }
    }
    else{
        cout << "INVAILD GRADE!\n";
    }


    cout << "\n-----------------------------------";
    return 0;
}