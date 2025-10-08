#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Human{
    public:
        // Attributes
        string name;
        string job;
        int age = 0;

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
};



int main() {
    cout << "\n\n";
    Human fighter1;

    fighter1.name = "Topuria";
    fighter1.job = "fighter";
    fighter1.age = 28;

    Human fighter2;

    fighter2.name = "Makhachev";
    fighter2.job = "fighter, but better than Topuria";
    fighter2.age = 33;

    cout << fighter1.name << " " << fighter1.job << " " << fighter1.age << endl;
    cout << fighter2.name << " " << fighter2.job << " " << fighter2.age << endl;

    fighter1.eat();
    fighter1.sleep();
    fighter1.train();

    fighter2.eat();
    fighter2.sleep();
    fighter2.train();

    cout << "\n\n";
    return 0;
}
