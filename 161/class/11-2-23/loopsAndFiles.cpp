#include <iostream>
#include <cstdlib> // rand()
using namespace std;

int main(){
    // initialize variables
    int n = 100; 
    int exit = 1;
    int guess = 0;

    // loop
    while (exit != 0){
        for (int i=3; i>0; i--)
        {
        // ensures rand number changes each time
        srand((unsigned)time(NULL));
        //
        int random = rand() % n;
        
        cout << "Guess a number 1-100: ";
        cout << "\n" << random << " <--- random";
        cin >> guess;
        if(guess == random){

            cout << "Winner" << random;
            break;
        }
        else if(i >2 ){
            cout << "try again, 2 guesses remaining \n";
        }
        else if(i >1 ){
            cout << "try again, last guess \n";
        }

        
        }
        cout << "\nWould you like to play again? 1 to continue or 0 to quit: ";
        cin >> exit;

    }

}