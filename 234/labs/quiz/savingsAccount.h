#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <iostream>

class SavingsAccount {
private:
    int dollars;
    int cents;

    void normalize();

public:
    // Default constructor
    SavingsAccount();

    // Parameterized constructor
    SavingsAccount(int d, int c);

    // Open account
    void openAccount();

    // Make a deposit
    void deposit(int d, int c);

    // Make a withdrawal
    void withdraw(int d, int c);

    // Show current balance
    void showBalance() const;
};

#endif // SAVINGSACCOUNT_H
