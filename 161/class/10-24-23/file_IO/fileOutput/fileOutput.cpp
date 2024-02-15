#include <iostream>
#include <fstream> // file input/output 
using namespace std;

// file input output
int main(){
    // output file stream 
// declareVariableType variableName;
    ofstream outputFile;
    ofstream fout;

// open file
    outputFile.open("demofile.txt"); 
    cout << "Writing to a file. \n";

// write to file
    outputFile << "Bears \n";
    outputFile << "Beat \n";
    outputFile << "Battlestar Galatica \n";

// close file
    outputFile.close();
    cout << "Done writing to file. \n";

    int number1;
    int number2;
    int number3;

    fout.open("Numbers.txt");

    // user input
    cout << "\nEnter a number: ";
    cin >> number1;
    cout << "\nEnter a number: ";
    cin >> number2;
    cout << "\nEnter a number: ";
    cin >> number3;

    fout << number1 << "\n" << number2 << "\n"  << number3;

    fout.close();


}