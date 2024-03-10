#pragma once
#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <string>
#include "DayOfYear.cpp"
using std::string;

/*
write a class named DayOfYear that takes an integer representing a day and translates 
it to a string consisting of the month followed by the day of the month 

For example:
day 2 would be january 2
day 32 would be february 1
day 365 would be december 31

The constructor for the class should take as a parameter an integer
representing the day of the year, and the class should have a member function print() that prints the 
day of the year in the  month-day format, the class should have an integer member variable to 
represent the day and should have static member variables holding string objects that cant be used to assist 
in the translation from the integer format to the month-day format.

*/
class DayOfYear{
    private:
            static string months[12];
        //     months= {"January", "February", "March", 
        //                     "April", "June", "July", "August",
        //                     "September", "October", "November", "December"};
            int day;
    public:
        DayOfYear(int); // constructor decoration

        void setDay(int);

        string getDoY() const;
        


};
#endif