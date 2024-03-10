#include "DayOfYear.h"
using std::cout;
using std::cin;
using std::string;

DayOfYear::DayOfYear(int b){
    day = b;
}
void DayOfYear::setDay(int b){
          day = b;
            
        }

string DayOfYear::getDoY()const{
    if (day > 180)
    {   
        if (day > 270)
        {
            cout << "option A";
        }
        cout << "option B";
    }
    else if (day <= 180)
    {
        if (day < 90)
        {
            cout << "Option C";
        }
            cout << "Option D";
        
    }
    
}