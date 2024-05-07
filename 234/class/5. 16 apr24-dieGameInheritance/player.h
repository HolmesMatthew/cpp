#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using std::string;

class Player {
    private:
        char* name; 
        string guess;
        int points;


    public:
        Player(char*); // CTOR - will always have a name passed in
        Player(const Player &obj); // CPY CTOR
        ~Player(); // DTOR
        Player& operator=(const Player &rhs); // overloaded = operator
        Player& operator=(Player&& rhs); // move assignment operator

        void makeGuess(); 
        void addPoints(int);
        string getName();
        string getGuess();
        int getPoints();

};

#endif