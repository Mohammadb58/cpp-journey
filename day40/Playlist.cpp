#include<iostream>
#include<map>
#include<vector>
using namespace std;

class PlayList{
    private:
        int size;
        int capacity;
        string* songs;

    public:
        // def constructor 
        PlayList(){
            this->size = 0;
            this->capacity = 10;
            this->songs = new string[this->capacity]; 
        }
        // cap parameterized constructor 
        PlayList(int capacity){
            this->size = 0;
            if(capacity > 0 && capacity < 1000){
                this->capacity = capacity;
            }
            else{
                this->capacity = 10;
            }
            this->songs = new string[this->capacity]; 
        }

        // getter
        int getterForSize(){
            return size;
        }

        // at function to return a song an index position
        string at(int index){
            return songs[index];
        }

        void push_back(string song){
            if(this->size >= this->capacity){
                return;
            }
            this->songs[this->size] = song;
            size++;
        }

        ~PlayList(){
            delete[] this->songs;
            cout << "\nDestructor ran!\n";
        }


};


int main() {
    cout << "\n\n";
    PlayList myPlayList(2);
    myPlayList.push_back("Family matters");
    myPlayList.push_back("One Dance");
    // never append since size is 2
    myPlayList.push_back("Hotline Bling");
    myPlayList.push_back("Laugh Now Cry Later");
    myPlayList.push_back("U My Everything");


    int size = myPlayList.getterForSize();
    for(int i = 0; i < size; i++){
        cout << myPlayList.at(i) << "\n";
    }

    cout << "\n\n";
    return 0;
}
