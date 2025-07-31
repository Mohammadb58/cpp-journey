#include<iostream>
using namespace std;

int main(){
    cout << "-----------------------------------";
    int j = 0, sum = 0, maxStreak = 0, currStreak = 0, maxEnds = 0;
                        // no matter the ned range 2 is always the longest streak!
    for (int i = 1; i <= 100; i++){
        j = i;
        sum = 0;
        while (j > 0){
            sum += j % 10;
            j = j / 10;
        }
        //cout << "\n\n" << sum << "\n\n";
        if (sum % 2 == 0){
            cout << "\nEVEN "<< i;
            currStreak++;
        
        }
        else{
            cout << "\nODD "<< i;
            currStreak = 0; 
        }
        if (currStreak > maxStreak){
            maxStreak = currStreak;
            maxEnds = i;
        }
    }
    cout << "The longest even streak is " << maxStreak << " which starts at " << (maxEnds-maxStreak)+1<< ".\n\n";
    for (int k = maxEnds-maxStreak+1; k <= maxEnds; k++){
        cout << "- "<< k << "\n";
    }
    
    cout << "-----------------------------------";
    return 0;
}