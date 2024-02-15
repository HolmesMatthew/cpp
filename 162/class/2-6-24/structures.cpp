#include <iostream>
#include <string>
#include <iomanip> // for displaying formatted data
using namespace std;

struct Payroll {
    int empNum;
    string name;
    double hours;
    double payRate;
    double grossPay;
};

void enterPayroll(Payroll employee[],double pay, int num);
void displayPayroll(Payroll employee[], int num);
int main() 
// ----- Start main -----
{
    const int numEmployees = 3;


    Payroll workers[numEmployees];
    Payroll managers[numEmployees]; 
    Payroll customerService[numEmployees];
    //Payroll Workers{0," ",0, 20.54,0 }; // pre set payRate // should pre set pay rate, not working for me

    // workers.payRate = 20.54;
    // managers.payRate = 35.67;
    // customerService.payRate = 16.32;

    double payW = 20.54;
    double payM = 35.67;
    double payCS = 16.32;

    int uInput = 0;
    char again = 'y';
    
    while (again == 'y' || again == 'Y')
    {
        /* code */
    

    cout << "What type of employee are you calculating gross pay for? \n"
        << "1. Workers\n"
        << "2. Managers\n"
        << "3. Customer Service\n";
    cin >> uInput;

    while (uInput >3 || uInput < 1)
    {
        cout << "********** INVALID ENTRY **********"
            << "What type of employee are you calculating gross pay for? \n"
            << "1. Workers\n"
            << "2. Managers\n"
            << "3. Customer Service\n";
        cin >> uInput;
    }
    if (uInput ==1)
    {
        enterPayroll(workers,payW,numEmployees);
        displayPayroll(workers,numEmployees);
    }
    else if(uInput ==2){
        enterPayroll(managers,payM,numEmployees);
        displayPayroll(managers,numEmployees);
    }
    else if(uInput ==3){
        enterPayroll(customerService,payCS,numEmployees);
        displayPayroll(customerService,numEmployees);
    }

    cout << "Would you like to calculate another employee? (y/n)\n" ;
    cin >> again;
    }
} 
// ----- End main -----

// get employee info using struct 
void enterPayroll(Payroll employee[],double pay, int num)
{
    for (int i = 0; i < num; i++)
    {
    cout << "Enter the employee's number: ";
    cin >> employee[i].empNum;
    
    cout << "Enter the employee's name: ";
    //ignore what is currently in the buffer 
    cin.ignore(); // ignores new line input set from previous cin
    getline(cin, employee[i].name); // use getLine() to capture white space if 2 names are entered EX: first, last

    cout << "Enter the employee's hours: ";
    cin >> employee[i].hours;

    // cout << "Enter the employee's hourly pay rate: ";
    employee[i].payRate = pay;

    employee[i].grossPay = employee[i].hours * employee[i].payRate;
    }
    // return employee;
}

// Display  data
void displayPayroll(Payroll employee[], int num)
{   
    for (int i = 0; i < num; i++)
    {
    cout << "\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << "Here is " << employee[i].name << "'s Payroll Data: \n";
    cout << "Employee ID: " << employee[i].empNum << endl;
    cout << "Hours worked: " << employee[i].hours << endl;
    cout << "Pay rate: " << employee[i].payRate << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Gross Pay: $" << employee[i].grossPay << endl;
    }
}
/* ---------- notes ----------

-------- end notes -------- */ 