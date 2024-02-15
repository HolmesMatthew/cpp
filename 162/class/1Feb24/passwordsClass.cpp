#include <iostream>
// #include <cstring> // supposed to be for strlen()
// #include <cctype> // supposed to be for islower() & isupper() ect..
using namespace std;

bool Lower(char pass[]);
bool Digit(char pass[]);
bool Upper(char pass[]);
bool IsSix(char pass[]);
int main() 
// ----- Start main -----
{
const int S = 24;
char pass[S];
char pass2[S];
bool isSix = false;
bool digit = false;
bool upper = false;
bool lower = false;

cout << "Enter a password:\n"
<< "* must contain 6 characters\n"
<< "* must contain one upper case and one lower case\n"
<< "* must contain one number\n";

cin.getline(pass,S); // GOOGLE getline()
cout << endl;
cout << "Re-enter a password:\n";
cin.getline(pass2,S);
while (strcmp(pass,pass2) != 0) // strcmp compares two strings and returns an int, 0 == not the same; 1 == same
{
    cout << "Re-enter a password:\n";
    cin.getline(pass2,S);
}


isSix = IsSix(pass);
upper = Upper(pass);
lower = Lower(pass);
digit = Digit(pass);

if (isSix  && upper  && lower  && digit )
{
    cout << "~good job you have a correct password~";
}



} 
bool Lower(char pass[])
{
    bool lower = false;
    for (int i = 0; i < strlen(pass); i++)
    {
        if (islower(pass[i]))
        {
            lower = true;
        }
        
    }
        if (lower == true)
    {
        return lower;
    }
    else
    {
        cout << "Password does not contain an lowercase";
        return lower;
    }
    
}
bool Digit(char pass[])
{
    bool digit = false;
    for (int i = 0; i < strlen(pass); i++)
    {
        if (isdigit(pass[i]))
        {
            digit = true;
        }
        
    }
        if (digit == true)
    {
        return digit;
    }
    else
    {
        cout << "Password does not contain an numeric value";
        return digit;
    }
    

}
bool Upper(char pass[])
{
    bool upper = false;
    for (int i = 0; i < strlen(pass); i++)
    {
        if (isupper(pass[i]))
        {
            upper = true;
        }
    }
    if (upper == true)
    {
        return upper;
    }
    else
    {
        cout << "Password does not contain an uppercase";
        return upper;
    }
    
    
}
bool IsSix(char pass[])
{
    bool IsSix = false;
    int count = 0;
    for (int i = 0; i < strlen(pass); i++)
    {
        if (isalnum(pass[i]))
        {   
            count++;
        }
        
    }
    if (count > 5)
    {
        IsSix = true;
    }
    
        if (IsSix == true)
    {
        return IsSix;
    }
    else
    {
        cout << "Password does not contain at least 6 characters";
        return IsSix;
    }
    
}
// ----- End main -----


/* ---------- notes ----------
------input------
-user input
------process------
-create function for each of criteria that returns true or false if criteria is met
------output------
-
------ ------
------ ------
------ ------
-------- end notes -------- */ 