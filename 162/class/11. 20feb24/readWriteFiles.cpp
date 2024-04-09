#include <iostream>
#include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;

const int DESC_SIZE= 31;

struct InventoryItem{
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main() 

{ // ----- Start main -----
    InventoryItem record;
    long recNum; // long = bytes

    // open binary file stream in both read and write mode
    fstream inventory("inventory.bin", ios::app|ios::binary|ios::out);
    if (!inventory) {
    cerr << "Could not open file. Please check the file exists and you have permission to access it." << endl;
    return 1; // Exit the program or handle the error appropriately.
}

    inventory.open("Inventory.bin");

    cout << "Which record do you want to edit? ";
    cin >> recNum;

    inventory.seekg(recNum * sizeof(record), ios::beg);
    inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
    cout << "Description: " << record.desc << endl;
    cout << "Quantity: " << record.qty << endl;
    cout <<" price: $" << record.price << endl;

    cout << "Enter the new description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Enter the new quantity: ";
    cin >> record.qty;
    cout << "Enter the new price: $";
    cin >> record.price;


    inventory.seekp(recNum * sizeof(record), ios::beg);

    inventory.write(reinterpret_cast<char *>(&record), sizeof(record));

    inventory.close();


} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN " << fileName << "tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 