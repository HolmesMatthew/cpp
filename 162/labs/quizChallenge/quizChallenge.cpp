#include <iostream>
#include "contact.h"
#include "contact.cpp"
using namespace std;


int main() 

{ // ----- Start main -----

int displayOption =0;
bool again = false;
char uInput;
string search;

Contact *me = nullptr;
me = new Contact;
Contact *friendFam = nullptr;
friendFam = new Contact;
Contact *contact = nullptr;
contact = new Contact;
do
{   
    cout << "\n1. Enter your info"
        << "\n2. Enter your family/friends info"
        << "\n3. Enter your general contacts info"
        << "\n4. Search for contact"
        << "\n5. Display your info" << endl;
    
    cin >> displayOption;
    switch (displayOption)
    {
    case 1:
        me->setFirstName();
        me->setLastName();
        me->setPhone();
        me->setAge();
        me->setAddress();
        break;
    case 2:
        friendFam->setFirstName();
        friendFam->setLastName();
        friendFam->setPhone();
        friendFam->setAge();
        friendFam->setAddress();
        break;
    case 3:
        contact->setFirstName();
        contact->setLastName();
        contact->setPhone();
        contact->setAge();
        contact->setAddress();
        break;
    case 4:
        cout << "Enter the first name of the contact you wish to search for: (only searching in gen contacts(opt3 input))" << endl;
        cin >> search;
        contact->searchContact(contact,search);

        break;
    case 5:
        me->getContact(me);
        break;
    
    default:
        cout << "Invalid Choice";
        break;
    }
    
    cout << "\nWould you like to do anything else? y/n";
    cin >> uInput;

    if (uInput == 'y' || uInput=='Y')
    {
        again = true;
    }else if(uInput == 'n'|| uInput == 'N'){again = false;}else{cout << "InValId iNpUT" << endl; cin >> uInput;}
    
} while (again == true);
delete contact;
contact = nullptr;
delete me;
me = nullptr;
delete friendFam;
friendFam = nullptr;






} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 

/*
Design a class that holds the following personal data: 
names, 
address, 
age 
and phone number. 

Write the appropriate accessor (getter) and mutator (setter) functions. 
Demonstrate the class by writing a program that creates three instance of it. 
One instance should hold your information, and the other two should hold your 
friends' or family members' information.
*/