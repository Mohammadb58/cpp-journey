#include<iostream>
#include "tempConverter.h"

using namespace std;

double celsiusToFahrenheit(double c){
    return (c * (9.0/5.0))+32.0;
}
double fahrenheitToCelsius(double f){
    return (f - 32.0) * 5.0/9.0;
}
double celsiusToKelvin(double c){
    return c+273.15;
}
double kelvinToCelsius(double k){
    return k - 273.15;
}
void runTests(){
    cout << "\nC to F " << celsiusToFahrenheit(23);
    cout << "\n\nF to C " << fahrenheitToCelsius(23);
    cout << "\n\nC to K " << celsiusToKelvin(23);
    cout << "\n\nK to C " << kelvinToCelsius(23);
 
}