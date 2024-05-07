#pragma once
#ifndef CHARACTER.H
#define CHARACTER.H

#include <string>
using std::string;

class Character {
    private:
        string name; // R
        float health; // R
        float stamina; // R
        float mana; // R
        float strength; // R
        float luck; 
        float intelligence;
        float perception;
        float dexterity;
    public:
        // CTOR : name,health,stamina,mana,strength
        Character(string,float,float,float,float);
        
        // mutator(s)
            // useable stat(mana,stamina,health)
        void useMana(float);
        void useStamina(float);
        void takeDamage(float);
            // potion restore
        float healthRestore();
        float manaRestore();
        float staminaRestore();
            // natural restore
        float healthRest();
        float manaRest();
        float staminaRest();
            // buff
        float buffHealth(float);
        float buffStamina(float);
        float buffMana(float);
        float buffStrength(float);
            // negBuff
        float negBuffHealth(float);
        float negBuffStamina(float);
        float negBuffMana(float);
        float negBuffStrength(float);
};

#endif