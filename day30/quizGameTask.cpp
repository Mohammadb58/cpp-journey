#include<iostream>
#include<string>
#include<algorithm>   
#include<random> 
#include<ctime>

using namespace std;

string lowerCaseIt(string answer){
    for(int i = 0; i < answer.length(); i++){
        answer[i] = tolower(answer[i]);
    }
    return answer;
}


int main(){
    cout << "\n-----------------------------------";
    //srand(time(NULL));
    cout << "\nWelcome to the QUIZ game.\n";
    string answer = "";
    int score = 0;
    char grade = ' ';
    string questionsArray[] = {"\nWhat is the capital of Japan? ", 
                               "\nWho developed the theory of relativity? ",
                               "\nWhat is the largest planet in our solar system? ",
                               "\nIn C++, what keyword is used to create a constant variable? ",
                               "\nWhat is 9 × 7? "};

    string answersArray[] = {"tokyo", 
                               "albert einstein",
                               "jupiter",
                               "const",
                               "63"};
    int sizeOfQuestionsArray = sizeof(questionsArray) / sizeof(questionsArray[0]);
    int sizeOfAnswersArray = sizeof(answersArray) / sizeof(answersArray[0]);

    for(int i = 0; i < sizeOfQuestionsArray; i++){
        cout << questionsArray[i];
        getline(cin >> ws, answer);
        answer = lowerCaseIt(answer);
        //cout << "\nDEBUG ANSWER IN MAIN: " << answer;
        if(answer == answersArray[i]){
            cout << "\nCorrect +10 points!";
            score += 20;
        }
        else{
            cout << "\nIncorrect, the asnwer was " << answersArray[i];
            if(score >= 5){
                score -= 5;
            }
        }
    }
    cout << "\n\nYour final score is " << score;
    if(score >= 90){ grade = 'A'; }
    else if(score >= 80){ grade = 'B'; }
    else if (score >= 70){ grade = 'C'; }
    else if (score >= 60){ grade = 'D'; }
    else{ grade = 'F'; }

    cout << "\nYou get an " << grade << " grade!";
    cout << "\n-----------------------------------";

    return 0;
}