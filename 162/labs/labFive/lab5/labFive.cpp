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
long byteNum(int recNum);
void showRec(Employee person);
void getWorkers(Employee peasants[], int numEmployees);
void display(Employee peasants[], int numEmployees);
void calc_wage(Employee peasants[], int numEmployees);
void workersToBinary(Employee peasants[], int numEmployees);

int main() 
{ // ----- Start main -----
const int numEmployees = 11;
Employee peasants[numEmployees];

 // Sorry its messy... im trying to get everything done :(

getWorkers(peasants, numEmployees);
calc_wage(peasants, numEmployees);
workersToBinary(peasants, numEmployees);
// display(peasants, numEmployees);

    
} // ----- End main -----
void workersToBinary(Employee peasants[], int numEmployees){
    fstream workersToBin;
    workersToBin.open("employee.txt", ios::in);
    int toImport = 0;
    string temp;
    while (getline(workersToBin, temp))
    {
     toImport ++;
    }
    fstream workerBin;
    workerBin.open("worker.bin", ios::out|ios::binary);

        int imported =0;
        for (int i = 0; i < toImport; i++)
        {
            workerBin.write(reinterpret_cast< char*>(&peasants[i]), sizeof(peasants[i]));
            imported ++;

        }
        workerBin.close();
        workerBin.open("worker.bin", ios::in|ios::binary);
        if (imported != toImport)
        {
            cout << "~~imported does not match the number to import~~" << endl;
        }else if(imported == toImport){
            cout << "GTG ~imported matches number to import~"<< endl;
        }

        for (int i = 0; i < toImport; i++)
        {
        workerBin.read(reinterpret_cast<char*>(&peasants[i]), sizeof(peasants[i]));
        showRec(peasants[i]);
        }
        workersToBin.close();
        workerBin.close();
    }
long byteNum(int recNum)
{
    return sizeof(Employee) * recNum;
}
void showRec(Employee person)
{
    cout << "Name: " << person.name << endl;
    cout << "Social: " << person.social << endl;
    cout << "Net pay:$" << person.netPay << endl;
    cout << "Num hour: " << person.numHour << endl;
}
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
Use the text file from the previous lab and 
write a program that reads in the text file 
storing this information in an array of structures 
and then write the information to a binary file. 
Before any data from the text file is written to the binary file, 
write the number of records in your array. 
*/