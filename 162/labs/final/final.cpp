#include <iostream>
// #include "bin.h"
// #include "bin.cpp"
// #include <cstdlib>
#include <fstream> // for file input/output
#include <string> 
// #include <cctype> 
#include <iomanip> // for formating
#include <sstream>
using namespace std;

struct Bin{
string part;
int numParts;
static const int maxPart =30;
};

void displayBin(Bin bin[], int size);
void fillBin(Bin bin[], int size);
void addParts(Bin bin[], int size, string part);
void removeParts(Bin bin[], int size, string part);

int main() 
{ // ----- Start main -----
const int SIZE =10;
        Bin bin[10];
    fillBin(bin, SIZE);
    
    int switchOpt = 0;
    char uInput='Y';
    string part;

    do
    {
        cout << "Select an option:" << "\n"
             << "1. View all bins\n"
             << "2. Add to bins\n"
             << "3. Remove from bins" << endl;
        cin >> switchOpt;

        switch (switchOpt)
        {
        case 1: // view all
            displayBin(bin,SIZE);
            break;
        case 2: // add
            cout << "Enter the part you would like to edit:\n";
            cin.ignore();
            cin.clear();
            getline(cin,part);
            addParts(bin, SIZE, part);
            break;
        case 3: // remove
            cout << "Enter the part you would like to edit:\n";
            cin.clear();
            getline(cin,part);
            removeParts(bin,SIZE, part);
            break;
        
        default:
            cout << "Invalid input";
            break;
        }   
            cout << "\n\nDo more?" << endl;
            cin >> uInput;
            if (uInput == 'n'|uInput =='N')
            {
                break;
            }
            
            cout << "\n\nSelect an option:" << "\n"
             << "1. View all bins\n"
             << "2. Add to bins\n"
             << "3. Remove from bins" << endl;

    } while (uInput == 'y'| uInput == 'Y');
} // ----- End main -----

void displayBin(Bin bin[], int SIZE){
    cout <<"\n" << left << setw(20) << "Part" << setw(15) << "Quantity" << endl;
    cout <<"------------------------------------" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << left << setw(20) <<bin[i].part << "\t" 
        << setw(15) << bin[i].numParts << endl;
    }
}

void addParts(Bin bin[], int size, string part){
    
    for (int i = 0; i < size; i++)
    {
        if (bin[i].part == part)
        {
            int qty;
            cout << "Enter the number of new parts are you adding" << endl;
            cin >> qty;
            if ((bin[i].numParts + qty) > bin[i].maxPart)
            {
                while ((bin[i].numParts + qty) > bin[i].maxPart)
                {
                    cout << "Adding new parts increases overall count to over 30, please put less in" << endl;
                    cin >> qty;
                }
            }
                bin[i].numParts += qty;
                cout << "\nNew info: " << bin[i].part 
                << " : " << bin[i].numParts << endl;
        }   
        }
    }

void removeParts(Bin bin[], int size, string part){
    for (int i = 0; i < size; i++)
    {
        if (bin[i].part == part)
        {
            int qty;
            cout << "Enter the number of new parts are you removing" << endl;
            cin >> qty;
            if ((bin[i].numParts - qty) < 0)
            {
                while ((bin[i].numParts - qty) < 0)
                {
                    cout << "Adding new parts decreases overall count to below 0, please take less out" << endl;
                    cin >> qty;
                }
            }
                bin[i].numParts -= qty;
                cout << "\nNew info: " << bin[i].part 
                << " : " << bin[i].numParts << endl;
        }   
        }
    }

void fillBin(Bin bin[], int size){
    fstream partsFile;
    partsFile.open("parts.txt", ios::in|ios::beg);
    if (partsFile)
    {
        string parts;
        int count =0;
        while (getline(partsFile,parts,'\n'))
        {            
            istringstream iss(parts);
            string partN;
            int nParts;
            iss >> partN >> nParts;
            bin[count].part = partN;
            bin[count].numParts = nParts;
            count ++;
        }
    }
}


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