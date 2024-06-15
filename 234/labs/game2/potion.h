#pragma once
#ifndef POTION_H
#define POTION_H
#include <iostream>
#include <string>

using std::string;
class Potion{

    private:
        string name;
        string desc;
        string potency;
        double cost;

    public:
    // Declare the operator<< overload
    // friend std::ostream& operator<<(std::ostream& os, const Potion* potion);
    Potion();
    // CTOR
    Potion(string, string, string, double);
    // DTOR
    ~Potion();
    // CPY_CTOR
        Potion(const Potion &rhs);
    // OVERLOAD_CTR
        Potion& operator=(const Potion &rhs);

    

    // SETTER
        void setName(string n);
        void setDesc(string d);
        void setPotency(string p);
        void setCost(double c);
    // GETTER
        string getName()const;
        string getDesc() const;
        string getPotency() const;
        double getCost() const;
        Potion getBagItem(int index) const;
};


#endif
//