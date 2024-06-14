#include "savingsAccount.h"
#include <iostream>
using std::cout;
using std::cin;

// Default constructor
SavingsAccount::SavingsAccount() : dollars(0), cents(0) {}

// Parameterized constructor
SavingsAccount::SavingsAccount(int d, int c) : dollars(d), cents(c) {
    normalize();
}

// Normalize function to handle cents overflow
void SavingsAccount::normalize() {
    if (cents >= 100) {
        dollars += cents / 100;
        cents %= 100;
    } else if (cents < 0) {
        int dollar_decrement = (-cents / 100) + 1;
        dollars -= dollar_decrement;
        cents += dollar_decrement * 100;
    }
}

// Open account
void SavingsAccount::openAccount() {
    int d; 
    int c; 
    cout << "Please input the initial dollars: ";
    cin >> d;
    cout << "Please input the initial cents: ";
    cin >> c;
    dollars = d;
    cents = c;
    normalize();
}

// Make a deposit
void SavingsAccount::deposit(int d, int c) {
    dollars += d;
    cents += c;
    normalize();
}

// Make a withdrawal
void SavingsAccount::withdraw(int d, int c) {
    dollars -= d;
    cents -= c;
    normalize();
}

// Show current balance
void SavingsAccount::showBalance() const {
    std::cout << "Dollars = " << dollars << "     Cents = " << cents << std::endl;
}
