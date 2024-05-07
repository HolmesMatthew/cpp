#include "media.h"
#include <iostream>
using std::cout;
using std::cin;


string Media::getName(){
    return name;
}

float Media::getLength(){
    return length;
}
string Media::getGenre(){
    return genre;
}
float Media::getCost(){
    return cost;
}
void Media::setCost(float c){
    cost = c;
}
