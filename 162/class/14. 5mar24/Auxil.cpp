#include "Auxil.h"
#include "Budget.h"

void Auxil::addBudget(double b, Budget& div){
    auxBudget += b;
    div.corpBudget += b;
    
}