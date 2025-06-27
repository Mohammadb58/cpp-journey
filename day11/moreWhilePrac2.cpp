#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------\n";
    string name = "Mohammad";
    int i = 0;
    bool alpha = true;
    while (i < name.length()){
        alpha = isalpha(name[i]);
        if(alpha){
            cout << '\n' << i << " is " << boolalpha << alpha << '\n';
            alpha = true;
        }
        else{
            cout << '\n' << i << " is " << boolalpha << alpha << '\n';
            alpha = false;
            break;
        }
        i++;
    }

    if(alpha){
        cout << "\nThe string is all alpha!\n";
    }
    else{
        cout << "\nThe string is not all alpha!\n";
    }

    cout << "\n------------------------------------------\n";
    return 0;
}