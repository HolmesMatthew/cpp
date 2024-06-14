#include "savingsAccount.h"
#include "savingsAccount.cpp"
#include <iostream>

void performTransactions(SavingsAccount& account);

int main() {
    // Create an object called bank1 with initial values set by the user
    SavingsAccount bank1(200, 50);

    // Create an object called bank2 using the default constructor
    SavingsAccount bank2;

    // Perform transactions for bank1
    std::cout << "Performing transactions for bank1:" << std::endl;
    performTransactions(bank1);
    bank1.showBalance();
    
    //open account for bank2
    bank2.openAccount();
    // Perform transactions for bank2
    std::cout << "\nPerforming transactions for bank2:" << std::endl;
    performTransactions(bank2);
    bank2.showBalance();

    return 0;
}

void performTransactions(SavingsAccount& account) {
    char choice;
    int dollars, cents;

    std::cout << "Would you like to make a deposit? Y or y for yes: ";
    std::cin >> choice;
    while (choice == 'Y' || choice == 'y') {
        std::cout << "Please input the dollars to be deposited: ";
        std::cin >> dollars;
        std::cout << "Please input the cents to be deposited: ";
        std::cin >> cents;
        account.deposit(dollars, cents);
        std::cout << "Would you like to make another deposit? Y or y for yes: ";
        std::cin >> choice;
    }

    std::cout << "Would you like to make a withdrawal? Y or y for yes: ";
    std::cin >> choice;
    while (choice == 'Y' || choice == 'y') {
        std::cout << "Please input the dollars to be withdrawn: ";
        std::cin >> dollars;
        std::cout << "Please input the cents to be withdrawn: ";
        std::cin >> cents;
        account.withdraw(dollars, cents);
        std::cout << "Would you like to make another withdrawal? Y or y for yes: ";
        std::cin >> choice;
    }
}
