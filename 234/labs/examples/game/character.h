#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include "dynamicArray.h"
#include "potion.h"
#include "coin.h"

#include <string>
using std::string;

class Character {
    private:
        string name;
        DynamicArray<Potion*> bag;
        
    public:
          // Constructor
        Character(string name) : name(name) {
            // Initialize coinPouch with 0 coins of any type

        }

        // Destructor
        ~Character() {
        for (int i = bag.getSize() - 1; i >= 0; i--) {
            bag.removeItem(i);
        }
        }

        // Method to add a Items to the bag
        void addItem(Potion* potion) {
            bag.addItem(potion);
        }


        // Method to remove a Potion from the bag by index
        void removeItemFromBag(int index) {
            bag.removeItem(index);
        }




        // Getter methods
        string getName() const {
            return name;
        }
        Potion* getBagItem(int index) const {
            return bag.getItem(index);
        }
        DynamicArray<Potion*> getBag() const {
            return bag;
        }

};

#endif