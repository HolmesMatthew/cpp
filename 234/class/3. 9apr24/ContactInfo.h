#define _CRT_SECURE_NO_WARNINGS // <-- NEEDED TO RUN DEPRECATED CODE
#pragma once
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include <cstring>
#include <string>
class ContactInfo
{
private:
	 char* name;
	 char* phone;

	void initName(const char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n); // <-- DEPRECATED 

	}

	void initPhone(const char* p)
	{
		phone = new char[strlen(p) + 1];
		strcpy(phone,p);
	}

public:
	//CTOR
	ContactInfo(const char* n, const char* p)
	{
		initName(n);
		initPhone(p);
	}
	~ContactInfo() 	// Destructor

	{
		delete[] name;
		delete[] phone;
	}

	const char* getName() const
	{
		return name;
	}

	const char* getPhone() const
	{
		return phone;
	}
};

#endif // !CONTACTINFO_H


