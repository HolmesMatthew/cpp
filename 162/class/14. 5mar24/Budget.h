#pragma once
#ifndef BUDGET_H
#define BUDGET_H

#include <string>
#include "Auxil.h"
using std::string;

class Budget {
    private:
    // shared across all via static member
        static double corpBudget; // Static Member
    // each has a individual division budget 
        double divisionBudget;

    public:
        Budget(){
            divisionBudget = 0;
        }
        void addBudget(double b){
            divisionBudget += b;
            corpBudget += b;
        }
        double getDivisionBudget() const{
            return divisionBudget;
        }
        double getCorpBudget() const{
            return corpBudget;
        }
        static void mainOffice(double);

        friend void Auxil::addBudget(double, Budget&);
};

// define static member
double Budget::corpBudget =0;


#endif