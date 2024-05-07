#include "character.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Character::Character(string n,float h,float stam,float m,float str ){
    name = n;
    health = h;
    stamina = stam;
    mana = m;
    strength = str;
}
        
// mutator(s)

    // useable stat(mana,stamina,health)
void Character::useMana(float amt){
    mana -= amt;
}
void Character::useStamina(float amt){
    stamina -= amt;
}
void Character::takeDamage(float amt){
    health -= amt;
}

    // potion restore
float Character::healthRestore(){

}
float Character::manaRestore(){

}
float Character::staminaRestore(){

}

    // natural restore
float Character::healthRest(){
    // make counter; increases every second
    // increases health .xxx per second
}
float Character::manaRest(){

}
float Character::staminaRest(){

}

    // buff
float Character::buffHealth(float amt){
    // increases natural restore
}
float Character::buffStamina(float amt){

}
float Character::buffMana(float amt){

}
float Character::buffStrength(float amt){

}

    // negBuff
float Character::negBuffHealth(float amt){

}
float Character::negBuffStamina(float amt){

}
float Character::negBuffMana(float amt){

}
float Character::negBuffStrength(float amt){

}
