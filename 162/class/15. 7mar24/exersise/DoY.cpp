#include "DoY.h"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
// constructor

// inital starting values
DoY::DoY(){

}
string DoY::months[] = {"January", "February", "March", 
                    "April", "June", "July", "August",
                    "September", "October", "November", "December"};
int DoY::monthDays[]= { 31,28,31,30,31,30,31,31,30,31,30,31};
// Months
void DoY::setMonth(int d){
    if (d > 30)
    {
        temp = d/30;
    }
    month = months[temp];
}

// days
void DoY::getDay(){
    cout << "Enter the Day: ";
    cin >> day;
    setDay(day);
}
void DoY::setDay(int d){
    day = d;
}


