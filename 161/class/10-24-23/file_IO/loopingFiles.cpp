#include <iostream>
#include <fstream> // file input/output 
using namespace std;

int main() {
    // output stream obj
    ofstream fileOut;

    int numOfDays;
    double sales = 0.0;

    // user input
    cout << "How many days would you like to track sales for: ";
    cin >> numOfDays;

    //open file
    fileOut.open("num.txt");
    
    // get sales for each day and write to file
    for (int i = 0; i < numOfDays; i++)
    {   
        // get sales for each day
        cout << "Enter the sales for day " << i+1 << ": ";
        cin >> sales;

        // write to file
        fileOut << sales << endl;

    }

    // close file
    fileOut.close();
    
    cout << "Done writing to file";
    
}