#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;

int main() 

{ // ----- Start main -----

    Date cal;
    int uInput;

    cout << "Enter the day: " << endl;
    cin >> uInput; 
    if (uInput > 31 || uInput < 1)
    {
        while (uInput > 31 || uInput <1)
        {
            cout << "Please enter a valid day: ";
            cin >> uInput;
        }
    }
    cal.setDay(uInput);
    cout <<  "Enter the Month: " << endl; 
    cin >> uInput; 
        if (uInput > 12 || uInput < 1)
    {
        while (uInput > 12 || uInput <1)
        {
            cout << "Please enter a valid Month: ";
            cin >> uInput;
        }
    }
    cal.setMonth(uInput);
    cout << "Enter the Year :" << endl;
    cin >> uInput; 
        if (uInput < 1900)
    {
        while (uInput <1900)
        {
            cout << "Please enter a valid year in 4 digits; xxxx  ";
            cin >> uInput;
        }
    }
    cal.setYear(uInput);

    cout <<"\n********************************" << endl;
    cout << cal.getDay() << "/" 
    << cal.getMonth() << "/"
    << cal.getYear() << "/";





} // ----- End main -----


/* ---------- notes ----------
Design a class called Date. The class should store a date in three integers: month, day, and year. 
There should be member functions to print the date in the following forms:

    12/15/2024
    December 25, 2024
    25 December 2024

Demonstrate the class by writing a program implementing it.

Input validation: 
DO not accept values for day greater than 31 or less than 1. 
DO not accept values for the month greater than 12 or less than 1.
-------- end notes -------- */ 