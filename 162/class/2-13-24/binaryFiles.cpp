#include <iostream>
#include <fstream>
// #include <iomanip> // for formating
// #include <string>
// #include <cctype>
using namespace std;


int main() 
// ----- Start main -----
{

    const int SIZE = 4;
    char data[SIZE]= {'A','B','C','D'};

    fstream file;

    // file.open("test.dat", ios::out, ios::binary);
    file.open("test2.bin", ios::out|ios::binary);
    /*
        2-13-24 cd "/Users/matthew_holmes/Programing/C++/162/class/2-13-24/" \&& g++ binaryFiles.cpp 
        -o binaryFiles && "/Users/matthew_holmes/Programing/C++/162/class/2-13-24/"binaryFiles
        binaryFiles.cpp:19:10: error: no matching member function for call to 'open'
        file.open("test.bin", ios::out, ios::binary);
    */

    cout << "Writing the characters to the file......\n";
    file.write(data, sizeof(data));

    file.close();

    file.open("test2.bin", ios::in|ios::binary);
    cout << "reading in from the file...\n";

    file.read(data,sizeof(data));

    for (int i = 0; i < SIZE; i++)
    {
        cout << data[i] << " ";
    }
    file.close();
    


} 
// ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
-------- end notes -------- */ 