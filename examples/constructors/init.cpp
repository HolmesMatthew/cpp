#include "init.h"
#include <iostream>
#include <cstdlib>
using std::cout;
// constructor

// inital starting values
Rectangle::Rectangle(double w, double l){
    width = w;
    length = l;
}

// if not inital start values

// Rectangle::Rectangle() : width(0), length(0){} // inline initialization

//or to initialize start values

// Rectangle::Rectangle(){
//     width = 0.0; 
//     length = 0.0;
// }

void Rectangle::setWidth(double w){
    if (w >= 0){width = w;}
    else{
        cout << "invalid width\n";
        std::exit(EXIT_FAILURE);} // cstdlib
}
void Rectangle::setLength(double l){
    if (l >= 0){length = l;}
    else{
        cout << "invalid length\n";
        std::exit(EXIT_FAILURE);}
}
