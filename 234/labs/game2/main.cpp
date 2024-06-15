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
#include "character.h"



using namespace std;

int main() {
    bool play = true;
    int temp;
    int tempSize;
    string tempArr[tempSize];
    int choice;
    Character player("Player");
    CoinPouch shopCoins;
    Potion availablePotions[] ={
        Potion("Health Potion", "Restores 50 HP", "50", 10.0),
        Potion("Mana Potion", "Restores 50 MP", "50", 10.0),
    };

        cout << "Welcome to the shop!" << endl;
    do
    {   
        cout << "\n1. Buy Health Potion $" << availablePotions[0].getCost() <<  endl;
        cout << "2. Sell Health Potion $" << availablePotions[0].getCost()*.75 <<  endl;
        cout << "3. View inventory" << endl;
        cout << "4. View Coin Purse" << endl;
        cout << "5. Add Bronze Coins" << endl;
        cout << "6. Exit" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            player.buyPotion(&availablePotions[0]);

            break;
        case 2:
        if (player.getBagElements() == 0)
        {
            cout << "No items in inventory" << endl;
        }else {
        
            player.sellPotion(0);
            break;
        }
        case 3:
            temp = 0;
            tempSize = player.getBagElements();
            if (player.getBagElements() == 0)
                {
                    cout << "No items in inventory" << endl;
                }else {
                    for (int i = 0; i < player.getBagElements(); i++)
                    {
                        temp++;
                        if (tempArr[i] != player.getPotion(i)->getName())
                        {
                            tempArr[i] = player.getPotion(i)->getName();
                        }
                    }
                    cout << "Inventory: " << endl;
                    cout << "----------------" << endl;
                    // Need to add additional functionality to display the quantity of each item
                    cout << temp << ". " << tempArr[0] << endl;
                    
                }
            
            break;
        case 4:
            cout << "Bronze Coins: " << player.getBronzeCoinAmount() << endl;
            break;
        case 5:
            temp = 0;
            cout << "How many bronze coins would you like to add?" << endl;
            cin >> temp;
            player.addBronzeCoin(temp);
            break;
        case 6:
            play = false;
            break;
        
        default: 
            cout << "Invalid choice" << endl;
            break;
        }
    } while (play == true);




    // Character player("Player");
    //     CoinPouch shopCoins;
    //     int temp;
    //     Potion availablePotions[] ={
    //         Potion("Health Potion", "Restores 50 HP", "50", 10.0),
    //         Potion("Mana Potion", "Restores 50 MP", "50", 10.0),
    //     };
    // player.addPotion(&availablePotions[0]);
    
    // cout << player.getPotion(0)->getName() << endl;
    // cout << player.getPotion(0)->getDesc() << endl;
    
    // player.addBronzeCoin(10);
    
    // cout << player.getBronzeCoinAmount() << endl;
    
    // temp = player.getBronzeCoin(0, 5);
    // shopCoins.addBronzeCoin(temp);

    // cout << player.getBronzeCoinAmount() << endl;
    // cout << "SHOP coins:" << shopCoins.getBronzeCoinAmount() << endl;
}