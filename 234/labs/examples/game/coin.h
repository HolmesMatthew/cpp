#pragma once
#ifndef COIN_H
#define COIN_H



#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;



class Coin {
private:
    string type;
    double value;
    double quantity;

public:

    Coin() : type(""), value(0.0) {} // Default constructor
    Coin(string type, double value) : type(type), value(value) {} // Existing constructor

    double getValue() const { 
        return value; 
    }

    double getQuantity() const { 
        return quantity; 
    }

    void addQuantity(double amount) {
        quantity += amount;
    }

    double takeQuantity(double amount) {
        if (quantity >= amount) {
            quantity -= amount;
            return amount;
        } else {
            std::cout << "Not enough quantity to take" << std::endl;
            return 0;
        }
    }


};

#endif
// 