#pragma once
#ifndef POTION.H
#define POTION.H

#include <string>
using std::string;

class Potion {
    private:
        string name;
        string desc;
        string potency;
        string cost;

    public:
    // CTOR
        Potion(string, string, string, double);
    // DTOR
        ~Potion();
    // CPY_CTOR
        Potion(const Potion &rhs);
    // OVRLOAD_CTR
        Potion& operator=(const Potion &rhs);
    // MOVE_CTR



    // SETTER
        void setName(string n);
        void setDesc(string d);
        void setPotency(string p);
        void setCost(string c);
    // GETTER
        string getName();
        string getDesc();
        string getPotency();
        string getCost();


};

#endif

/*
+Potion();

+Potion(name : string, desc : string, cost : string, potency : string);

+~Potion();

+=(in : &rhs const Potion)Potion;

+Potion(const & copyPotion : Potion);

+SetName(name : string);
+GetName() : string;
+SetDesc(desc : string);
+GetDesc() : string;
+SetPotency(potency : string);
+GetPotency() : string;
+SetCost(cost : string);
+GetCost() : string;
*/