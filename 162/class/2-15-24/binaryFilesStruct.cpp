#include <iostream>
#include <fstream>
// #include <iomanip> // for formating
// #include <string>
// #include <cctype>
using namespace std;

const int NAME_SIZE =51, ADD_SIZE = 51, PHONE_SIZE=14;

struct info{
    char name[NAME_SIZE];
    char address1[ADD_SIZE];
    char address2[ADD_SIZE];
    char phone[PHONE_SIZE];
    int age;
    
    };

int main() 
// ----- Start main -----
{
    info person; // innate structure 
    char again; // holder for loop

    fstream people("people.bin", ios::out|ios::binary);
    do
    {
        // get data about the person/people
        cout << "Enter the following data: \n";
        cout << "Name: ";
        cin.getline(person.name, NAME_SIZE); // use getline incase user enters first and last name
        cout << "Age: ";
        cin >> person.age;
        cin.ignore(); // reset input field ~ to ignore whitespace in the input stream so we can use getline
        cout << "Address Line 1: ";
        cin.getline(person.address1, ADD_SIZE);
        cout << "Address Line 2: ";
        cin.getline(person.address2, ADD_SIZE);
        cout << "Phone number: ";
        cin.getline(person.phone,PHONE_SIZE);
        
        //reinterpret cast from pointer to character
        people.write(reinterpret_cast<char *>(&person), sizeof(person));

        cout << "Would you like to add another person?: (y/n)" << endl;
        cin >> again;        
    } while (again == 'Y'|| again == 'y');
    people.close();
    






} 
// ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
-------- end notes -------- */ 