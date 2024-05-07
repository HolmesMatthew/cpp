#pragma once
#ifndef DEALER_H
#define DEALER_H

#include <string>
#include "die.h"

using std::string;

class Dealer {
    private:
        Die die1;
        Die die2;
        int die1Val;
        int die2Val;

    public:
        Dealer();
        void rollDice();
        string getChoOrHan();
        int getDie1Val();
        int getDie2Val();


};

#endif