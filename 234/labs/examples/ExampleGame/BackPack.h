#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "DynamicArray.h"
#include "Potion.h"

class BackPack
{
public:

	/***** Manager Functions *****/

	// Default constructor
	BackPack() : m_potions()
	{}

	// Constructor with DynamicArray<Potion> parameter
	BackPack(DynamicArray<Potion> potions) : m_potions(potions)
	{}

	// Copy constructor
	BackPack(const BackPack& other_back_pack) : m_potions(other_back_pack.m_potions)
	{}

	// Destructor
	~BackPack()
	{
		m_potions.empty();
	}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	BackPack operator = (const BackPack& other_back_pack)
	{
		if (this != &other_back_pack)
			m_potions = other_back_pack.m_potions;

		return *this;
	}

	/***** Member Functions *****/

	// Returns number of Potions in this BackPack
	int numPotions()
	{
		return m_potions.length();
	}

	// Returns (by value) Potion at index "index" in this BackPack
	Potion getPotion(int index)
	{
		return m_potions.getElem(index);
	}

	// Returns index of Potion "search_potion" in this BackPack
	int findPotion(Potion search_potion)
	{
		return m_potions.find(search_potion);
	}

	// Adds Potion "new_potion" at index "index" to this BackPack
	void addPotion(Potion new_potion, int index = 0)
	{
		m_potions.insert(new_potion, index);
	}

	// Removes Potion at index "index" from this BackPack
	void remPotion(int index)
	{
		m_potions.remove(index);
	}

	// Removes Potion "trash_potion" from this BackPack
	void remPotion(Potion trash_potion, bool all = false)
	{
		m_potions.findAndRemove(trash_potion, all);
	}

	// Empties this BackPack of all Potions
	void empty()
	{
		m_potions.empty();
	}

	// Returns formatted string of this BackPack
	string getString(bool abbrev = true)
	{
		string formatted = "";

		if (m_potions.length() == 0)
		{
			formatted = "{}";
		}
		else
		{
			formatted = "{";
			if (abbrev)
			{
				for (int i = 0; i < m_potions.length() - 1; ++i)
					formatted += m_potions.getElem(i).getName().native() + ", ";
				formatted += m_potions.getElem(m_potions.length() - 1).getName().native() + "}";
			}
			else
			{
				for (int i = 0; i < m_potions.length() - 1; ++i)
					formatted += "(" + m_potions.getElem(i).getString() + ")" + ", ";
				formatted += "(" + m_potions.getElem(m_potions.length() - 1).getString() + ")" + "}";
			}
		}

		return formatted;
	}

private:

	/***** Data Members *****/

	// Object of class DynamicArray holding Potions in this BackPack
	DynamicArray<Potion> m_potions;

};