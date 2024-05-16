#pragma once

#include <iostream>
#include <string>
using namespace std;

class String
{
public:

	/***** Manager Functions *****/

	// Default constructor
	// Sets value to character array in heap that just contains terminating null character
	String() : m_str(), m_len()
	{
		m_str = new char[] {'\0'};
		m_len = 0;
	}

	// Constructor with character parameter "chr"
	// Sets value to character array in heap that just contains "chr" and terminating null character
	String(char chr) : m_str(), m_len()
	{
		m_str = new char[] {chr, '\0'};
		m_len = 1;
	}

	// Constructor with character pointer parameter "str"
	// Copies over all characters from "str" (assumes "str" contains the terminating null character)
	String(const char* str) : m_str(), m_len()
	{
		int str_len = strlen(str);
		m_str = new char[str_len + 1];

		for (int i = 0; i < str_len; ++i)
			m_str[i] = str[i];

		m_str[str_len] = '\0';
		m_len = str_len;
	}

	// Constructor with (native) string parameter "str"
	// Copies over all characters from "str"
	String(string str) : m_str(), m_len()
	{
		int str_len = str.length();
		m_str = new char[str_len + 1];

		for (int i = 0; i < str_len; ++i)
			m_str[i] = str[i];

		m_str[str_len] = '\0';
		m_len = str_len;
	}

	// Copy constructor
	// Copies over all characters from "other_string"
	String(const String& other_string) : m_str(), m_len()
	{
		int str_len = other_string.m_len;
		m_str = new char[str_len + 1];

		for (int i = 0; i < str_len; ++i)
			m_str[i] = other_string.m_str[i];

		m_str[str_len] = '\0';
		m_len = str_len;
	}

	// Destructor
	~String()
	{
		delete[] m_str;
		m_str = nullptr;
		m_len = 0;
	}

	/***** Overloaded Operators *****/

	// Assignment operator with character pointer parameter "str"
	// Deletes current values of this String and copies over all characters from "str" (assumes "str" contains the terminating null character)
	String operator = (const char* str)
	{
		delete[] m_str;
		m_str = nullptr;
		m_len = 0;

		int str_len = strlen(str);
		m_str = new char[str_len + 1];

		for (int i = 0; i < str_len; ++i)
			m_str[i] = str[i];

		m_str[str_len] = '\0';
		m_len = str_len;

		return *this;
	}

	// Assignment operator with (native) string parameter "str"
	// Deletes current values of this String and copies over all characters from "str"
	String operator = (const string str)
	{
		delete[] m_str;
		m_str = nullptr;
		m_len = 0;

		int str_len = str.length();
		m_str = new char[str_len + 1];

		for (int i = 0; i < str_len; ++i)
			m_str[i] = str[i];

		m_str[str_len] = '\0';
		m_len = str_len;

		return *this;
	}

	// Copy assignment operator
	// Deletes current values of this String and copies over all characters "from other_string"
	String operator = (const String& other_string)
	{
		if (this != &other_string)
		{
			delete[] m_str;
			m_str = nullptr;
			m_len = 0;

			int str_len = other_string.m_len;
			m_str = new char[str_len + 1];

			for (int i = 0; i < str_len; ++i)
				m_str[i] = other_string.m_str[i];

			m_str[str_len] = '\0';
			m_len = str_len;
		}

		return *this;
	}

	// Equality operator
	// Returns true if strings contain same sequence of characters
	bool operator == (const String& other_string) const
	{
		bool equality = true;

		if (m_len == other_string.m_len)
		{
			for (int i = 0; i < m_len; ++i)
			{
				if (m_str[i] != other_string.m_str[i])
				{
					equality = false;
					break;
				}
			}
		}
		else
		{
			equality = false;
		}

		return equality;
	}

	// Conversion operator
	// Returns native C++ string which is copy of this String
	operator string() const
	{
		string str;

		str.append(m_str);

		return str;
	}

	/***** Member Functions *****/

	// Displays contents of this String to console
	void display() const
	{
		cout << m_str << endl;
	}

	// Converts all letters in this String to uppercase
	void upper()
	{
		for (int i = 0; i < m_len; ++i)
			m_str[i] = toupper(m_str[i]);
	}

	// Converts all letters in this String to uppercase
	void lower()
	{
		for (int i = 0; i < m_len; ++i)
			m_str[i] = tolower(m_str[i]);
	}

	// Returns native C++ string which is copy of this String
	string native() const
	{
		string str;

		str.append(m_str);

		return str;
	}

	// Returns (constant) pointer to character array in heap "m_str"
	const char* getPtr() const
	{
		return m_str;
	}

	// Returns length of this String
	int length() const
	{
		return m_len;
	}

private:

	/***** Data Members *****/

	// Char pointer to character array in heap
	char* m_str;

	// Length of this String
	int m_len;

};