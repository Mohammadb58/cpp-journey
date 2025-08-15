#include<iostream>
#include<string>
#include<ctime>
using namespace std;

char getLetterGrade(int score){
    // no need since the function ret a char but a good debugging prac!
    //char grade = ' ';
    if(score >= 90){
        return 'A';
    }
    // no need for a rnage from 80-89 due to the prev if stat!
    else if(score >= 80){
        return 'B';
    }
    else if(score >= 70){
        return 'C';
    }
    else if(score >= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}

void printGradeMessage(char grade){
    switch (grade)
    {
    case 'A':
        cout << "\nExcellent!";
        break;
    case 'B':
        cout << "\nGood work!";
        break;
    case 'C':
        cout << "\nYou passed!";
        break;
    default:
        cout << "\nNeeds improvement.";
        break;
    }
}

void runTests(){
    int score = 80;
    char grade = getLetterGrade(score);
    printGradeMessage(grade);
}

int main(){

    cout << "\n-----------------------------------";
    runTests();
    cout << "\n-----------------------------------";

    return 0;
}