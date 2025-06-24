#include <iostream>
#include <cctype>

using namespace std;

int main(){
    cout << "------------------------------------------\n";
    string input;
    int counter = 0, len;
    double sum = 0, count = 0, avr = 0;
    bool numIsDigtit = false;
    cout << "\nPlease enter a postive number: ";
    getline(cin >> ws, input);

    len = input.length();
    while(bool dig = isdigit(input[counter])){
        counter++;
    };
    if (counter == len){
        numIsDigtit = true;
    }
    
    if (numIsDigtit == true){ 
        int num = stoi(input);
        sum += num;
        count++;
        while(num >= 0 && numIsDigtit){
            cout << "\n\nPlease enter a postive number: ";
            getline(cin >> ws, input);
            len = input.length();
            counter = 0;
            numIsDigtit = false;
            while(bool dig = isdigit(input[counter])){
                counter++;
            };
            if (counter == len){
                numIsDigtit = true;
                num = stoi(input);
                sum += num;
                count++;
            }
        }
        cout << "\n\nInvaild!\n";
    }
    else{
       cout << "\nInvaild!\n"; 
    }
    if(count != 0){
        avr = sum / count;
    }
    cout << "\n- Sum: " << sum << '\n';
    cout << "\n- Count " << count << '\n';
    cout << "\n- Avrage: " << avr << '\n';
    
    cout << "\n------------------------------------------\n";
    return 0;
}