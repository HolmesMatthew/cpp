#include <iostream>
#include <iomanip> // for formating
#include <fstream>
#include <string>
using namespace std;

// prototype functions
void showContents(ifstream &file);
int main() 
// ----- Start main -----
{
    // ofstream dataFile;

    // cout << "Writing to the file....." << endl;
    // dataFile.open("demofile.txt", ios::out); // ios::out opening in output mode

    // dataFile << "Jones\n";
    // dataFile << "Smith\n";

    // cout << "Now closing the file....." << endl;
    // dataFile.close();

    // cout << "Opening file again to append....." << endl;
    // dataFile.open("demofile.txt", ios::out | ios::app); // ios::out | ios::app opening in append mode
    //     // append mode finds the end file marker and begins there
    // dataFile << "\n~APPENDAGE~\n";
    // dataFile << "Willis\n";
    // dataFile << "Davis\n";

    // cout << "Closing file again......" << endl;
    // dataFile.close();

    // ifstream dataIn;
    // dataIn.open("demofile.txt", ios::in); // ios::in opens in input mode
    // if (dataIn.fail())
    // {
    //     //datafile does not exist, create new file
    //     dataIn.open("demofile.txt", ios::out); // create new file using output mode
    //     showContents(dataIn);
    //     // continue to process file
    // }
    // else{
    //     //file exists, process file and close it
    //     showContents(dataIn);
    //     dataIn.close();
    // }
    cout << "\nCreate table.txt" << endl;
    int nums[3][3] = {2897, 5, 837,
                    34,7,1623,
                    390,3456,12};
    fstream outFile("'table.txt'", ios::out);
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            outFile << setw(8) << nums[row][col];
        }
        outFile << endl;
    }
    outFile.close();
    cout << "Closed 'table.txt'\n";

    string input; // holder for user input
    fstream nameFile;

    nameFile.open("demofile.txt", ios::in);

    if (nameFile) // if nameFile is open
    {
        // read first item from the file
        getline(nameFile, input, ',');
        //while the last read was successful
        while(nameFile)
        {
            // print out to file
            cout << input << endl;
            //read in next item
            getline(nameFile, input, ','); // getline(fileName, whereValueIsGoing, "\n" <-- default)
        }
        nameFile.close();
    }
    else{
        cout << "\n~CoUlD nOT oPeN fIlE~\n";
    }
    
    

    

} 
// ----- End main -----

void showContents(ifstream &file)
{
    cout << "\n~Showing Contents of file~\n"; 
    string line;

    while(file >> line) //while there is a value to read/write? 
    {
        cout << line << endl;
    }
}

/* ---------- notes ----------

-------- end notes -------- */ 