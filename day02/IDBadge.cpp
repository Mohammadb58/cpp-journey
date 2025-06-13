#include<iostream>

using namespace std;

using str = string; 
using nums = int;
namespace num{
    const int age = 21;
}

namespace outsideScope{
    const str name = "Mohammd";
}
int main(){
    using namespace outsideScope;
    using namespace num;

    //cout << name << '\n';
    //cout << age << '\n';
    // this will become 3 since i used int not a double! 
    nums GPA = 3.1;
    GPA++;
    char section = 'C';
    const str UNI = "UIC";

    cout << "Hello " << name << ". You are " << age << " Years old! Happy bday! You have a gpa of " << GPA << " at section " << section << " at " << UNI << endl;

    return 0;
}