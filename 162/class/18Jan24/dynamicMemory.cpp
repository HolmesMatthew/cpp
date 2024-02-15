#include <iostream>
#include <iomanip>
using namespace std;

// ----- Start main -----
int main(){

    double *sales = nullptr; // pointer to dynamically allocate array
    double total = 0.0; // accumulator
    double average = 0.0; // calculated value

    int numDays = 0; // holds num of days
    int count = 0; // incrementor 

    // get number of days from user, will be used for dynamic array size
    cout << "How many days of sales amounts do you want to process? ";
    cin >> numDays;
    // create dynamic array with ~ new ~ operator
    sales = new double[numDays]; // create array with variable size using dynamic memory, using ~ new arrayType[SIZE] ~

    cout << "Enter the sales amounts for each day bellow.\n";
    for (count = 0; count < numDays; count++)
    {
        cout << "Day " << count+1 << ": ";
        cin >> sales[count];
    }
    
    // calculate total sales
    for (count=0; count < numDays; count++)
    {
        total += sales[count];
    }
    //calculate average
    average = total / numDays;

    // display results
    cout << fixed << showpoint << setprecision(2); // set formatting
    cout << "\n\nTotal sales: $" << total << endl;
    cout << "Average sales: $" << average << endl;

    delete[] sales; // delete dynamic memory array
    sales = nullptr; // reset pointer to nullptr
}
// ----- End main -----

