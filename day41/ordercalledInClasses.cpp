    #include <string>
    #include <iostream>

    using namespace std;

    class myobj {
        public:
            myobj() {
                cout << "default constructor" << endl;          
            }

            myobj(const myobj& other) {
                cout << "copy constructor" << endl;
            }

            myobj& operator=(const myobj& other) {
                cout << "operator=" << endl;
                return *this;
            }

            ~myobj() {
                cout << "destructor" << endl;
            }
    };

    void f(myobj m) {
        // doing nothing????
    }
    
    int main() {
        myobj mo1;
        myobj mo2 = mo1;
        myobj mo3;
        f(mo3);
        mo3 = mo1;
    }