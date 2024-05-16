#include "potion.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


// CTOR
Potion::Potion(string name, string desc, string potency, double cost){
    name = "";
    desc = "";
    potency = "";
    cost = 0;
}
    
    // CPY_CTOR
Potion::Potion(const Potion &rhs){
    if (this != &rhs)
    {
        /* code */
    }
    
}
    // OVRLOAD_CTR
Potion& Potion::operator=(const Potion &rhs){

}
    // MOVE_CTR

/* ~ add me ~ */

    // DTOR
Potion::~Potion(){

        }
        
    // SETTER
void Potion::setName(string n){
    name = n;
}
void Potion::setDesc(string d){
    desc = d;
}
void Potion::setPotency(string p){
    potency = p;
}
void Potion::setCost(string c){
    cost = c;
}
    // GETTER
string Potion::getName(){
    return name;
}
string Potion::getDesc(){
    return desc;
}
string Potion::getPotency(){
    return potency;
}
string Potion::getCost(){
    return cost;
}