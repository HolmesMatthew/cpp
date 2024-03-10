#include <iostream>
#include <iomanip> // for formating
#include <fstream>
#include <string>
using namespace std;


int main() 
// ----- Start main -----
{   
    string fileName; // holds file name
    char ch; // to hold character
    char sentCh;
    fstream file; // fstream obj
    fstream dataFile; // fstream for sentence

    // get file name
    cout << "Enter a file name: ";
    cin >> fileName;

    file.open(fileName, ios::in);
    dataFile.open("sentence.txt", ios::out);


    cout << "Type a sentence and end with a period.\n";
    // get sentence on char at a time from user
    cin.get(sentCh);
    while (sentCh != '.')
    {
        dataFile.put(sentCh); // put sentence in dataFile stopping at period
        cin.get(sentCh);
    }
    dataFile.put(sentCh);
    dataFile.close();
    

    if (file) // if file exists
    {

        // get() from file
        file.get(ch);

        while(file)
        {
            cout << ch;
            file.get(ch);
        }
        file.close();
    }else{
        cout << "\n~CoUlD nOT oPeN " << fileName << "tRY AgAiN~\n";
    }
    


} 
// ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 