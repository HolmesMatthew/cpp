#include <iostream>
#include "Budget.h"
#include "Budget.cpp"
#include "Auxil.cpp"
#include "Auxil.h"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
#include <iomanip> // for formating and manipulation
using namespace std;


int main() 

{ // ----- Start main -----

    double mainOfficeRequest;

    cout << "Enter the main office's budget request: ";
    cin >> mainOfficeRequest;
    Budget::mainOffice(mainOfficeRequest);

    const int NUM_DIVISIONS =4;
    Budget divisions[NUM_DIVISIONS];

    Auxil auxiliaryOffice[4];

    for (int i = 0; i < NUM_DIVISIONS; i++)
    {
        double budgetAmount;
        cout << "Enter the budget request for division "
        << (i+1) << ": ";
        cin >> budgetAmount;
        divisions[i].addBudget(budgetAmount);
        // 
        cout << "Enter the budget request for that divisions auxilary offices "
        << (i+1) << ": ";
        cin >> budgetAmount;
        auxiliaryOffice[i].addBudget(budgetAmount, divisions[i]);
    }

    // Display the budget request and the corporate budget
    
    cout << fixed << showpoint << setprecision(2);
    cout << "\n\nHere are the division budget requests:\n";
    for (int i = 0; i < NUM_DIVISIONS; i++)
    {
        cout << "\tDivision " << (i+1) << ": \t\t$"
        << divisions[i].getDivisionBudget()<< endl; 
        // 
        cout <<"\tAuxiliary office:\t"
        << auxiliaryOffice[i].getDivisionBudget() << endl<< endl;
    }
    cout << "\n\tTotal Budget Requests:\t$"
    << divisions[0].getCorpBudget();
    


} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 