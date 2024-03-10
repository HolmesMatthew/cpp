#include <iostream>
#include "contactInfo.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
#include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 

{ // ----- Start main -----
    // const int MAX = 25;
    // char name[MAX];
    // char phone[MAX];

    // cout << "Enter name: ";
    // cin >> name;

    // cout << "Enter phone: ";
    // cin >> phone;

    contactInfo* ptr = nullptr;

    ptr = new contactInfo("Kristen Lee", "555-2021");
    // contactInfo entry(name,phone);
    cout << "Name: " << ptr->getName() << endl; // using  ptr->getName() pointer notation instead of  ptr.getName dot notation
    cout << "Phone: " << ptr->getPhone() << endl;
    delete ptr;
    ptr = nullptr;


} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 