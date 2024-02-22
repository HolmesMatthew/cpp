#include "Date.h"
#include <iostream>
using std:: cout;
using std::cin;
using std::endl;

void Date::setMonth(int m){
    while (m > MAX_MONTHS || m < 1)
    {
        cout << "Re-enter a valid month 1-12";
        cin >> m;
    }
    month = m;
    
}
void Date::setDay(int d){
while (d > MAX_DAYS || d < 1)
    {
        cout << "Re-enter a valid day 1-31";
        cin >> d;
    }
    day = d;
}
void Date::setYear(int y){
    while (y < 1)
    {
        cout << "Re-enter a valid year";
        cin >> y;
    }
    year = y;
}

void Date::getDatemmddyy()
{
    cout <<"\n" << month << "/" << day << "/" << year << endl;
}
void Date::getDateMonthddyyyy(){
    cout <<"\n"<< months[month-1] << " " << day << " " << year<< endl;
}
void Date::getDateddMonthyyyy(){
    cout <<"\n"<< day << " " << months[month-1] << " " << year<< endl;
}
