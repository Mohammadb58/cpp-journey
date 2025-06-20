#include <iostream>

using namespace std;

int main(){
    string name = "Mohammad";
    cout << "Original name: " << name << endl; // just displaying the name 
    cout << "Length of name: " << name.length() << endl; // length of name is 8 chars 
    cout << "Is name empty? " << boolalpha << name.empty() << endl; // checks if name is emoty in this case it is false
    name.clear();
    cout << "Clear out name: " << name << endl; // will clear out name to be empty  
    name = "Mohammad";
    cout << "Original name: " << name << endl; // just displaying the name 
    cout << "Add Abu Rashed to name: " << name.append(" Abu Rashed") << endl; // adds Abu Rashed to name 
    cout << "Whats on index 6: " << name.at(6) << endl; // ret the index 6 in name 
    cout << "Add BEE to the middile of name: " << name.insert(4, "BEE") << endl; // this is better than append due to the ability to append anywhere
    cout << "Find at what index is the first 'm': " << name.find('m') << endl; // case sens!!! it will ret the index of the first time 'm' appears 
    cout << "Find at what index is the last 'm': " << name.rfind('m') << endl; // case sens!!! it will ret the index of the last time 'm' appears 
    cout << "Remove Abu Rashed from name: " << name.erase(12, 211) << endl; // 211 works just as 21 works 
    cout << "Remove name: " << name.erase(0, 99) << endl; // works just as clear does but now in one line!
    name = "MohamBEEmad";
    cout << "Return the BEE substring: " << name.substr(5,3) << endl; // strat at 5 read 3 chars 
    name = "Mohammad";
    cout << "Replace name with Ali while keeping last 3 charsof name: " << name.replace(0,5, "Ali") << endl; // the 5 is saying replace 5 chars not an end index 
    cout << "Is name Mohammad: " << boolalpha << (name.compare("Mohammad") == 0) << endl; // false 
    name = "Mohammad";
    cout << "Is name Mohammad: " << boolalpha << (name.compare("Mohammad") == 0) << endl; // true
    cout << "Whats the first char of name: " << name.front() << endl;
    cout << "Whats the last char of name: " << name.back() << endl;
    name.pop_back(); // No args alowdd 
    cout << "Remove last char: " << name << endl;
    name.push_back('d'); // ONLY one args allowed and only chars allowed 
    cout << "Add d to the end: " << name << endl;

    cout << "\n";
    return 0;
}