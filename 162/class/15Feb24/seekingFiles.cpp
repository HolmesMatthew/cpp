#include <iostream>
#include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
// ----- Start main -----
{

    char ch;

    fstream file("letters.txt", ios::in|ios::binary);
    // L treats forces the compiler to treat integer as a byte 
    file.seekg(5L, ios::beg); // start at begging and go to the 5th bite --> 5L
    file.get(ch); // save into ch variable
    cout << "byte 5 from begging: " << ch << endl;

    file.seekg(-10L, ios::end); 
    file.get(ch);
    cout << "10th byte from the end: " << ch << endl;

    file.seekg(3L, ios::cur); // starting at current position... which is the 10th byte from the end
    file.get(ch);
    cout << "3 bytes from the previous position (10th bytes from the end) " << ch << endl;




} 
// ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 