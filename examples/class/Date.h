#pragma once
#ifndef DATE_H
#define DATE_H

#include <string>
using std::string;

class Date {
    private:
    static const int MAX_MONTHS = 12;
    const int MAX_DAYS =31;

    int month;
    int day;
    int year;

    string months[MAX_MONTHS] = {"January","February","March","April",
                                "May","June","July","August",
                                "September","November","December"};

    public:
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    void getDatemmddyy();
    void getDateMonthddyyyy();
    void getDateddMonthyyyy();



};

#endif