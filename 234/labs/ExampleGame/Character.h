#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "String.h"
#include "CoinPouch.h"
#include "BackPack.h"

class Character
{
public:

	/***** Manager Functions *****/

	// Default constructor
	Character() : m_name(), m_coin_pouch(), m_back_pack()
	{}

	// Constructor with arguments for each data member
	Character(string name, CoinPouch coin_pouch, BackPack back_pack) : m_name(name), m_coin_pouch(coin_pouch), m_back_pack(back_pack)
	{}

	// Copy constructor
	Character(const Character& other_character) : m_name(other_character.m_name), m_coin_pouch(other_character.m_coin_pouch), m_back_pack(other_character.m_back_pack)
	{}

	// Destructor
	~Character()
	{}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	Character operator = (const Character& other_character)
	{
		if (this != &other_character)
		{
			m_name = other_character.m_name;
			m_coin_pouch = other_character.m_coin_pouch;
			m_back_pack = other_character.m_back_pack;
		}

		return *this;
	}

	/***** Member Functions *****/

	// Returns name of this Character
	String getName()
	{
		return m_name;
	}

	// Returns CoinPouch of this Character
	CoinPouch getCoinPouch()
	{
		return m_coin_pouch;
	}

	// Returns BackPack of this Character
	BackPack getBackPack()
	{
		return m_back_pack;
	}

	// Sets name of this character to "name"
	void setName(string name)
	{
		m_name = name;
	}

	// Sets CoinPouch of this Character to "coin_pouch"
	void setCoinPouch(CoinPouch coin_pouch)
	{
		m_coin_pouch = coin_pouch;
	}

	// Sets BackPack of this Character to "back_pack"
	void setBackPack(BackPack back_pack)
	{
		m_back_pack = back_pack;
	}

	// Returns formatted string of this Character
	string getString(bool abbrev = true)
	{
		string formatted = "";

		if (abbrev)
			formatted = m_name.native() + ", " + m_coin_pouch.getString() + ", " + m_back_pack.getString();
		else
			formatted = "Name: " + m_name.native() + "\n"
				+ "Coin Pouch: " + m_coin_pouch.getString(false) + "\n"
				+ "Back Pack: " + m_back_pack.getString(false);

		return formatted;
	}

private:

	/***** Data Members *****/

	// Object of class String holding name of this Character
	String m_name;

	// Object of class CoinPouch holding coins/money for this Character
	CoinPouch m_coin_pouch;
	
	// Object of class BackPack holding potions for this Character
	BackPack m_back_pack;

};