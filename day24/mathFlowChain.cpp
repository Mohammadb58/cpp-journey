#include<iostream>
using namespace std;

int square(int x){
    return x*x;
}

int doubleIt(int x){
    return x * 2;
}

int processNumber(int x){
    int z = square(x);
    int y = doubleIt(z);
    return y;
}

bool vaildRangeOfNums(int x){
    bool vaild = false;
    if (x <= 32767 && x >= -32767){
        vaild = true;
    }
    return vaild;
}


int main(){
    cout << "-----------------------------------";
    int x = 0;
    cout << "Please enter a number: ";
    cin >> x;
    if(vaildRangeOfNums(x)){
        cout << "\n\nThe new x val is: " << processNumber(x);
    }
    else{
        cout << "\n\nINVAILD RANGE!!!";
    }


    cout << "\n-----------------------------------";
    return 0;
}

