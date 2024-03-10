#include <iostream>
// #include <iomanip> // for formating
#include <fstream> // for file input/output
// #include <string>
// #include <cctype>
using namespace std;


int main() 
// ----- Start main -----
{

    const int SIZE = 10;
    fstream file; 

    int numbers[SIZE]= {1,2,3,4,5,6,7,8,9,10};

    file.open("numbers.bin", ios::out|ios::binary );

    cout << "Writing to the file...\n";
    // look up line 22
    file.write(reinterpret_cast<char *>(numbers),sizeof(numbers));

    file.close();

    file.open("numbers.bin", ios::in|ios::binary);
    file.read(reinterpret_cast<char *>(numbers),sizeof(numbers));

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }
    file.close();

} 
// ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
-------- end notes -------- */ 