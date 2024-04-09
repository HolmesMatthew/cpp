#pragma once
#ifndef AUXIL_H
#define AUXIL_H

class Budget; //forward declaration of "friend" BUdget class

class Auxil {
    private:
        double auxBudget;
    public:
        Auxil(){
            auxBudget =0;
        }
        double getDivisionBudget() const{
            return auxBudget;
        }
        void addBudget(double, Budget&);
};
#endif