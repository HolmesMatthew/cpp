#include "dealer.h"
#include "die.h"
#include "die.cpp"
#include <string>



using std::string;

//CTOR
Dealer::Dealer(){
    die1Val = 0;
    die2Val = 0;
}

void Dealer::rollDice(){
    die1.rollDie();
    die2.rollDie();

    die1Val = die1.getValue();
    die2Val = die2.getValue();
}

string Dealer::getChoOrHan(){
    string result;
    int sum = die1Val + die2Val;
    if (sum % 2 == 0)
    {
        result = "Cho (even)";
    }else{
        result = "Han (odd)";
    }
    return result;
}

int Dealer::getDie1Val(){
    return die1Val;
}

int Dealer::getDie2Val(){
    return die2Val;
}
