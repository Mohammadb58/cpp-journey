#include<iostream>
using namespace std;

double area(double length){
    double resultArea = length * length;
    return resultArea;
}

int main(){
    cout << "-----------------------------------";
    double length =0;
    cout << "What is the length of the square: ";
    cin >> length;
    cout << "The area is " << area(length);

    cout << "\n-----------------------------------";
    return 0;
}

