#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------------------\n";
    cout << "\nWelcome to the Phone Number Validator & Parser program!";
    string number2;
    cout << "\nPlease enter your number in this format e.g.(123) 456-7890: ";
    getline(cin >> ws, number2);
    int len2 = number2.length(); // should be 14 chars but may have extra whitespace
    int trailSpace = number2.find_last_not_of(' ');
    string number = number2.erase(trailSpace+1, len2-trailSpace);
    int len = number.length(); // should be 14 chars 

    if (len == 14){
        // checking index 0
        bool zeroIdx = number.at(0) == '(';
        // checking index 4
        bool fourIdx = number.at(4) == ')';
        // checking index 5
        bool fiveIdx = number.at(5) == ' ';
        // cheking index 9
        bool nineIdx = number.at(9) == '-';
        // checking the Area code
        string areaCode = number.substr(1,3);
        bool a = isdigit(number[1]);
        bool b = isdigit(number[2]);
        bool c = isdigit(number[3]);
        // checking the prefix
        string prefix = number.substr(6,3);
        bool d = isdigit(number[6]);
        bool e = isdigit(number[7]);
        bool f = isdigit(number[8]);
        // checking the line 
        string line = number.substr(10,4);
        bool g = isdigit(number[10]);
        bool h = isdigit(number[11]);
        bool i = isdigit(number[12]);
        bool j = isdigit(number[13]);
        if(zeroIdx && fourIdx && fiveIdx && nineIdx && a && b && c && d && e && f && g && h && i && j){
            cout << "\n- Your number: " << number << " is vaild!\n";
            cout << "\n- Your Area Code is:   " << areaCode << '\n';
            cout << "\n- Your Prefix is:      " << prefix << '\n';
            cout << "\n- Your Line number is: " << line << '\n';
        }
        else {
            cout << "\nCorrect length but invaild format";
        }
    }
    else{
        cout << "\nInvaild format";
    }

    cout << "\n\n------------------------------------------------------\n\n";
    
    return 0;
}