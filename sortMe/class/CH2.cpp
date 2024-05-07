#include <iostream> 
#include <iomanip>
#include <string>// preprocessor directives

using namespace std;

//using namespace std; // replaces std::cout

//using std::cout; // for embeded systems 
//using std::cin;
//using std::endl;
//using std::string;

void function1();

int main()
{
    // constant variable
    const float PI = 3.14;
    const int FULLTIME = 40;
    const float FFULLTIME = 40;
    
    // variable variable - var-var
    char letter = 'j';
    int userValue = 0;
    int value1 = 0;
    float fValue = 0.0;
    string firstName = " ";
    string lastName = " ";

    // get user first name
    cout << "Fist name please: ";
    cin >> firstName;
    cout << "hello " << firstName << endl; 

    // get a numb from user
    cout << "enter a number: ";
    cin >> userValue;
    value1 = FULLTIME / userValue;
    fValue = FFULLTIME / 11;
    // return value to user
    cout << "what you " << firstName << " entered: "  << userValue << "\n" << userValue << " divided by 40 \n" << value1;

   // function1();
}

void function1()
{
    cout << "\nprint me";
}

// single line comment

/*
multi-line comment
*/