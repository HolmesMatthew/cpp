#include <iostream>
#include "player.h"
#include "player.cpp"
#include "dealer.h"
#include "dealer.cpp"
#include <string> 
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;

void roundResults(Dealer &, Player &, Player &);
void checkGuess(Player &, Dealer &);
void displayGrandWinner(Player, Player);


int main() 
{ // ----- Start main -----
    const int MAX_ROUNDS = 5;
    char* player1Name;
    char* player2Name;
    string dashes(50, '-');

    cout << "Enter the first player's name: ";
    cin >> player1Name;

    cout << "Enter the second player's name: ";
    cin >> player2Name;

    Dealer dealer;
    Player player1(player1Name);
    Player player2(player2Name);
    for (int round = 0; round < MAX_ROUNDS; round++)
    {
        cout << dashes << "\n";
        cout << "Now playing round: " << round+1 << endl;
        dealer.rollDice();
        player1.makeGuess();
        player2.makeGuess();

        roundResults(dealer, player1, player2);
    }
    
    displayGrandWinner(player1, player2);

    } // ----- End main -----

void roundResults(Dealer &dealer, Player &player1, Player &player2){
    cout << "The dealer rolled: " << dealer.getDie1Val() << " & " << dealer.getDie2Val() << endl;
    cout << "Result: " << dealer.getChoOrHan() << endl;
    checkGuess(player1, dealer);
    checkGuess(player2, dealer);
}   
void checkGuess(Player& player, Dealer& dealer){
    const int POINTS_TO_ADD = 1;
    string guess = player.getGuess();
    string choHanResult = dealer.getChoOrHan();

    cout << "The Player " << player.getName() << " guessed " << player.getGuess() << endl;

    if (guess == choHanResult)
    {
        player.addPoints(POINTS_TO_ADD);
        cout << "Awarding " << POINTS_TO_ADD << " point(s) to "<<  player.getName() << endl;
    }
    
}
void displayGrandWinner(Player player1, Player player2){
    cout << " - - - - - - - - - - - - - - - - - - - - - - - - - - - \n";
    cout << "Game over, Here are the results \n";
    cout << player1.getName() << ": " <<  player1.getPoints() << " points\n"; 
    cout << player2.getName() << ": " <<  player2.getPoints() << " points\n"; 

    if (player1.getPoints() < player2.getPoints())
    {
        cout << player2.getName() << " is the winner\n";
    }else if(player1.getPoints() > player2.getPoints()){
        cout << player1.getName() << " is the winner\n";
    }else{
        cout << "Players are tied\n";
    }
    
}


