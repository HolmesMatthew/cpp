#define _CTR_SECURE_NO_WARNINGS
#pragma once
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <iostream>
#include <cstring>
#include <string>

class contactInfo 
{
    private:    
        char* name;
        char* phone;

    public:
        contactInfo(const char *n, const char *p){
            name = new char[strlen(n)+1];
            phone = new char[strlen(p)+1];
            // strcpy_s(name, strlen(n),n)
            strcpy(name,n);
            strcpy(phone,p);
            }

            // ~ = destructor symbol
            ~contactInfo(){
                std::cout << "Running Destructor";
                delete[] name;
                delete[] phone;
            }

            // getters
            const char* getName() const{
                return name;
            }
            const char* getPhone() const{
                return phone;
            }
};

#endif