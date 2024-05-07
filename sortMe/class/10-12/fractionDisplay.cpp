#include <iostream>
#include <iomanip>
using namespace std;

// have the user enter 2 numbers and display a fraction, handle negative numbers as well as mix fractions

int main(){

    int exit = 2;
    int option = 1;
// loop while exit is not 0
while (exit != 0) 
    {
    
// initialize variables

    int numerator = 0;
    int denominator = 0;

   
    cout << "Enter the numerator (whole numbers only) \n" ;
    cin >> numerator;
    cout << " \n Enter the denominator (whole numbers only) \n" ;
    cin >> denominator;
    
    if (denominator !=0){

    // if negative
    if (numerator < 0 || denominator < 0 ){ 

        // if numerator is bigger than denominator
        if (numerator > denominator) 
        {
            // int rem = 0; 
            // int placeHolder =0;
            int rem = numerator % denominator;
            int placeHolder = numerator / denominator;
            cout << placeHolder << " " << rem << "/" << denominator<< endl; 

        // still negative but regular fraction
        }else{ 
            // int rem = 0; 
            // int placeHolder =0;
            int rem = numerator % denominator;
            int placeHolder = numerator / denominator;
            cout << placeHolder << " " << rem << "/" << denominator<< endl; 

        }
    // numerator larger than denominator not negative
    } else if(numerator > denominator){ 
        int rem = 0; 
        int placeHolder =0;
        rem = numerator % denominator;
        placeHolder = numerator / denominator;
        cout << placeHolder << " " << rem << "/" << denominator<< endl; 
    // regular fraction
    }else {
        cout << numerator<< "/" << denominator << endl; 
    }

    }

// ask user if they want to continue
        cout << " please press 0 to exit or 1 to continue \n";
        cin >> option;
    if(option == 0){
        exit =0;
        // break out of loop if user wants to quit
        break;
    }
    }
}