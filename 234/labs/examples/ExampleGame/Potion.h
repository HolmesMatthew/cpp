#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "String.h"
#include "Money.h"
#include "Potency.h"

class Potion
{
public:

	/***** Manager Functions *****/

	// Default constructor
	Potion() : m_name(), m_descr(), m_potency(), m_cost()
	{}

	// Constructor with arguments for each data member
	Potion(string name, string descr, Potency potency, Money cost) : m_name(name), m_descr(descr), m_potency(potency), m_cost(cost)
	{}

	// Copy constructor
	Potion(const Potion& other_potion) : m_name(other_potion.getName()), m_descr(other_potion.getDescr()), m_potency(other_potion.getPotency()), m_cost(other_potion.getCost())
	{}

	// Destructor
	~Potion()
	{}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	Potion operator = (const Potion& other_potion)
	{
		if (this != &other_potion)
		{
			m_name = other_potion.m_name;
			m_descr = other_potion.m_descr;
			m_potency = other_potion.m_potency;
			m_cost = other_potion.m_cost;
		}

		return *this;
	}

	// Equality operator
	bool operator == (const Potion& other_potion) const
	{
		return (m_name == other_potion.m_name) && (m_descr == other_potion.m_descr)
			&& (m_potency == other_potion.m_potency) && (m_cost == other_potion.m_cost);
	}

	/***** Member Functions *****/

	// Sets name of this Potion to "name"
	void setName(string name)
	{
		m_name = name;
	}

	// Sets description of this Potion to "descr"
	void setDescr(string descr)
	{
		m_descr = descr;
	}

	// Sets potency of this Potion to "potency"
	void setPotency(Potency potency)
	{
		m_potency = potency;
	}

	// Sets cost of this Potion to "cost"
	void setCost(Money cost)
	{
		m_cost = cost;
	}

	// Returns name of this Potion
	String getName() const
	{
		return m_name;
	}

	// Returns description of this Potion
	String getDescr() const
	{
		return m_descr;
	}

	// Returns potency of this Potion
	Potency getPotency() const
	{
		return m_potency;
	}

	// Returns cost of this Potion
	Money getCost() const
	{
		return m_cost;
	}

	// Returns formatted string of this Potion
	string getString(bool abbrev = true)
	{
		string formatted = "";

		if (abbrev)
			formatted = m_name.native() + ", " + m_descr.native() + ", " + m_potency.getString(true) + ", " + m_cost.getString(true);
		else
			formatted = "Name: " + m_name.native() + "\n"
			+ "Description: " + m_descr.native() + "\n"
			+ "Potency: " + m_potency.getString(false) + "\n"
			+ "Cost: " + m_cost.getString(false);

		return formatted;
	}

private:

	/***** Data Members *****/

	// Object of class String storing name of this Potion
	String m_name;

	// Object of class String storing description of this Potion
	String m_descr;

	// Object of class Potency storing potency of this Potion
	Potency m_potency;

	// Object of class Money storing cost of this Potion
	Money m_cost;

};