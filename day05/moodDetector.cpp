#include <iostream>

using namespace std;

int main(){
    double sleep;
    char hungr,mood;
    cout << "\nWelcome to the mood detector.";
    cout << "\nHow many hours did you sleep last night: ";
    cin >> sleep;
    cout << "\nAre you currently hungry (Y/N):";
    cin >> hungr;
    if (hungr == 'y'|| hungr == 'Y'){
        hungr = 1;
    }
    if (hungr == 'n'|| hungr == 'N'){
        hungr = 0;
    }
    cout <<"\nPick a single mood letter (H for happy, S for sad, N for neutral): ";
    cin >> mood;

    if (mood == 'H' || mood == 'S' || mood == 'N' || mood == 'h' || mood == 's' || mood == 'n'){
        if (sleep >= 7.0 && hungr == 0){
            cout << "\nYou seem well rested and fed. Good mood detected.";
        }
        else if (sleep <= 5.0 || hungr == 1){
            cout << "\nLow energy or hunger detected. Consider a break.";
        }
        else{
            cout << "\nMixed signals. Monitor how you feel.";
        }
    }
    else {
        cout << "\nUnknown mood input.";
    }
    return 0;
}