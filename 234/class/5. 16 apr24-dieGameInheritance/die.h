#pragma once
#ifndef DIE_H
#define DIE_H
#include <iostream>
#include <cstdlib> 
#include <ctime>  

class Die {
private:
  int sides;
  int value;
public:
    Die();
  int roll() {
    srand(static_cast<unsigned int>(time(0)));
    return (rand() % sides) + 1;
  }

    void rollDie();
    int getSides();
    int getValue();

};



#endif