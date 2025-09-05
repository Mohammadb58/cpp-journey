    #include<iostream>
    #include<sstream>
    #include<string>
    using namespace std;


    int main(){
        cout << "\n------------------------------";
        string TEXT = "\nLearning streams in C++";
        string newTEXT;
        stringstream TEXTStream(TEXT);
        string word;
        cout << endl;
        while(TEXTStream >> word){
            newTEXT.append(word);
            newTEXT.append("-");
        }
        newTEXT.pop_back();
        cout << newTEXT;
        
        cout << "\n------------------------------";
        return 0;
    }