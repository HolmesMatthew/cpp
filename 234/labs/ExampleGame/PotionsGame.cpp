#define  _CRTDBG_MAP_ALLOC

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include <crtdbg.h>

#include "Tests.h"
#include "Character.h"
#include "DynamicArray.h"

void readFromFile(DynamicArray<Character>& characters, string filename);
void writeToFile(DynamicArray<Character>& characters, string filename);
void displayCharacters(DynamicArray<Character>& characters, bool abbrev = true);
void initializeCharacters(DynamicArray<Character>& characters);

int main()
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    DynamicArray<Character> characters;
    string filename = "characters.bin";

    //initializeCharacters(characters);
    readFromFile(characters, filename);

    // Could do some stuff here to add/change/delete characters

    displayCharacters(characters, false);
    writeToFile(characters, filename);
}

// Function for reading from binary file "filename" and deserializing data to store in "characters"
void readFromFile(DynamicArray<Character>& characters, string filename)
{
    // Opening file
    ifstream fin(filename, ios::in | ios::binary);

    // Making sure file opened successfully
    if (fin.is_open())
    {
        // Variables that will be needed in Character loop
        int c_name_len = 0,
            c_coins = 0,
            c_potions_num = 0;
        char* c_name = nullptr;

        // Variables that will be needed in Potion (inner) loop
        int p_name_len = 0,
            p_descr_len = 0,
            p_cost = 0;
        char* p_name = nullptr;
        char* p_descr = nullptr;
        double p_potency = 0.0;

        // Making sure DynamicArray starts out empty
        characters.empty();

        // First, read how many Characters should be in DynamicArray
        int characters_num;
        fin.read(reinterpret_cast<char*>(&characters_num), sizeof(characters_num));

        // Looping over each Character to be added to DynamicArray
        for (int i = 0; i < characters_num; ++i)
        {
            // Objects to save current data to
            Character curr_character;
            BackPack curr_back_pack;

            // Reading name of Character
            fin.read(reinterpret_cast<char*>(&c_name_len), sizeof(c_name_len));
            c_name = new char[c_name_len];
            fin.read(c_name, c_name_len);
            curr_character.setName(c_name);
            delete[] c_name;

            // Reading coins of Character
            fin.read(reinterpret_cast<char*>(&c_coins), sizeof(c_coins));
            curr_character.setCoinPouch(CoinPouch(Money(c_coins)));

            // Reading number of Potions in BackPack of Character
            fin.read(reinterpret_cast<char*>(&c_potions_num), sizeof(c_potions_num));

            // Looping over each Potion to be added to BackPack
            for (int j = 0; j < c_potions_num; ++j)
            {
                // Object to save current data to
                Potion curr_potion;

                // Reading name of Potion
                fin.read(reinterpret_cast<char*>(&p_name_len), sizeof(p_name_len));
                p_name = new char[p_name_len];
                fin.read(p_name, p_name_len);
                curr_potion.setName(p_name);
                delete[] p_name;

                // Reading description of Potion
                fin.read(reinterpret_cast<char*>(&p_descr_len), sizeof(p_descr_len));
                p_descr = new char[p_descr_len];
                fin.read(p_descr, p_descr_len);
                curr_potion.setDescr(p_descr);
                delete[] p_descr;

                // Reading potency of Potion
                fin.read(reinterpret_cast<char*>(&p_potency), sizeof(p_potency));
                curr_potion.setPotency(Potency(p_potency));

                // Reading cost of Potion
                fin.read(reinterpret_cast<char*>(&p_cost), sizeof(p_cost));
                curr_potion.setCost(Money(p_cost));

                // Adding new Potion to end of BackPack
                curr_back_pack.addPotion(curr_potion, curr_back_pack.numPotions());
            }

            // Setting BackPack of Character
            curr_character.setBackPack(curr_back_pack);

            // Adding Character to end of DynamicArray
            characters.insert(curr_character, characters.length());
        }

        // Closing file
        fin.close();
    }
    else
    {
        cout << "\nError: File \"" << filename << "\" failed to open." << endl;
    }
}

