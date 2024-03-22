#pragma once
#ifndef CONTACT_H
#define CONTACT_H

#include <string>
using std::string;

class Contact {
    private:

    string firstName;
    string lastName;
    int age;
    string address;
    string phoneNumber;
    int totalContacts;

    public:
    //setter
    void setFirstName();
    void setLastName();
    void setAge();
    void setAddress();
    void setPhone();


    //getter
    void getContact(Contact *contact);
    Contact searchContact(Contact *contact, string uInput);
    void displayContact(Contact *contact);





};

#endif