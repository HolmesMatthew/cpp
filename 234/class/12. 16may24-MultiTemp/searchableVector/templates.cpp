#include <iostream>
#include "simpleVect.h"
#include "searchVect.h"
// #include "simpleVector.cpp"

using namespace std;

// template: reserved word  
template <class T>
T square(T number)
{
    return number * number;
}
template <class T>
T cubed( T number)
{
    return number * number * number;
}

int main() 
{ // ----- Start main -----

    int userInt = 15;
    double userDouble = 3.467;

    SimpleVector<int> intTable(5);  
    SimpleVector<double> doubleTable(5);
    SearchableVector<int> intSearch(5);
    SearchableVector<double> doubleSearch(5);

    for (int i = 0; i < 5; i++)
    {
        // intTable[i] = (i*2);
        intSearch[i] = (i*2);
        // doubleTable[i] = (i*2.14);
        doubleSearch[i] = (i*2.14);

    }

    cout << "These are the values in the int table: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << intSearch[i] << " ";
    }
    cout << endl;
    cout << "These are the values in the double table: \n";
    for (int i = 0; i < 5; i++)
    {
        cout << doubleSearch[i] << " ";
    }
    int result = 0;

    cout << "Search for the value 4....";
    result = intSearch.findItem(4);
    if (result  == -1)
    {
        cout << "\nThe value was not found" << endl;
    }
    else{
        cout << "\n4 was found at subscript " << result << endl;
    }


    cout << "Search for the value 8.56....";
    result = doubleSearch.findItem(8.56);
    if (result  == -1)
    {
        cout << "\nThe value was not found" << endl;
    }
    else{
        cout << "\n8.56 was found at subscript " << result << endl;
    }
    

    // cout << "The integer (" << userInt << ") squared is " << square(userInt) << endl;
    // cout << "The integer (" << userDouble << ") squared is " << square(userDouble) << endl;
    // cout << "The integer (" << userDouble << ") cubed is " << cubed(userDouble) << endl;



} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 