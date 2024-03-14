#include <iostream>
// #include "init.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
#include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


void SentFunc(char *userIn,int size);
char* StrToChar(string userIn, int size);
int main() 
{ // ----- Start main -----
    string userIn;
    cout << "Enter a sentence:" << endl;
    getline(cin, userIn);
    int size = userIn.size();

    SentFunc(StrToChar(userIn, size), size);

} // ----- End main -----

char* StrToChar(string userIn, int size){
    // convert string to char, would of done if differently but it said to have a function accept a pointer to a c-string...
    char *userStr = nullptr;
    userStr = new char[size];
    for (int i = 0; i < size; i++)
    {
        userStr[i] = userIn[i];

    }
    return userStr;
}

void SentFunc(char *userStr,int size){
    // go threw each char in string
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (islower(userStr[i]) == 1){userStr[i] = toupper(userStr[i]);}    
        }
        if (ispunct(userStr[i]) == 1)
        {
            if (isspace(userStr[i+1])==1)
            {userStr[i+2] = toupper(userStr[i+2]);}else{userStr[i+1]= toupper(userStr[i+1]);}
        }
    }
    //display new sentence
    for (int i = 0; i < size; i++)
    {
        cout << *userStr;
        userStr++;
    }

}
/* ---------- notes ----------
Write a function that accepts a pointer to a C-String as an argument and capitalizes 
the first character of each sentence in the string. 

For instance, if the string argument is "hello, my name is Joe. what is your name?"
the function should manipulate the string so that it contains "Hello. My name is Joe. What is your name?". 

Demonstrate the function in a program that asks the user to input a string then passes 
it to the function. The modified string should be displayed on the screen. 

Extra Credit: Write an overloaded version of this function that accepts a string class object as its argument.
-------- end notes -------- */ 