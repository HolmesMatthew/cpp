
#include <cstdlib>
#include <ctime>
#include "die.h"
using namespace std;

Die::Die(){
    unsigned seed = time(0);
    srand(seed);
    sides = 6;
    roll();
}

void Die::rollDie(){
    const int MIN_VALUE = 1;
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}
int Die::getSides(){
    return sides;
}
int Die::getValue(){
    return value;
}