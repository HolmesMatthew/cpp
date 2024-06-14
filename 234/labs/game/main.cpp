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


using namespace std;
#include "character.h"
#include "potion.h"
#include "coin.h"
#include <iostream>

int main() {
    // Create a character
    Character character("John");

    // Create some potions
    Potion* HealthPotion= new Potion("Health Potion", "Restores 50 HP", "50", 10.0);
    // Potion* potion1 = new HealthPotion("Health Potion", "Restores 50 HP", "50", 10.0);
    // Potion* potion2 = new ManaPotion("Mana Potion", "Restores 50 MP", "50", 15.0);

    // Add potions to the character's bag

    character.addItem(HealthPotion);
    if (!character.getBag().isEmpty()) {
    Potion* bagItem = character.getBag().getItem(0);
    if (bagItem != nullptr) {
            // Use bagItem as needed
        cout << "Got a potion from the bag." << endl;
    } else {
        cout << "Failed to retrieve potion from the bag." << endl;
    }
    } else {
        cout << "The bag is empty." << endl;
    }


    // cout << "Bag item 1: " << character.getBag().getItem(0) << endl;
    // Display the items in the character's bag

    cout << "Character's name: " << character.getName() << endl;




}