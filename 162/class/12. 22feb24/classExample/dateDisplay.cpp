#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;


int main() 

{ // ----- Start main -----

int uDate =0;
int displayOption =0;
bool again = false;
char uInput;

Date date;
do
{
    again = false;
    cout << "Enter the day: ";
    cin >> uDate; date.setDay(uDate);
    cout << "Enter the month: ";
    cin >> uDate; date.setMonth(uDate);
    cout << "Enter the year: ";
    cin >> uDate; date.setYear(uDate);

    cout << "\n\nHow would you like to display the date\n\n"
        <<"\n1. mm/dd/yy"
        <<"\n2. Month dd, yyyy"
        <<"\n3. dd Month, yyyy" << endl;
    cin >> displayOption;
    switch (displayOption)
    {
    case 1:
        date.getDatemmddyy();
        break;
    case 2:
        date.getDateMonthddyyyy();
        break;
    case 3:
        date.getDateddMonthyyyy();
        break;
    
    default:
        cout << "Invalid Choice";
        break;
    }
    cout << "Enter another date? y/n" << endl;
    cin >> uInput;
    if (uInput == 'y' || uInput=='Y')
    {
        again = true;
    }
    
} while (again == true);





} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 