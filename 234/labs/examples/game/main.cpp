#include <iostream>
// #include "init.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating

#include "dynamicArray.h"
#include "dynamicArray.cpp"
#include "potion.h"
#include "potion.cpp"
#include "coin.h"
#include "character.h"

using namespace std;


int main() {
    // Create a character
    Character character("John");
    bool go = true;
    while (go == true){
    char goAgain;


    // Create some potions
    Potion* HealthPotion= new Potion("Health Potion", "Restores 50 HP", "50", 10.0);
    // Potion HealthPotion("Health Potion", "Restores 50 HP", "50", 10.0);
    // Potion* potion1 = new HealthPotion("Health Potion", "Restores 50 HP", "50", 10.0);
    // Potion* potion2 = new ManaPotion("Mana Potion", "Restores 50 MP", "50", 15.0);

    // Add potions to the character's bag

    character.addItem(HealthPotion);


    Potion* bagItem = character.getBag().getItem(0);

    cout << bagItem->getName();


    cout << "Bag item 1: " << character.getBagItem(0) << endl;
    // Display the items in the character's bag

    cout << "Character's name: " << character.getName() << endl;
    cout << "go again? (y/n): ";
    cin >> goAgain;
    if (goAgain == 'n'){
        go = false;
    }
}
    character.~Character();
}