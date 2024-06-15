#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Money.h"

class CoinPouch
{
public:

	// Public error code
	int NEGATIVE_COINS = 1;

	/***** Manager Functions *****/

	// Default constructor
	CoinPouch() : m_coins()
	{}

	// Constructor with Money parameter
	CoinPouch(Money coins) : m_coins()
	{
		if (coins.getTotal() >= 0)
			m_coins = coins;
		else
			throw NEGATIVE_COINS;
	}
	
	// Copy Constructor
	CoinPouch(const CoinPouch& other_coin_pouch) : m_coins(other_coin_pouch.m_coins)
	{}

	// Destructor
	~CoinPouch()
	{}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	CoinPouch operator = (const CoinPouch& other_coin_pouch)
	{
		if (this != &other_coin_pouch)
			m_coins = other_coin_pouch.m_coins;
		
		return *this;
	}

	/***** Member Functions *****/

	// Returns m_coins by value
	Money getCoins() const
	{
		return m_coins;
	}

	// Adds Money "add_coins" to this CoinPouch
	void addCoins(Money new_coins)
	{
		if (new_coins.getTotal() < -(m_coins.getTotal()))
			throw NEGATIVE_COINS;
		else
			m_coins = m_coins + new_coins;
	}

	// Subtracts Money "sub_coins" from this CoinPouch
	void remCoins(Money trash_coins)
	{
		if (trash_coins.getTotal() > m_coins.getTotal())
			throw NEGATIVE_COINS;
		else
			m_coins = m_coins - trash_coins;
	}

	// Returns formatted string of this CoinPouch
	string getString(bool abbrev = true)
	{
		return "{" + m_coins.getString(abbrev) + "}";
	}

private:

	/***** Data Members *****/

	// Object of class Money storing total coins in this CoinPouch
	Money m_coins;

};