#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c;
    cout << "Welcome to the Hypotenuse calculator.\n\n";
    cout << "                  *    " << '\n' << 
            "                * *    " << '\n' <<
            "              *   *    " << '\n' <<
            "            *     *    " << '\n' <<
            "          *       *    " << '\n' <<
            "   c    *         *  a " << '\n' <<
            "      *           *    " << '\n' <<
            "    *             *    " << '\n' <<
            "  *             * *    " << '\n' <<
            "* * * * * * * * * *    " << "\n" <<
            "         b             " << "\n\n";

    cout << "Please enter a value: ";
    cin >> a;
    cout << "Please enter b value: ";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "The Hypotenuse is " << c << endl;

    return 0;
}