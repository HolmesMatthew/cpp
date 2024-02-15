#include <iostream>
#include <string>
using namespace std;
/* ---------- notes ----------
Write a program that uses a structure to store the following data about a customer account:

    Name
    Address
    City, State, and Zip
    Telephone Number
    Account balance
    Date of last Payment

The program should use an array of atleast 5 structures. 
It should let the user enter data into the array change the contents of any element,
and display all the data stored in the array. The program should have a menu driven user interface.
-------- end notes -------- */ 

// ADD 4 MORE STRUCTS
struct CustomerData {
    string name;
    string address;
    string city;
    string state;
    string zip;
    int accountBal;
    string lastPay;

};
void EnterCData(CustomerData customer[], int SIZE);
void DisplayData(CustomerData customer[], int SIZE);
int main() 
// ----- Start main -----
{
const int SIZE = 1;

CustomerData customer[SIZE];
EnterCData(customer,SIZE);
DisplayData(customer, SIZE);


} 
// ----- End main -----
void DisplayData(CustomerData customer[], int SIZE)
{
    int exit = 0;
    while (exit == 0)
    {
        int choice = 0;
        cout << "\n\nSelect a choice"
        << "\n0. exit"
        << "\n1. Display last pay and upcoming payment"
        << "\n2. Display name and address" 
        << "\n3. Display all" << endl;
        cin >> choice;
        if (choice == 1)
        {
            int payChoice = 0;
            cout << "\n\nSelect a choice"
            << "\n1. Search by name"
            << "\n2. Display all" << endl;
            cin >> payChoice;
            if (payChoice ==1)
            {
                string nameFind;
                cout << "\n\nEnter the name you wish to find: ";
                cin >> nameFind;
                for (int i = 0; i < SIZE; i++)
                {
                    if (customer[i].name == nameFind)
                    {
                        cout << customer[i].name << endl;
                        cout << "- - - - - - - - - -" << endl;
                        cout <<"Last paid on: " << customer[i].lastPay 
                        << " With an upcoming balance of: " << customer[i].accountBal << endl;

                        string edit;
                        cout << "Would you like to edit " << customer[i].name << "? (y/n)" << endl;
                        cin >> edit;

                        if (edit != "n" || edit != "y")
                        {
                            // while (edit != "n" || edit != "N" || edit != "y" || edit != "Y")
                            // {
                            //     cout << "Please enter 'y' or 'n' " << endl;
                            //     cin >> edit;
                            // }
                            cout << "\n------------------------" 
                            << "\n** FIX ME ** EDIT FLAG IS NOT WORKING ** FIX ME **"
                            << "\n------------------------";

                        }
                        
                        if (edit == "y" || edit == "Y")
                        {
                            int editChoice;
                            cout << "Would you like to change " << customer[i].accountBal 
                            << " or " << customer[i].lastPay << "?" 
                            << "\n 1. to change Account balance"
                            << "\n 2. to change Last paid date" << endl;
                            cin >> editChoice;
                            if (editChoice == 1)
                            {
                                cout << "\n\nCurrent account balance ~ " << customer[i].accountBal << "~"
                                << "\n Please enter new account balance: " << endl;
                                cin >> customer[i].accountBal;
                                cout << "New account balance for " << customer[i].name << ": " << customer[i].accountBal << endl;
                            }else if(editChoice ==2)
                            {
                                cout << "\n\nCurrent last paid date ~ " << customer[i].lastPay << "~"
                                << "\n Please enter date " << endl;
                                cin >> customer[i].lastPay;
                                cout << "New last paid date for " << customer[i].name << ": " << customer[i].lastPay << endl;
                            }
                            
                        }
                        
                        
                        
                    }
                    
                }
                
            }else if(payChoice == 2)
            {
                for (int i = 0; i < SIZE; i++)
                {
                    cout << "\n\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - \n" << endl;
                    cout << customer[i].name << endl;
                    cout << "\n*********************************\n" << endl;
                    cout <<"Last paid on: " << customer[i].lastPay 
                    << " With an upcoming balance of: " << customer[i].accountBal << endl;
                }
            }
        }
        else if(choice == 2)
        {
            int addyChoice = 0;
            cout << "\n\nSelect a choice"
            << "\n1. Search by name"
            << "\n2. Display all"<< endl;
            cin >> addyChoice;
            if (addyChoice == 1)
            {
                string nameFind;
                cout << "\n\nEnter the name you wish to find: "<< endl;
                cin >> nameFind;
                for (int i = 0; i < SIZE; i++)
                {
                    if (customer[i].name == nameFind)
                    {
                        cout << "\n" << customer[i].name << endl;
                        cout << "- - - - - - - - - -" << endl;
                        cout << "\n" 
                        << customer[i].address << ", " 
                        << customer[i].city << ", "
                        << customer[i].state << " "
                        << customer[i].zip << endl;
                    }
                }
            }else if(addyChoice == 2)
            {
                for (int i = 0; i < SIZE; i++)
                {
                    cout << "\n" << customer[i].name << endl;
                        cout << "- - - - - - - - - -" << endl;
                        cout << "\n" 
                        << customer[i].address << ", " 
                        << customer[i].city << ", "
                        << customer[i].state << " "
                        << customer[i].zip << endl;
                }
            }
            
        }  
        else if(choice == 3)
        {
            for (int i = 0; i < SIZE; i++)
            {
                cout << "\n"<< customer[i].name << "\n" 
                << "\n- - - - - - - - - -\n"
                << "At: " << customer[i].address << ", " 
                << customer[i].city << ", "
                << customer[i].state << " "
                << customer[i].zip << endl;
                << "\n- - - - - - - - - -\n"
                << "With a last paid date of "
                

            }
            
        }
    }
    
    
    
};
void EnterCData(CustomerData customer[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the Customers name: ";
        // cin.ignore();
        getline(cin, customer[i].name);

        cout << "Enter " << customer[i].name <<" street address: ";
        // cin.ignore();
        getline(cin, customer[i].address);

        cout << "Enter " << customer[i].name <<" City: ";
        // cin.ignore();
        getline(cin, customer[i].city);

        cout << "Enter " << customer[i].name <<" state: ";
        // cin.ignore();
        getline(cin, customer[i].state);

        cout << "Enter " << customer[i].name <<" Zip: ";
        // cin.ignore();
        getline(cin, customer[i].zip);


        cout << "Enter " << customer[i].name <<" account balance: ";
        cin >> customer[i].accountBal;

        cout << "Enter " << customer[i].name <<" Date of last payment: ";
        // cin.ignore();
        getline(cin, customer[i].lastPay);
    }
    
}