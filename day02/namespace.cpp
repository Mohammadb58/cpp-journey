#include<iostream>

using namespace std;

int main(){
    int heartRate;
    heartRate = 198;

    cout << heartRate << "\n";

    double milesWalked;
    milesWalked = 1.02;

    milesWalked += 0.2;

    cout << milesWalked << endl;

    char day = 'M';
    // day++; this resuts in 'N'

    cout << day << '\n';

    string name = "Mohammad";

    cout << name << '\n';
    cout << '\n';

    cout << heartRate << ' ' << milesWalked << ' ' << day << ' ' << name << endl;

    cout << "Your hear rate is " << heartRate << " after walking " << milesWalked << " miles \n" << "Today is " << day << " Monday!" << " Thanks " << name << '\n';
    return 0;
}