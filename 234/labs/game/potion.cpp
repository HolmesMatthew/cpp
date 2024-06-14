#include "potion.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;


// CTOR
Potion::Potion(string name, string desc, string potency, double cost) {
    this->name = name;
    this->desc = desc;
    this->potency = potency;
    this->cost = cost;
}
    
    // CPY_CTOR
Potion::Potion(const Potion &rhs) {
    this->name = rhs.name;
    this->desc = rhs.desc;
    this->potency = rhs.potency;
    this->cost = rhs.cost;
}
    // OVRLOAD_CTR
Potion& Potion::operator=(const Potion &rhs){
    if (this != &rhs) {
        this->name = rhs.name;
        this->desc = rhs.desc;
        this->potency = rhs.potency;
        this->cost = rhs.cost;
    }
    return *this;
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
//  overload of operator<<
// std::ostream& operator<<(std::ostream &os, const Potion &potion)
// {
//     os << "Potion Name: " << potion.getName() << "\n";
//     os << "Potion Description: " << potion.getDesc() << "\n";
//     os << "Potion Potency: " << potion.getPotency() << "\n";
//     os << "Potion Cost: " << potion.getCost() << "\n";
//     return os;
// }
void Potion::setDesc(string d)
{
    desc = d;
}
void Potion::setPotency(string p){
    potency = p;
}
void Potion::setCost(double c){
    cost = c;
}
    // GETTER
string Potion::getName() const{
    return name;
}
string Potion::getDesc()const{
    return desc;
}
string Potion::getPotency()const{
    return potency;
}
double Potion::getCost()const{
    return cost;
}