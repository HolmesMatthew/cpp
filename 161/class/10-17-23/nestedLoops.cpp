#include <iostream>
#include <iomanip>
#include <map>
#include <string>
using namespace std;

int main(){
    // get num of years to calculate rainfall 

    //loop through years
    //loop through each month
    //add all data together
    // avg - totalRainfall/totalMonths

// initialize variables
    int exit = 1;
    int years = 0;
    int months =12;
    float rainMonth =0.0f;
    float rainTot= 0.0f;

    map<int,int>calendar;

    while (exit != 0)
    {

        
// Get years from user
    cout << "Enter the number of years you wish to collect rainfall data: ";
    cin >> years;
// Ensure years is greater than 0 or less than 10

        while (years <=0 || years >10)
        {
            cout << "Please enter 1-10: ";
            cin >> years;
        }
        

// Loop through years
    for (int i = 1; i < years+1; i++)
    {
        float rainYear =0.0f;
        cout << "\n" << i << "\n";
// Loop through month
        for (int x = 1; x < 13; x++)
        {
            bool isReal = false;
// Get rainfall for the month
            cout << "Enter rainfall for the month: " << x << ": ";
            cin >> rainMonth;
// check for abnormal values
            while (rainMonth < 0 || rainMonth > 120 && isReal == false ) // loop until value is within range
            {
                cout <<rainMonth << " is what you entered, are you sure? y/n: ";
                char userAnswer = 'n';
                cin >> userAnswer;
                if (userAnswer == 'Y' || userAnswer == 'y')
                {
                    isReal = true;
                }else{
                    cout << "please re enter the rain \n";
                    cin >> rainMonth;
                }
                

            }
            
            calendar[x] = rainMonth;
            rainYear += rainMonth;
        }
        cout << i << " Rain this year: " << rainYear << "\n";
        rainTot += rainYear;
// print off elements
        for(auto element: calendar){
            cout<< "Month " << element.first << "  had rain fall " << element.second <<  "\n";
        }
    }
// get rain average
    if (years > 0)
        {
        int rainAvg = rainTot / years;
        cout << rainAvg << " Is the average rain per year \n";
        }
    
    
    
    cout << "Do you wish to continue? 0 to quit or 1 to continue";
    cin >> exit;
    //
    }
}