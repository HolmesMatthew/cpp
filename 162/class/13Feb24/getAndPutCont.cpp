#include <iostream>
#include <iomanip> // for formating
#include <fstream>
#include <string>
#include <cctype>
using namespace std;


int main() 
// ----- Start main -----
{   string fileName; // holds file name
    char ch; // to hold character
    ifstream inFile; // ifstream obj
    ofstream outFile("out.txt");

    cout << "Enter a file name: ";
    cin >> fileName;

    inFile.open(fileName);
    if (inFile)
    {
        // read a char from file 1
        inFile.get(ch);
        while (inFile)
        {
            outFile.put(toupper(ch)); // put in outFile but in ALL CAPS
            inFile.get(ch);
        }
        inFile.close();
        outFile.close();

        cout << "File conversion done.\n";
        
    }else{
        cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
    }
    

    


} 
// ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 