#include <iostream>
#include "rectangle.h"
#include "rectangle.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----

    double width;
    double length;
    bool tryAgain = true;

    Rectangle myRectangle;

    cout << "Enter the rectangle's width: ";
    cin >> width;

    
    while(tryAgain) {
        try // tests each line if negativeSize is ran the catch statement runs
        {
            myRectangle.setWidth(width);
            tryAgain = false;
        }
        catch(Rectangle::NegativeWidth e)
        {
            cout << "Error " << e.getValue() << " is invalid.\n";
            cout << "Re-Enter a non-negative value: ";
            cin >> width;
        }

    }
    cout << "Enter the rectangle's length: ";
    cin >> length;
    tryAgain = true;
    while (tryAgain)
    {
        try { // tests each line if negativeSize is ran the catch statement runs
            myRectangle.setLength(length);
            tryAgain = false;
        }
        catch(Rectangle::NegativeLength e){
            cout << "Error " << e.getValue() << " is invalid.\n";
            cout << "Re-Enter a non-negative value: ";
            cin >> length;
        }

    }
    cout << "The rectangle's area is " << myRectangle.getArea() << endl;

    

} // ----- End main -----


/* ---------- notes ----------
pg993 in book
-------- end notes -------- */ 