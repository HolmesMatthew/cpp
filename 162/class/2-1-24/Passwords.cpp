#include <iostream>
#include <string>
using namespace std;



int main() 
// ----- Start main -----
{
    string holder;
// get password
    cout << "Enter a password (at least 6 characters long, one UPPER case and one lower case with 1 digit)\n";
    cin >> holder;
    cout << holder;

// convert password to char to check each charater

    // put into while loop to meet password conditions
    int length = holder.length();
    char* password = new char[length];
    for (int i = 0; i < length; i++)
    {
        password[i] = holder[i];
    }
    cout << '\n';
    int isSixDigit = false;
    int upperCase = false;
    int lowerCase = false;
    int numericChar = false;
    while (isSixDigit = false and uppercase = false and lowerCase = false and numericChar = false)
    {
        // check for password conditions; put into function
        if (length > 6)
        {
            isSixDigit = true;
        }
        for (int i = 0; i < length; i++)
        {   
        
            for (int x = 41; i <= 59; i++)
            {
                if (password[i] == x)
                {
                    upperCase = true;
                }
            }
    
        }

    }


    


        

// When done, remember to free the allocated memory;
    // delete[] password;

} 
// ----- End main -----


/* ---------- notes ----------
Create a program that requires a users to enter their own passwords
Your program requires that users passwords meets the following criteria
1. The password should be at least six characters long
2. The password should contain at least one Uppercase and one Lowercase letter
3. The password should have at least one digit

Yo9ur program should evaluate the entered passwords and verify that it meets the criteria, 
if not display a message to the yser telling them why it doesnt meet the criteria

-------- end notes -------- */ 

