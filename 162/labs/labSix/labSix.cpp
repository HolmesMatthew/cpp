#include <iostream>
// #include "init.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----


double dieProb = 16.7;


} // ----- End main -----


/* ---------- notes ----------
The probability of rolling the same value on each die – while the chance of getting a particular value on a single die is p, we only need to multiply this probability by itself as many times as the number of dice. In other words, the probability P equals p to the power n, or P = pn = (1/s)n
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 



/*
For this assignment, you will write a program that simulates a fishing game. 
In this game, a six-sided die is rolled to determine what the user has caught. 
Each possible item is worth a certain number of fishing points. 
The points will not be displayed until the user has finished fishing, 
then a message is display congratulating the user depending on the number of fishing points gained. 

Here are some suggestions for the game's design:
Each round of the game is performed as an iteration of a loop that repeats as long as 
the player wants to fish for more items. At the beginning of each round, the program 
will ask the user whether they want to continue fishing. The program simulates the rolling 
of a six-sided die (use Die class that was demonstrated in chapter 13). Each item that can be 
caught is represented by a number generated from the die. 
For example, 1 for "huge fish", 2 for "old shoe", 3 for "little fish" etc. Each item the user 
catches is worth a different amount of points. The loop keeps a running total of the user's fishing points. 
After the loop has finished, the total number of fishing points is displayed, 
along with a message that varies depending on the number of points earned.
*/