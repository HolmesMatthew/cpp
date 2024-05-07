#pragma once
#ifndef BANK_H
#define BANK_H

#include <string>
using std::string;

class Account {
    private:
        string memName;
        int memNum;
        double accountFunds;
        string dateDeposit;
    public:




};

#endif
/*

savings account - holds funds, can withdraw and deposit
checking account - holds funds, can withdraw and deposit
money market account - holds funds, can withdraw and deposit
deposit - insert funds into account
withdraw - remove funds from account
earn interest - add funds based on time in account*/