// Function for serializing data in "characters" and writing to binary file "filename"
void writeToFile(DynamicArray<Character>& characters, string filename)
{
    // Opening file
    ofstream fout(filename, ios::out | ios::binary);

    // Making sure file opened successfully
    if (fout.is_open())
    {
        // Variables that will be needed in Character loop
        int c_name_len,
            c_coins,
            c_potions_num;
        string c_name;

        // Variables that will be needed in Potion (inner) loop
        int p_name_len,
            p_descr_len,
            p_cost;
        string p_name,
            p_descr;
        double p_potency;

        // First writing number of Characters in DynamicArray
        int characters_num = characters.length();
        fout.write(reinterpret_cast<char*>(&characters_num), sizeof(characters_num));

        // Looping over each Character in DynamicArray
        for (int i = 0; i < characters_num; ++i)
        {
            // Copying current Character in DynamicArray so that it is easier to reference
            Character curr_character(characters.getElem(i));

            // Writing name of Character
            c_name_len = curr_character.getName().length() + 1;
            fout.write(reinterpret_cast<char*>(&c_name_len), sizeof(c_name_len));
            c_name = curr_character.getName();
            fout.write(c_name.c_str(), c_name_len);

            // Writing coins in CoinPouch of Character as a simple int
            c_coins = curr_character.getCoinPouch().getCoins().getTotal();
            fout.write(reinterpret_cast<char*>(&c_coins), sizeof(c_coins));

            // Writing number of Potions in BackPack of Character
            c_potions_num = curr_character.getBackPack().numPotions();
            fout.write(reinterpret_cast<char*>(&c_potions_num), sizeof(c_potions_num));

            // Looping over each Potion in BackPack
            for (int j = 0; j < c_potions_num; ++j)
            {
                // Copying current Potion in BackPack so that it is easier to reference
                Potion curr_potion(curr_character.getBackPack().getPotion(j));

                // Writing name of Potion
                p_name_len = curr_potion.getName().length() + 1;
                fout.write(reinterpret_cast<char*>(&p_name_len), sizeof(p_name_len));
                p_name = curr_potion.getName();
                fout.write(p_name.c_str(), p_name_len);
                
                // Writing description of Potion
                p_descr_len = curr_potion.getDescr().length() + 1;
                fout.write(reinterpret_cast<char*>(&p_descr_len), sizeof(p_descr_len));
                p_descr = curr_potion.getDescr();
                fout.write(p_descr.c_str(), p_descr_len);

                // Writing potency of Potion as a simple double
                p_potency = curr_potion.getPotency().getAmount();
                fout.write(reinterpret_cast<char*>(&p_potency), sizeof(p_potency));

                // Writing cost of Potion as a simple int
                p_cost = curr_potion.getCost().getTotal();
                fout.write(reinterpret_cast<char*>(&p_cost), sizeof(p_cost));
            }
        }

        // Closing file
        fout.close();
    }
    else
    {
        cout << "\nError: File \"" << filename << "\" failed to open." << endl;
    }
}

// Function to display to console all Characters in DynamicArray "characters"
void displayCharacters(DynamicArray<Character>& characters, bool abbrev)
{
    for (int i = 0; i < characters.length(); ++i)
        cout << "\n" << characters.getElem(i).getString(abbrev) << endl;
}

// Function to fill DynamicArray "characters" before there is a file to read from
void initializeCharacters(DynamicArray<Character>& characters)
{
    BackPack std_back_pack;
    std_back_pack.addPotion(Potion("Healing", "increases health", Potency("150%"), Money("0.20.12.4")));
    std_back_pack.addPotion(Potion("Harming", "decreases health", Potency("50%"), Money("0.31.6.98")));
    std_back_pack.addPotion(Potion("Useless", "does absolutely nothing", Potency("100%"), Money("0.0.0.1")));

    Character Harry("Harry Potter", CoinPouch(Money("77.77.77.77")), std_back_pack);
    Character Ron("Ronald Weasley", CoinPouch(), std_back_pack);

    Character Hermione("Hermione Granger", CoinPouch(Money("33.33.33.33")), BackPack());

    std_back_pack.remPotion(Potion("Useless", "does absolutely nothing", Potency("100%"), Money("0.0.0.1")));
    std_back_pack.addPotion(Potion("Crippling", "slashes health", Potency("10%"), Money("2.8.57.32")));
    Character Draco("Draco Malfoy", CoinPouch(Money("99.99.99.99")), std_back_pack);

    characters.insert(Draco);
    characters.insert(Hermione);
    characters.insert(Ron);
    characters.insert(Harry);
}