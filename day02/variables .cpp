#include<iostream>

using namespace std;

int main(){
    // int 
    int year;
    year = 2025;

    // double 
    double gpa = 3.1;

    // char
    char grade = 'A';

    //string 
    const string NAME = "Mohamad";

    // This will cause an error sicne NAME is a const
    // NAME = 'Ali'
    // This updates the grade to become B
     grade = 'B';
    // printing them all

    cout << year << endl;
    cout << gpa<< endl;
    cout << grade<< endl;
    cout << NAME<< endl;
    return 0;
}