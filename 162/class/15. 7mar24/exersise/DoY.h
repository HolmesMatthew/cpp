#pragma once
#ifndef DOY_H
#define DOY_H

#include <tuple>
#include <string>
using std::string;


class DoY
{
    private: 
        int day;
        int temp;
        string month;
        static string months[12];
        static int monthDays[12];
    // public
    public:
        DoY(); // constructor declaration
        
        // setters
        void setDay(int);
        void setMonth(int);
        // getters
        void getDay();

};
#endif