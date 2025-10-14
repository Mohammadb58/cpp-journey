#include <string>
#include <iostream>

using namespace std;

class SchoolID{
    private:
        int ID;
        string name;
        double GPA;
    
    public:
        // default constructor
        SchoolID(){
            cout << "\n---default constructor called\n";
            this->name = "X";
            this->ID = -1;
            this->GPA = 0.0;
        }
        // constructor
        SchoolID(string name, int ID, double GPA){
            cout << "\n---constructor called\n";
            this->name = name;
            this->ID = ID;
            this->GPA = GPA;
        }

        // getter to print the info
        void printStudInfo(){
            cout << this->name << endl;
            cout << this->ID << endl;
            cout << this->GPA << endl;
        }
        // setters to update the data 

        void updateID(int ID){
            if(ID >= 0 && ID <= 999999999){
                this->ID = ID;
            }
            else{
                cout << "Invaild ID!";
            }
        }

        void updateName(string name){
            this->name = name;
        }

        void updateGPA(double GAP){
            if(GPA > 0.0 && GPA <= 4.0){
                this->GPA = GPA;
            }
            else{
                cout << "Invaild GPA!";
            }
        }

        // copy constructor
        SchoolID(const SchoolID& newObject){
            cout << "\n---~copy constructor called\n";
            this->name = newObject.name;
            this->ID = newObject.ID;
            this->GPA = newObject.GPA;
        }

        // destructor
        ~SchoolID(){
            cout << "\n---~destructor called\n";
        }
};

int main() {
    SchoolID studentOne("Mohammad", 678152820, 3.32);
    studentOne.printStudInfo();
    // new object 
    SchoolID studentTwo = studentOne;
    studentTwo.printStudInfo();
}