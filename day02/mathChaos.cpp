#include<iostream>

using namespace std;

using str = string;

int main(){
    str name = "Mohammad";
    cout << name << endl;

    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int e = 5;
    a++;
    b+=1;
    c++;
    d++;
    e++;

    b -= 2;
    d -= 2;

    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e;
    return 0;
}