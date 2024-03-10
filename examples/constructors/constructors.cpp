#include <iostream>
#include "init.h"
#include "init.cpp"
#include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;



int main() 

{ // ----- Start main -----

    Rectangle box(10.0, 12.0);
    double houseWid;
    double houseLen;

    cout << "Here is the rectangles information: \n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Area: " << box.getArea() << endl;

    cout << "What is the width of the house: ";
    cin >> houseWid;
    cout << "What is the length of the house: ";
    cin >> houseLen;

    Rectangle house(houseWid, houseLen);
    cout << "Area of house: " << house.getArea() << endl;


} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 