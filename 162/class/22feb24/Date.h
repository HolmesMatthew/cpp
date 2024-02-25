#pragma once 
#ifndef DATE_H
#define DATE_H
class Date
{
    private: // <-- can be changed with . class methods / hidden from main
        int day; 
        int month;
        int year;
    public: // <-- can be seen by user and shared by main
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay() const; // <-- READ ONLY
        int getMonth() const; // <-- READ ONLY
        int getYear() const; // <-- READ ONLY

};
#endif