#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Human{
    private:
        // Attributes
        string name;
        string job;
        int age = 0;
    public:
        // Methods
        void eat(){
            cout << "eating\n";
        }
        void sleep(){
            cout << "sleeping\n";
        }
        void train(){
            cout << "training\n";
        }

        // Constructor to set default values
        Human(string name, string job, int age){
            setterForName(name);
            setterForJob(job);
            setterForAge(age);
        }            
        // Destructor
        ~Human(){
            // nothing to do here since we didnt alloacte anything on the HEAP
            cout << name << " OBJECT IS DEAD\n";
        }

        // Getters 
        string getterForName(){
            return name;
        }
        string getterForJob(){
            return job;
        }
        int getterForAge(){
            return age;
        }

        // Setters
        void setterForName(string name){
            this->name = name; // the one we passed 
        }
        void setterForJob(string job){
            this->job = job; // the one we passed 
        }
        void setterForAge(int age){
            if(age >= 18 && age <= 50){
                this->age = age; // the one we passed 
            } 
            else{
                age = 0;
            }
        }
};


int main() {
    cout << "\n\n";
    Human fighter1("Topuria", "fighter", 28);

    Human fighter2("Makhachev", "fighter", 33);

    cout << fighter1.getterForName() << endl;
    cout << fighter1.getterForJob() << endl;
    cout << fighter1.getterForAge() << endl;

    cout << fighter2.getterForName() << endl;
    cout << fighter2.getterForJob() << endl;
    cout << fighter2.getterForAge() << endl;

    cout << "\n\n";
    return 0;
}
