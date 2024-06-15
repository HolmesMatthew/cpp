#ifndef COINPOUCH_H
#define COINPOUCH_H

#include "dynamicArray.h"
#include "coin.h"

class CoinPouch {
private:
    DynamicArray<Coin*> coins;
    Coin* goldCoin;
    Coin* silverCoin;
    Coin* bronzeCoin;
    

public:
    // Constructor
    CoinPouch() {
    goldCoin = new Coin("Gold", 100.0);
    silverCoin = new Coin("Silver", 50.0);
    bronzeCoin = new Coin("Bronze", 25.0);
}

    int getBronzeCoin(int index, int quantity)  {
    if (index < 0 || index >= bronzeCoin->getQuantity()) {
        throw std::out_of_range("Index is out of bounds");
    }
    // Assuming you want to deduct quantity from the bronzeCoin and not from a coin at a specific index in coins array
    int newQuantity = bronzeCoin->getQuantity() - quantity;
    if (newQuantity < 0) {
        throw std::out_of_range("Not enough bronze coins");
    }
    bronzeCoin->setQuantity(newQuantity);
    return quantity;
}
    int getBronzeCoinAmount() const {
        return bronzeCoin->getQuantity();
    }

    // Add a coin to the collection
    void addBronzeCoin(int quantity) {
        int currentQuantity = bronzeCoin->getQuantity();
        bronzeCoin->setQuantity(currentQuantity+quantity);
    }
    void addSilverCoin(int quantity) {
        silverCoin->setQuantity(quantity);
    }
    void addGoldCoin(int quantity) {
        goldCoin->setQuantity(quantity);
    }
    // Remove a coin from the collection by index
    void removeBronzeCoin(int index, int quantity) {
        if (index < 0 || index >= bronzeCoin->getQuantity()) {
            throw std::out_of_range("Index is out of bounds");
        }
        // Assuming you want to deduct quantity from the bronzeCoin and not from a coin at a specific index in coins array
        int newQuantity = bronzeCoin->getQuantity() - quantity;
        if (newQuantity < 0) {
            throw std::out_of_range("Not enough bronze coins");
        }
        bronzeCoin->setQuantity(newQuantity);
    }

    // Get the size of the collection
    // int getSize() const {
    //     return coins.getSize();
    // }
};

#endif