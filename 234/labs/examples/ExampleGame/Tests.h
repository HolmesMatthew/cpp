#pragma once

#include <string>
#include <iostream>
using namespace std;

#include "Potion.h"
#include "DynamicArray.h"
#include "BackPack.h"
#include "CoinPouch.h"
#include "Character.h"

// Overloaded function to_string for Potion class
string to_string(Potion potion)
{
    return "(" + potion.getString() + ")";
}

// Overloaded function to_string for DynamicArray<T> class, assumes to_string() is defined for type T
template <class T>
string to_string(DynamicArray<T>& arr)
{
    string combined = "";

    if (arr.length() == 0)
    {
        combined = "{}";
    }
    else
    {
        combined = "{";
        for (int i = 0; i < arr.length() - 1; ++i)
            combined += to_string(arr.getElem(i)) + ", ";
        combined += to_string(arr.getElem(arr.length() - 1)) + "}";
    }

    return combined;
}

// Function for testing functionality of Character
void testCharacter()
{
    BackPack backpack;
    backpack.addPotion(Potion("Healing", "increases health", Potency("150%"), Money("0.2.1.4")));
    backpack.addPotion(Potion("Harming", "decreases health", Potency("50%"), Money("0.3.6.9")));
    backpack.addPotion(Potion("Useless", "does absolutely nothing", Potency("100%"), Money("0.0.0.1")));

    CoinPouch coinpouch(Money("11.22.33.44"));

    Character harry("Harry Potter", coinpouch, backpack);

    Character ronald(harry);
    ronald.setName("Ronald Weasley");
    ronald.setCoinPouch(CoinPouch(Money("0.1.23.14")));

    cout << "\nharry = " << harry.getString() << endl;
    cout << "\nronald = " << "\n" << ronald.getString(false) << endl;
}

// Function for testing functionality of CoinPouch
void testCoinPouch()
{
    CoinPouch coinpouch1;
    coinpouch1.addCoins(Money("44.33.22.11"));

    CoinPouch coinpouch2(Money("11.22.33.44"));
    coinpouch2.addCoins(Money("1.2.3.4"));

    CoinPouch coinpouch3(coinpouch1);
    try
    {
        coinpouch3.remCoins(Money("99.0.0.0"));
    }
    catch (int error)
    {
        cout << "\nError: " << error << endl;
        coinpouch3.remCoins(coinpouch2.getCoins());
    }

    cout << "\ncoinpouch1 = " << coinpouch1.getString() << endl;
    cout << "\ncoinpouch2 = " << coinpouch2.getString(true) << endl;
    cout << "\ncoinpouch3 = " << coinpouch3.getString(false) << endl;
}

// Function for testing functionality of BackPack
void testBackPack()
{
    BackPack backpack1;
    backpack1.addPotion(Potion("Healing", "increases health", Potency("150%"), Money("0.2.1.4")));
    backpack1.addPotion(Potion("Harming", "decreases health", Potency("50%"), Money("0.3.6.9")));
    backpack1.addPotion(Potion("Useless", "does absolutely nothing", Potency("100%"), Money("0.0.0.1")));

    BackPack backpack2(backpack1);
    backpack2.remPotion(0);
    backpack2.remPotion(Potion());
    backpack2.remPotion(Potion("Harming", "decreases health", Potency("50%"), Money("0.3.6.9")));

    cout << "\nbackpack1 = " << backpack1.getString(false) << endl;

    cout << "\nbackpack2 = " << backpack2.getString() << endl;
}

// Function for testing functionality of DynamicArray<Potion>
void testDynamicArrayPotion()
{
    DynamicArray<Potion> potions(3);
    potions.setElem(0, Potion("Healing", "increases health", Potency("150%"), Money("0.2.1.4")));
    potions.setElem(1, Potion("Harming", "decreases health", Potency("50%"), Money("0.3.6.9")));
    potions.setElem(2, Potion("Useless", "does absolutely nothing", Potency("100%"), Money("0.0.0.1")));

    cout << to_string(potions);
}

// Function for testing functionality of DynamicArray<int>
void testDynamicArrayInt()
{
    // Showing functionality of constructor which takes length parameter
    DynamicArray<int> x(3);
    // Showing functionality of setElem()
    x.setElem(0, 1);
    x.setElem(1, 2);
    x.setElem(2, 3);

    // Showing functionality of copy constructor
    DynamicArray<int> y(x);
    // Showing functionality of setElem() and getElem()
    for (int i = 0; i < y.length(); ++i)
        y.setElem(i, y.getElem(i) + 3);

    // Initializing z using default constructor
    DynamicArray<int> z;
    // Showing functionality of operator =
    z = y;

    // Displaying current state of DynamicArrays x, y, and z
    cout << "x = " << to_string(x) << endl;
    cout << "y = " << to_string(y) << endl;
    cout << "z = " << to_string(z) << endl;

    // Showing functionality of insert() and length()
    z.insert(x);
    y.insert(0);
    y.insert(x, 1);
    x.insert(4, x.length());

    // Displaying current state of DynamicArrays x, y, and z
    cout << "x = " << to_string(x) << endl;
    cout << "y = " << to_string(y) << endl;
    cout << "z = " << to_string(z) << endl;

    // Showing functionality of remove(), length(), and find()
    while (x.length() != 0)
        x.remove(0, 1);
    y.remove(y.length() - 1, 1);
    z.remove(2, 3);
    z.remove(z.find(1));

    // Displaying current state of DynamicArrays x, y, and z
    cout << "x = " << to_string(x) << endl;
    cout << "y = " << to_string(y) << endl;
    cout << "z = " << to_string(z) << endl;
}

// Function for testing function of user-defined String class
void testString()
{
    String str1;

    String str2('a');

    char chr = 'b';
    String str3(chr);

    String str4("hello");

    string str = "Thank You!!!";
    String str5(str);

    String str6(str3);

    cout << "Initial State:"
        << "\n  str1 (" << str1.length() << ") = " << str1.native()
        << "\n  str2 (" << str2.length() << ") = " << str2.native()
        << "\n  str3 (" << str3.length() << ") = " << str3.native()
        << "\n  str4 (" << str4.length() << ") = " << str4.native()
        << "\n  str5 (" << str5.length() << ") = " << str5.native()
        << "\n  str6 (" << str6.length() << ") = ";
    str6.display();

    str1 = str;

    str2 = "goodbye";

    str3 = str4;

    str4.upper();

    str5.lower();

    cout << "Final State:"
        << "\n  str1 (" << str1.length() << ") = " << str1.native()
        << "\n  str2 (" << str2.length() << ") = " << str2.native()
        << "\n  str3 (" << str3.length() << ") = " << str3.native()
        << "\n  str4 (" << str4.length() << ") = " << str4.native()
        << "\n  str5 (" << str5.length() << ") = " << str5.native()
        << "\n  str6 (" << str6.length() << ") = ";
    str6.display();
}