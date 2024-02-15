#include <iostream>
#include <fstream> // file input/output 
using namespace std;

int main() {

// declareVariableType variableName ---> ifstream = Variable type | variableName = Variable name
    ifstream numericData;

// variables to store data from file
    int value1;
    int value2;
    int value3;
    int sumValue;

// open file
    numericData.open("numericData.txt");

// read in three nums from file
    numericData >> value1;
    numericData >> value2;
    numericData >> value3;

// close file
    numericData.close();

// display data
    sumValue = value1+ value2 +value3;
    cout << "The file contained these values: "<< value1 << " "<< value2 << " "<< value3 << 
    " the sum of which is: " << sumValue << endl;
}