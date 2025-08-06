#include<iostream>
#include<ctime>

using namespace std;

int main(){
    cout << "-----------------------------------";
    srand(time(NULL));
    int count = 0;
    int randomNum = 0;
    for (int i = 1; i <= 10; i++){
        randomNum = (rand() % 50) + 1;
        if (randomNum % 2 != 0 && randomNum > 25){
            cout << randomNum << " ";
            count++;
        }
    }
    cout << endl;
    cout << "\nNOW, " << count << " out of 10 passed the check!\n";
    
    cout << "-----------------------------------";
    return 0;
}

