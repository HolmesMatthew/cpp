#pragma once
#ifndef CHARACTER_H
#define CHARACTER_H

#include "dynamicArray.h"
#include "potion.h"
#include "coinPouch.h"

#include <string>
using std::string;

class Character {
    private:
        string name;
        DynamicArray<Potion*> bag;
        CoinPouch coinPouch;
        
    public:
          // Constructor
        Character(string name) : name(name) {
            this->name= name;
        }

        // Destructor
        ~Character() {
        // for (int i = bag.getSize() - 1; i >= 0; i--) {
        //     bag.removeItem(i);
        // }
        }

// GETTERS
        // Method to get a potion from the bag
        Potion* getPotion(int index) const {
            return bag.getItem(index);
        }
        string getName() const {
            return name;
        }
        int getBronzeCoinAmount() const {
            return coinPouch.getBronzeCoinAmount();
        }
        int getBagElements() {
            return bag.getElements();
        }
                
// SETTERS

// MUTATORS

    // POTIONS
        void buyPotion(Potion* potion){
            int potionCost = potion->getCost();
            int bronzeCoinAmount = getBronzeCoinAmount();
            if (bronzeCoinAmount >= potionCost) {
                addPotion(potion);
                coinPouch.removeBronzeCoin(0, potionCost);
                std::cout << "Potion bought" << std::endl;
            }else{
                std::cout << "Not enough coins to buy potion" << std::endl;
            }
        }
        void sellPotion(int index){

            Potion* potion = getPotion(index);
            int potionCost = potion->getCost();
            addBronzeCoin(potionCost*.75);
            removePotion(index);
            std::cout << "Potion sold" << std::endl;
        }
        void addPotion(Potion* potion){
            bag.addItem(potion);
        }
        void removePotion(int index){
            bag.removeItem(index);
        }

    // COINS    
        // ADD COIN
        void addBronzeCoin(int quantity){
            coinPouch.addBronzeCoin(quantity);
        }
        void addSilverCoin(int quantity){
            coinPouch.addSilverCoin(quantity);
        }
        void addGoldCoin(int quantity){
            coinPouch.addGoldCoin(quantity);
        }   
        // GET COIN
        int getBronzeCoin(int index, int quantity){
            return coinPouch.getBronzeCoin(index, quantity);
        }
        // REMOVE COIN 
        void removeBronzeCoin(int index, int quantity){
            coinPouch.removeBronzeCoin(index, quantity);
        }

};
#endif