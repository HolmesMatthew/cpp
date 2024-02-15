// Function to calculate and display the fraction
#include <iostream>
#include <iomanip>
using namespace std;

void calculateAndDisplayFraction(int numerator, int denominator) {
    // if negative
    if (numerator < 0 || denominator < 0 ){ 
        // if numerator is bigger than denominator
        if (numerator > denominator) {
            int rem = numerator % denominator;
            int placeHolder = numerator / denominator;
            cout << placeHolder << " " << rem << "/" << denominator;
        }
        // still negative but regular fraction
        else { 
            int rem = numerator % denominator;
            int placeHolder = numerator / denominator;
            cout << placeHolder << " " << rem << "/" << denominator;
        }
    }
    // numerator larger than denominator not negative
    else if(numerator > denominator){ 
        int rem = numerator % denominator;
        int placeHolder = numerator / denominator;
        cout << placeHolder << " " << rem << "/" << denominator;
    }
    // regular fraction
    else {
        cout << numerator << "/" << denominator; 
    }
};

int main() {
    // initialize variables
    int numerator = 0;
    int denominator = 0;

    cout << "Enter the numerator (whole numbers only) \n" ;
    cin >> numerator;
    cout << " \n Enter the denominator (whole numbers only) \n" ;
    cin >> denominator;

    if (denominator != 0) {
        calculateAndDisplayFraction(numerator, denominator);
    }
}