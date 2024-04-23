#include <iostream>
#include "bank.h"
#include "bank.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 
{ // ----- Start main -----



} // ----- End main -----


/* ---------- notes ----------
The bank offers the following types of accounts to its customers:
savings account(n), checking account(n) and money market accounts(n)
customers are allowed to deposit(v) money into an account (thereby increasing its balance),
withdraw(v) from an account (decreasing its balance) and earn interest(v) on the account
(Each account has an interest rate)

Assume you are writing an application that will calculate the amount of interest earned for a bank account
1.) Identify the potential classes in this problem domain
2.) Refine the list to include only the necessary class or classes for the problem
3.) Identify the responsibility of the class or classes

nouns = classes || data members
verbs = methods/member function
- = private 
+ = public
nouns
-----
savings account - holds funds, can withdraw and deposit
checking account - holds funds, can withdraw and deposit
money market account - holds funds, can withdraw and deposit

verbs
-----
deposit - insert funds into account
withdraw - remove funds from account
earn interest - add funds based on time in account

-------- end notes -------- */ 