#include <iostream>
#include <fstream> // for file input/output
// #include "init.h"
// #include "init.cpp"
// #include <cstdlib>
#include <string> 

// #include <cctype> 
#include <iomanip> // for formating
# include <sstream>
using namespace std;

struct Employee {
    string name;
    string social;
    double wage;
    double numHour;
    double straightTimePay;
    double overtimePay;
    char empType;
    double netPay;
};
void getWorkers(Employee peasants[], int numEmployees);
void display(Employee peasants[], int numEmployees);
void calc_wage(Employee peasants[], int numEmployees);

int main() 
{ // ----- Start main -----
const int numEmployees = 11;
Employee peasants[numEmployees];

getWorkers(peasants, numEmployees);
calc_wage(peasants, numEmployees);
display(peasants, numEmployees);




    
} // ----- End main -----

void getWorkers(Employee peasants[], int numEmployees){
    fstream workers;

    string worker;
    workers.open("employee.txt", ios::in);
    if (workers)
    {
        string sent;
        while (workers)
        {

            int count = 0;
            string tempStr;

            while (getline(workers, tempStr) && count < numEmployees) {
                istringstream iss(tempStr);
                string firstName, lastName, social;
                double tempWage, tempNumHour;
                char tempEmpType;
                iss >> firstName >> lastName >> social >> tempWage >> tempNumHour >> tempEmpType;
                peasants[count].name = firstName + " " + lastName;
                peasants[count].social = social;
                peasants[count].wage = tempWage;
                peasants[count].numHour = tempNumHour;
                peasants[count].empType = tempEmpType;
                count++;
            }

        }

    }
        workers.close();
        calc_wage(peasants,numEmployees);

    }

void display(Employee peasants[], int numEmployees){
    int uDate =0;
    int displayOption =0;
    bool again = false;
    char uInput;

    do{
    cout << "\nSelect an option\n"
        <<"\n1. View Quick run down"
        <<"\n2. View employee socials"
        <<"\n3. View Employee pay data"
        <<"\n4. View all";
    cin >> displayOption;
    switch (displayOption)
    {
    case 1:
        cout << fixed << showpoint << setprecision(2);
        cout << "Name" << "\t\t" << "Wage" << "\t" << "Net Pay" << "\t"<< "Emp Type "<< endl;
        cout << "------------------------------------------------------" << endl;
        for (int i = 0; i < numEmployees; i++)
                {
                    // cout << peasants[i].name << " " << peasants[i].social << " " << peasants[i].wage << " " 
                    // << peasants[i].numHour << " " << peasants[i].empType << endl;
                    if (peasants[i].empType == 'F')
                    {
                        // cout << fixed << showpoint << setprecision(2);
                        cout << peasants[i].name << "\t" << peasants[i].numHour << "\t" << peasants[i].netPay << "\t"<< peasants[i].empType << endl;
                    }
                    else{

                        cout << peasants[i].name << "\t" << peasants[i].numHour << "\t" << peasants[i].netPay << "\t"<< peasants[i].empType << endl;

                    }


                }
        break;
    case 2:
        cout << fixed << showpoint << setprecision(2);
        cout << "Name" << "\t\t" << "Social" << endl;
        cout << "------------------------------------------------------" << endl;
        for (int i = 0; i < numEmployees; i++)
        {
        cout << fixed << showpoint << setprecision(2);
        cout << peasants[i].name<< "\t" << peasants[i].social << endl;

        }
        
        break;
    case 3:
        cout << fixed << showpoint << setprecision(2);
        cout << "Name" << "\t\t" << "Wage" << "\t" << "Hours" << "\t" 
        << "Overtime" <<"\t"<< "Net Pay" << endl;
        cout << "------------------------------------------------------" << endl;
        for (int i = 0; i < numEmployees; i++)
        {
        cout << fixed << showpoint << setprecision(2);
        cout << peasants[i].name<< "\t" << peasants[i].wage<< "\t" << peasants[i].numHour<< "\t" << peasants[i].overtimePay<< "\t" << peasants[i].netPay << endl;

        }
        break;
    case 4:
        cout << fixed << showpoint << setprecision(2);
        cout << "Name" << "\tı\t" << "Emp Type" <<"\t" << "Social" <<"\t" << "Wage" << "\t" 
        << "Hours" << "\t" << "Overtime" <<"\t"<< "Net Pay" << endl;
        cout << "--------------------------------------------------------------------------------" << endl;
        for (int i = 0; i < numEmployees; i++)
        {
        cout << fixed << showpoint << setprecision(2);
        cout << peasants[i].name <<"\t"<< peasants[i].empType << "\t" 
        << peasants[i].social << "\t" << peasants[i].wage << "\t" 
        << peasants[i].numHour<< "\t" << peasants[i].overtimePay << "\t" << peasants[i].netPay << endl;

        }
        break;
    
    default:
        cout << "Invalid Choice";
        break;
    }
    cout << "Check something else? y/n";
    cin >> uInput;
    if (uInput == 'y' || uInput=='Y')
    {
        again = true;
    }else{ again = false;}
    
} while (again == true);
    
    }
void calc_wage(Employee peasants[], int numEmployees)
{
    for (int i = 0; i < numEmployees; i++)
    {
        if (peasants[i].empType == 'F')
        {

            if (peasants[i].numHour > 40)
            {

                peasants[i].straightTimePay = peasants[i].wage * 40;
                peasants[i].overtimePay = ((peasants[i].numHour-40)*(peasants[i].wage+5));
            }else {
                peasants[i].straightTimePay = peasants[i].wage * 40;
                peasants[i].overtimePay = 0;
            }
            
        }else {
            if (peasants[i].numHour >40)
            {
                peasants[i].straightTimePay = peasants[i].wage * 40;
                peasants[i].overtimePay = ((peasants[i].numHour-40)*(peasants[i].wage+5));
            }
            else{
                peasants[i].straightTimePay = peasants[i].wage * 40;

                peasants[i].overtimePay = 0;
            }
        }
        peasants[i].netPay = (peasants[i].straightTimePay + peasants[i].netPay);
        
    }
    
}
/* ---------- notes ----------
For this exercise, you will be modifying a program that:

    reads from a file a person’s name, 
    Social Security number, 
    wage, 
    the number of hours worked in a week and status. 

If a person is a full time employee, $5.00 is deducted from their wages for union fees. 
A person is full time if they have an F as the output, you must display the person’s name, 
Social Security number, wage, number of hours, straight time pay, overtime pay, 
whether they are a part time or full time employee, and their net pay. 
Make sure the output is formatted into rows and columns and includes the appropriate titles and column headings.

Your job is to create a structure called Employee which contains the fields identified above. 
Use and array of structures to hold your data. 
Instead of having to pass all the parallel arrays to the various functions, 
you can simply pass your array of structures.

Data: Use the following information for your data file:
John Smith 123-09-8765 9.00 46 F
Molly Brown 432-89-7654 9.50 40 F
Tim Wheeler 239-34-3458 11.25 83 F
Keil Wader 762-84-6543 6.50 35 P
Trish Dish 798-65-9844 7.52 40 P
Anthony Lei 934-43-9843 9.50 56 F
Kevin Ashes 765-94-7343 4.50 30 P
Cheryl Prince 983-54-9000 4.65 45 F
Kim Cares 343-11-2222 10.00 52 F
Dave Cockroach 356-98-1236 5.75 48 F
Will Kusick 232-45-2322 15.00 45 P
-------- end notes -------- */ 