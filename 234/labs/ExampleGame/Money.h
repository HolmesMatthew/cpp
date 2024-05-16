#pragma once

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Money
{
public:

	/***** Manager Functions *****/

	// Default constructor
	Money() : m_total(0)
	{}

	// Constructor that sets total to int "total"
	Money(int total) : m_total(0)
	{
		setTotal(total);
	}

	// Constructor that sets total to formatted string "formatted"
	Money(string formatted) : m_total(0)
	{
		setTotal(formatted);
	}

	// Copy constructor
	Money(const Money& other_money) : m_total(0)
	{
		setTotal(other_money.m_total);
	}

	//Destructor
	~Money()
	{}

	/***** Overloaded Operators *****/
	
	// Copy assignment operator
	Money operator = (const Money& other_money)
	{
		if (this != &other_money)
			setTotal(other_money.m_total);

		return *this;
	}

	// Addition operator
	Money operator + (const Money& other_money) const
	{
		Money sum_money(m_total + other_money.m_total);

		return sum_money;
	}

	// Subtraction operator
	Money operator - (const Money& other_money) const
	{
		Money diff_money(m_total - other_money.m_total);

		return diff_money;
	}

	// Negation operator
	Money operator - () const
	{
		Money neg_money(-m_total);

		return neg_money;
	}

	// Scalar multiplication operator
	Money operator * (const int multiplier) const
	{
		Money prod_money(m_total * multiplier);

		return prod_money;
	}

	// Scalar division operator
	Money operator / (const int divisor) const
	{
		Money quot_money(m_total / divisor);

		return quot_money;
	}

	// Equality operator
	bool operator == (const Money& other_money) const
	{
		return m_total == other_money.m_total;
	}

	/***** Member Functions *****/

	// Sets total of this Money provided some int "total"
	void setTotal(int total)
	{
		if (total > 99999999)
		{
			throw 1;
		}
		else if (total < -99999999)
		{
			throw 1;
		}
		else
		{
			m_total = total;
		}
	}

	// Sets total of this Money provided some formatted string "formatted"
	void setTotal(string formatted)
	{
		int delim = 0;
		string remain;
		int numbs[64] = { -1 };
		int total = 0,
			sign = 1;

		if (formatted[0] == '-')
		{
			remain = formatted.substr(1, (formatted.length() - 1));
			sign = -1;
		}
		else
		{
			remain = formatted;
		}

		int i = 0;
		bool cont = true;
		while (cont)
		{
			delim = remain.find('.');
			cont = (delim < remain.length());

			try
			{
				numbs[i] = stoi(remain.substr(0, delim));
				if (numbs[i] < 0)
					throw 2;
			}
			catch (...)
			{
				throw 2;
			}

			remain = remain.substr((delim + 1), remain.length());
			++i;
		}

		if (i != 4)
			throw 3;

		for (int j = 0; j < 4; ++j)
			total += pow(100, (3 - j)) * numbs[j];

		total *= sign;

		try
		{
			setTotal(total);
		}
		catch (int e)
		{
			throw e;
		}
	}

	// Returns total of this Money as an int
	int getTotal() const
	{
		return m_total;
	}

	// Returns copper total of this Money as int
	int getCopper() const
	{
		return m_total % 100;
	}

	// Returns silver total of this Money as int
	int getSilver() const
	{
		return (m_total / 100) % 100;
	}

	// Returns gold total of this Money as int
	int getGold() const
	{
		return (m_total / 10000) % 100;
	}

	// Returns platinum total of this Money as int
	int getPlatinum() const
	{
		return (m_total / 1000000) % 100;
	}

	// Returns formatted string of this Money
	string getString(bool abbrev = true) const
	{
		int sign = (m_total < 0 ? -1 : 1);
		string formatted = "",
			plat_str = to_string(abs(getPlatinum())),
			gold_str = to_string(abs(getGold())),
			silv_str = to_string(abs(getSilver())),
			copp_str = to_string(abs(getCopper()));

		if (abbrev)
			formatted = (m_total < 0 ? "-" : "") + plat_str + "." + gold_str + "." + silv_str + "." + copp_str;
		else
			formatted = (m_total < 0 ? "negative " : "") + plat_str + " platinum, " + gold_str + " gold, " + silv_str + " silver, " + copp_str + " copper";

		return formatted;
	}

private:

	/***** Data Members *****/

	// Int storing total for this Money
	int m_total;

};