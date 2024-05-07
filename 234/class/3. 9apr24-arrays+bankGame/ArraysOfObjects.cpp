// ArraysOfObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "ContactInfo.h"
using namespace std;

int main()
{
	const int NUM = 4;
	ContactInfo employees[] = { 
		ContactInfo("Rosie", "719-649-5701"),
		ContactInfo("Tito","123-456-7890"),
		ContactInfo("Manolo","987-434-2434"),
		ContactInfo("Matthew","458-220-4150"),
		};
	
	cout << setw(18) << "Employee Name" 
		<< setw(20) << "\tPhone Number \n";
	cout << "---------------------------------------\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << setw(15) << employees[i].getName();
		cout << setw(8) << "\t" << employees[i].getPhone() << endl;

	}
	
  
}

