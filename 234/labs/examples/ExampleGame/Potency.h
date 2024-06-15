#pragma once

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Potency
{
public:

	/***** Manager Functions *****/

	// Default constructor
	Potency() : m_amount(1.0)
	{}

	// Constructor that sets amount to double "amount"
	Potency(double amount) : m_amount(0.0)
	{
		setAmount(amount);
	}

	// Constructor that sets amount to formatted string "formatted"
	Potency(string formatted) : m_amount(0.0)
	{
		setAmount(formatted);
	}

	// Copy constructor
	Potency(const Potency& other_potency) : m_amount(0.0)
	{
		setAmount(other_potency.getAmount());
	}

	// Destructor
	~Potency()
	{}

	/***** Overloaded Operators *****/

	// Copy assignment operator
	Potency operator = (const Potency& other_potency)
	{
		if (this != &other_potency)
			setAmount(other_potency.getAmount());

		return *this;
	}

	// Multiplication operator
	Potency operator * (const Potency& other_potency) const
	{
		Potency prod_potency(m_amount * other_potency.getAmount());

		return prod_potency;
	}

	// Scalar multiplication operator
	Potency operator * (const double multiplier) const
	{
		Potency prod_potency(m_amount * multiplier);

		return prod_potency;
	}

	// Scalar division operator
	Potency operator / (const double divisor) const
	{
		Potency quot_potency(m_amount / divisor);

		return quot_potency;
	}

	// Equality operator
	bool operator == (const Potency& other_potency) const
	{
		return m_amount == other_potency.m_amount;
	}

	/***** Member Functions *****/

	// Sets amount of this Potency to "amount"
	void setAmount(double amount)
	{
		if (amount < 0.0)
		{
			m_amount = 0.0;
			throw 1;
		}
		else
		{
			m_amount = round(amount * 100.0) / 100.0;
		}
	}

	// Sets amount of this Potency provided some formatted string "formatted"
	void setAmount(string formatted)
	{
		double amount;
		int perc = formatted.find('%');

		try
		{
			amount = stod(formatted.substr(0, perc)) / 100.0;
		}
		catch (...)
		{
			throw 2;
		}

		try
		{
			setAmount(amount);
		}
		catch (int e)
		{
			throw e;
		}
	}

	// Returns amount of this Potency as double
	double getAmount() const
	{
		return m_amount;
	}

	// Returns formatted string of this Potency
	string getString(bool abbrev = true) const
	{
		string formatted = "";
		int percent = round(m_amount * 100);

		if (abbrev)
			formatted = to_string(percent) + "%";
		else
			formatted = "multiply by " + to_string(percent) + "% (same as " + (percent > 100 ? "increasing" : "decreasing") + " by " + to_string(abs(percent - 100)) + "%)";

		return formatted;
	}

private:
	
	/***** Data Members *****/

	// Double storing amount of this Potency
	double m_amount;

};