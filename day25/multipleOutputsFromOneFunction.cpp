#include<iostream>
#include<string>
using namespace std;

struct Results{
    int vowels = 0;
    int consonants = 0;
};
Results stringOverview(string s){
    string vowel = "aeiou";
    Results r;
    int len = s.length();
    for (int i = 0; i < len; i++){
        s[i] = tolower(s[i]);
        if(isalpha(s[i])){
            if(vowel.find(s[i]) != string::npos){
                r.vowels++;
            }
            else{
                r.consonants++;
            }
        }
    }
    return r;
}


int main(){
    cout << "\n-----------------------------------";
    string s = "Apple ORANGE kiwi BANANA grape ZEBRA aeIoU xyz";
    Results finalOverview = stringOverview(s);
    cout << "The s string has " << finalOverview.vowels << " vowels, and " << finalOverview.consonants << " consonants!";

    cout << "\n-----------------------------------";

    return 0;
}