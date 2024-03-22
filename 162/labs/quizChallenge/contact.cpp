#include "contact.h"
#include <iostream>
using std:: cout;
using std::cin;
using std::endl;

void Contact::setFirstName(){
    string firstN;
    cout << "Enter the contacts First name: " << endl;
    cin.ignore();
    getline(cin, firstN);
    firstName = firstN;
    totalContacts ++;

}

void Contact::setLastName(){
    string lastN;
    cout << "Enter the contacts Last name: " << endl;
    cin.clear();
    getline(cin, lastN);
    lastName = lastN;
}

void Contact::setAge(){
    int uAge;
    cout << "Enter the contacts age: " << endl;
    cin >> age;
    age = uAge;
}

void Contact::setAddress(){
    string addy;
    cout << "Enter the contacts Address: " << endl;
    cin.ignore();
    cin.clear();
    getline(cin, addy);
        cout << "\n\n this is phone " << addy << endl;
    address = addy;
    
}
void Contact::setPhone(){
    string phone;
    cout << "Enter the contacts Phone Number: " << endl;
    cin.clear();
    getline(cin, phone);

    phoneNumber = phone;
}

void Contact::getContact(Contact *contact){
    cout << contact->firstName << " " << contact->lastName << "\t" << contact->age << "\n" 
        << contact->address<< "\t" << contact->phoneNumber;
}
void Contact::displayContact(Contact *contact){
    cout << contact->firstName << " " << contact->lastName << "\t" << contact->age << "\n" 
        << contact->address<< "\t" << contact->phoneNumber;
;


}
Contact Contact::searchContact(Contact *contact, string uInput)
{
    for (int i = 0; i < contact->totalContacts; i++)
    {
        if (contact->firstName == uInput)
        {

            displayContact(contact);
        }
        else{
            cout << "Contact not found";

        }

    }
    return *contact;
}
