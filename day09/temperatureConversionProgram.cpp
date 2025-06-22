#include <iostream>
#include <cctype>
using namespace std;

int main(){
    cout << "------------------------------------------------------\n";
    double temp, newTemp;
    char startScale, endScale;
    bool tempIsDig = false;
    cout << "\nWelcome to the Temperature conversion program.";
    cout << "\n\nPlease enter the temp: ";
    cin >> temp;
    cout <<"\nPlease enter the source scale (e.g. “C”, “F”, “K”): ";
    cin >> startScale;
    cout <<"\nPlease enter the source scale to convert to (e.g. “C”, “F”, “K”): ";
    cin >> endScale;
    if ((startScale == 'C' || startScale == 'F' || startScale == 'K') && (endScale == 'C' || endScale == 'F' || endScale == 'K')){
        if (startScale != endScale){
            if (startScale == 'C' && endScale == 'F'){
                newTemp = (temp*(9.0/5))+32;
            }
            else if (startScale == 'C' && endScale == 'K'){
                newTemp = temp + 273.15;
            }
            else if (startScale == 'F' && endScale == 'C'){
                newTemp = (temp - 32)*5.0/9;
            }
            else if (startScale == 'F' && endScale == 'K'){
                newTemp = (temp - 32)*5.0/9 + 273.15;
            }
            else if (startScale == 'K' && endScale == 'C'){
                newTemp = temp - 273.15;
            }
            else if (startScale == 'k' && endScale == 'F'){
                newTemp = (temp - 273.15)*(9.0/5)+32;
            }
            cout << temp << ' ' << startScale << " to " << endScale << " is " << newTemp << '\n';
        }
        else{
            cout << "\nInvaild choice! You can't convert from " << startScale << " to " << endScale << endl;
            
        }
    }
    else{
        cout << "\nInvaild choice!";
    }


    cout << "\n------------------------------------------------------\n";
    return 0;
}