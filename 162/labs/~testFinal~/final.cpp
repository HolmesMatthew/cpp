#include <iostream>
#include "bin.h"
#include "bin.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
#include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----
Bin *mainBin = nullptr;
mainBin = new Bin;
mainBin->setMax();
mainBin->setPart();
mainBin->setNumPart();

string gPart;
cout << "Enter the part you would like to get:" << endl;
cin.ignore();
getline(cin,gPart);

mainBin->getPart(mainBin,gPart);




} // ----- End main -----



/*
Write a program that simulates inventory bins in a warehouse. 
Each bin holds a number of the same type of parts. 
The program should use a structure that keeps the following data:

Description of the part kept in the bin

Number of parts in the bin

The program should have an array of 10 bins, initialized with the following data:

Part Description	Number of Parts in the Bin
Valve	         |              10
Bearing	         |              5
Bushing	         |              15
Coupling	     |              21
Flange	         |              7
Gear	         |              5
Gear Housing	 |              5
Vacuum Gripper	 |              25
Cable	         |              18
Rod	             |              12


The program should have the following functions:

AddParts: A function that increases a specific bin's part count by a specified number.

RemoveParts: A function that decreases a specific bin's part count by a specified number.

When the program runs, it should repeat a loop that performs the following steps:
The user should see a list of what each bin holds and how many parts are in each bin. 
The user can choose to either quit the program or select a bin. 
When a bin is selected, the user can either add parts to it or remove parts from it. 
The loop then repeats, showing the updated bin data on the screen.

Input Validation: No bin can hold more than 30 parts, so don't let the user add more than a bin can hold. 
Also, don't accept negative values for the number of parts being added or removed.

*/