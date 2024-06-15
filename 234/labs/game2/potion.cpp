#include "potion.h"

#include <string>

using std::string;



    // CTOR
Potion::Potion(string name, string desc, string potency, double cost)
{
    this->name = name;
    this->desc = desc;
    this->potency = potency;
    this->cost = cost;
}
    // CPY_CTOR
Potion::Potion(const Potion &rhs){
    name = rhs.name;
    desc = rhs.desc;
    potency = rhs.potency;
    cost = rhs.cost;

}

    // OVRLOAD_CTR
Potion& Potion::operator=(const Potion &rhs){
    if (this != &rhs) {
        name = rhs.name;
        desc = rhs.desc;
        potency = rhs.potency;
        cost = rhs.cost;
    }
    return *this;
}
    // MOVE_CTR

/* ~ add me ~ */

    // DTOR
Potion::~Potion(){

        }
// Define the operator<< overload
// std::ostream& operator<<(std::ostream& os, const Potion& potion) {

//         os << "Potion Name: " << potion.getName() << ", Potency: " << potion.getPotency();
//     return os;
// }

    // SETTER
void Potion::setName(string n){
    name = n;
}
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


