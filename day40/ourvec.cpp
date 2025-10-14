#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class ourvector {
    private:
        size_t size;
        size_t capacity;
        int* data; // This will be the array!!

    public:
        ourvector() {
            // Default constructor
            this->size = 0;
            this->capacity = 10; 
            this->data = new int[this->capacity];
        }

        ourvector(size_t capacity) {
            // Parameterized constructor
            this->size = 0;
            this->capacity = capacity;
            this->data = new int[this->capacity];
        }

        size_t getSize() {
            return this->size;
        } 

        int at(size_t index) {
            return this->data[index];
        }

        void push_back(int value) {
            this->data[this->size] = value;
            this->size++;
        }

        ~ourvector() {
            // Destructor for the ourvector class
            delete[] this->data;
        }

        void doSomethingBad() {
            delete[] this->data;
        }

        string toString() {
            ostringstream oss;
            oss << "[";
            for (size_t i = 0; i < this->getSize(); i++) {
                oss << this->at(i);
                if (i < this->getSize()-1) {
                   oss << ", ";
                 }
             }
            oss << "]";
            return oss.str();
        }
};


int main() {
    ourvector vec(5); // calls on the paremeterized constructor.

    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(50);
    vec.push_back(80);
    vec.push_back(130);
    vec.push_back(210);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    vec.push_back(10);
    vec.push_back(11);


    cout << vec.toString() << endl;

    /*ourvector myvec;
    myvec.push_back(11);

    myvec = vec;
    cout << "myvec: ";  
    printVec(myvec);
    
    vec.push_back(210);*/
}
