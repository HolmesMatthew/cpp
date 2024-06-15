#ifndef COIN_H
#define COIN_H

#include <string>
using std::string;

class Coin {
protected:
    string type;
    double value;
    int quantity;

public:
    // Constructors
    Coin(){
        type = "";
        value = 0.0;
        quantity = 0;
    }
    Coin(string type, double value) {
         this->type = type; 
         this->value = value;
    }

    // Getters
    string getType() const { 
        return type; 
        }
    double getValue() const {
         return value; 
         }
    int getQuantity() const {
            return quantity; 
            }

    // Setters
    void setType(const string& newType) { type = newType; }
    void setValue(double newValue) { value = newValue; }
    void setQuantity(int newQuantity) { quantity = newQuantity; }
};

#endif