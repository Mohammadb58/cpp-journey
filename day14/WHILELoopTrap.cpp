#include<iostream>

using namespace std;

int main(){
    cout << "\n-----------------------------------------\n";
    string password;
    int att = 2;
    cout << "The cave walls shimmer with ancient carvings\n" <<
            "stars, moons, and a single glowing owl perched on a tree.\n" <<
            "You follow the symbols until you reach a towering stone door. A voice echoes:\n" <<
            "'Traveler, I guard the path to knowledge. Only those who observe may proceed.'\n"<< 
            "The Gatekeeper appears — a floating figure cloaked in midnight blue, with a staff crowned by a glowing orb.\n" <<
            "He speaks: \n" <<
            " -Many wander in darkness, but few notice the light.\n" <<
            " -One bird watches while others sleep.\n" <<
            " -In silence it sees, in night it thrives.\n" <<
            "He points to the carvings behind you: 🌙 ⭐ 🦉\n" <<
            "Then, the pedestal rises again with the same prompt:\n" <<
            "Enter the password to continue: ";
    getline(cin, password);

    while (password != "owl" && att != 0){
        cout << "\nWrong, The runes pulse red. The Gatekeeper frowns, 'Look around you.'";
        cout << "\nEnter the password to continue: ";
        getline(cin, password);
        att--;
    }
    if(password == "owl"){
        cout << "\nThe orb flares. The Gatekeeper smiles, 'You saw what others missed.'";
    }
    else{
        cout << "\nYou have used all your attempts, live in the shadows of your past!";
    }
    cout << "\n-----------------------------------------\n";
    return 0;
}