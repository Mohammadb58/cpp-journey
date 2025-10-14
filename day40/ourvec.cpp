#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class ourvector {
    private:
        size_t size;
        size_t capacity;
        int* data; // This will be the array!!

        void resize() {
            this->capacity *= 2;
            int* new_data = new int[this->capacity];
            for (size_t i = 0; i < this->size; i++) {
                new_data[i] = data[i];
            }
            delete[] this->data;
            this->data = new_data;
        }

    public:
        // MY NOTES: default 
        ourvector() {
            this->size = 0;
            this->capacity = 10;
            this->data = new int[this->capacity];
        }
        // MY NOTES: constructor 
        ourvector(size_t capacity) {
            this->size = 0;
            this->capacity = capacity;
            this->data = new int[this->capacity];
        }

        // MY NOTES: getter to get the data
        size_t getSize() {
            return this->size;
        } 

        // MY NOTES: function at that returns the value at a given index
        int at(size_t index) {
            return this->data[index];
        }

        // MY NOTES function that pushes a value on the heap
        void push_back(int value) {
            if (this->size == this->capacity) {
                resize();
            }

            this->data[this->size] = value;
            this->size++;
        }

        void push_front(int value) {
            if (this->size == this->capacity) {
                resize();
            }

            // Shift all elements one position to the right.
            for (int i = this->size; i >= 1; i--) {
                this->data[i] = this->data[i-1];
            }

            this->data[0] = value;
            this->size++;
        }

        ~ourvector() {
            delete[] this->data;
        }
       
        // MY NOTES: copy constructor
        ourvector(const ourvector& other) {
            this->capacity = other.capacity;
            this->size = other.size;
            this->data = new int[this->capacity];

            for (size_t i = 0; i < this->size; i++) {
                this->data[i] = other.data[i];
            }
        }

        // this ia a function that returns ourvector
        ourvector& operator=(const ourvector& other) {
            // 1. Guard against self-assignment 
            if (this == &other) {
                return *this;
            }
             
            // 2. Clean up current data
            delete[] this->data;

            // 3. Copy other's data into this (same as copy constructor)
            this->capacity = other.capacity;
            this->size = other.size;
            this->data = new int[this->capacity];

            for (size_t i = 0; i < this->size; i++) {
                this->data[i] = other.data[i];
            }

            // 4. Return reference to self
            return *this;
        }
};

void printVec(ourvector v) {
    cout << "[";
    for (size_t i = 0; i < v.getSize(); i++) {
        cout << v.at(i);
        if (i < v.getSize()-1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    ourvector vec(5);
    
    vec.push_back(10);
    vec.push_back(0);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(50);
    vec.push_front(7);
    /*
    vec.push_back(80);
    vec.push_back(130);

    vec.push_back(210);
    vec.push_front(340);
    */
    printVec(vec);
    cout << "\n\n";
    ourvector vec2 = vec; // we just called the copy constructor
    printVec(vec2);
    //cout << "\n" << vec.at(1) << "\n";
}
