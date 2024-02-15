#include <iostream>

#include <iomanip>
using std::setw;


using namespace std;
// I should of put my array vs vectors into functions on lab 4 sorry...
void bevSurvey();
int main(){
bevSurvey();
}

void bevSurvey(){

    cout << "Each person participating in the survey should"
    << " choose their favorite beverage from the following list:\n" 
    << "1. Coffee 2. Tea 3. Coke 4. Orange Juice\n";

    int options[5] = {-1,1,2,3,4};
    // user input variable + user options
    int input = 0;
    // total number of users
    int sum = 0;

    // in order of appearance coffee[0], tea[1], coke[2], orangeJuice[3]
    int survey[4] = {0,0,0,0};

    // storage for the results
    int coffee = 0;
    int tea = 0;
    int coke = 0;
    int orangeJuice = 0;

    int exit = 0;
    while (exit == 0)
    {
        cout << "Please input the favorite beverage of person"
        << "#1: Choose 1, 2, 3, or 4 from the above menu or -1 to " 
        << "exit the program\n";

        // get user input
        cin >> input;
        
        bool valid = false;
        for (int i = 0; i < 5; i++)
        {
            if (options[i] == input){valid = true;break;}
            else{valid = false;}
        }   
        if (valid == true)
        {
            if (input == -1)
            {  // close program
                exit = 1;
            }
            else if (input == 1 )
            {
                survey[0] += 1;
            }
            else if (input == 2)
            {
                survey[1] += 1;
            }
            else if (input == 3)
            {
                survey[2] += 1;
            }
            else if (input == 4)
            {
                survey[3] += 1;
            }
            
        }
        else
        {
            cout << "INVALID INPUT\n"
            << "Please input the favorite beverage of person"
            << "#1: Choose 1, 2, 3, or 4 from the above menu or -1 to " 
            << "exit the program\n";
        }
                
    } // end while loop
    for (int i = 0; i < 4; i++)
    {
        sum += survey[i];
        if (i == 0)
        {
            coffee += survey[i];
        }
        else if (i == 1)
        {
            tea += survey[i];
        }
        else if (i == 2)
        {
            coke += survey[i];
        }
        else if (i == 3)
        {
            orangeJuice += survey[i];
        }
    }
    
    cout << "\nThe total number of people surveyed is " << sum << "\n"
    << "The results are as follows:\n\n" << "Beverage   Number of Votes\n"
    << "********************************\n";
    cout << "Coffee" << setw(8) << coffee << "\nTea          " << tea << 
    "\nCoke         " << coke << "\nOrange Juice " << orangeJuice;


    


} // end function

/*
Write a program that performs a survey tally on beverages. The program should prompt for the next person until 
a sentinel value of –1 is entered to terminate the program then it should print the results out to a 
file (expected results are at the end of the sample run below).

Each person participating in the survey should choose their favorite beverage from the following list:

1. Coffee 2. Tea 3. Coke 4. Orange Juice



Sample Run:
Please input the favorite beverage of person #1: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program
4

Please input the favorite beverage of person #2: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program

Please input the favorite beverage of person #3: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program
3

Please input the favorite beverage of person #4: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program

Please input the favorite beverage of person #5: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program

Please input the favorite beverage of person #6: Choose 1, 2, 3, or 4 from the above menu or -1 to 
exit the program
-1

The total number of people surveyed is 5.
The results are as follows:

Beverage   Number of Votes
********************************

Coffee               3
Tea                  0
Coke                 1
Orange Juice         1
*/