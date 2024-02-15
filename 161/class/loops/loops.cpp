#include <iostream>
#include <iomanip>
using namespace std;

int main(){
        
    int userChoice = 0; // global variable

// ------ do while loop "post-test loop" ------
    /*
    do { 

        cout << "Choose from the following: \n"
        <<"Option 1: Multiply 2 x 2 \n"
        << "Option 2: Add 2 + 2 \n" 
        << "Option 3: exit \n " ;
        cin >> userChoice;

    if (userChoice == 1)
    {
        cout << "2*2= " << 2*2 << endl;
    }else if (userChoice == 2)
    {
        cout << "2+2= " << 2+2 << endl;
    }else if (userChoice > 3 || userChoice < 1){ // userChoice greater than 3 or less than 1
        cout << "You have not entered a valid choice";
    }
    }while(userChoice != 3);
    */


// ------ while loop ------
/*
    while (userChoice != 3)
    {
        cout << "Choose from the following: \n"
        <<"Option 1: Multiply 2 x 2 \n"
        << "Option 2: Add 2 + 2 \n" 
        << "Option 3: exit \n " ;
        cin >> userChoice;

    if (userChoice == 1)
    {
        cout << "2*2= " << 2*2 << endl;
    }else if (userChoice == 2)
    {
        cout << "2+2= " << 2+2 << endl;
    }else if (userChoice > 3 || userChoice < 1){ // userChoice greater than 3 or less than 1
        cout << "You have not entered a valid choice";
    }
    }
*/

cout << "Guess a number between 1 and 10 " << endl;
cin >> userChoice;

// while (userChoice != 4)
// {
//     cout << "That is not the right number, Guess again! " << endl;
//     cin >> userChoice;
// }


// ------ for loop ------

for (int i=0; i <=1; i++){
    int magicNumber =4 ;
    if (userChoice == magicNumber)
    {
        cout << "You win " << i << " <--- guesses";
    }
    else if (i+1 < 2) {
        cout << "Guess again, only " << 3-(i+1) << " guesses remaining \n";
        cin >> userChoice;
    } 
    else if (i+1 <1) {
        cout << "Guess again, just" << 3-(i+1) << " guess remaining \n";
        cin >> userChoice;

    }
    else  {
        cout << "LAST GUESS"  << " \n";
        cin >> userChoice;
        if (userChoice == magicNumber)
        {
            cout << "Very lucky guess";
        }else{
            cout << "Wrong. Game over \n";
        }
        

    }
    
}






} // end main
