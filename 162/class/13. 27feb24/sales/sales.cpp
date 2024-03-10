#include <iostream>
#include "Sale.h"
#include "SaleFunc.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;


int main() 

{ // ----- Start main -----
    double cost;
    cout << "Enter the cost of the item: ";
    cin >> cost;

    Sale itemSale(cost);

    cout << "The amount of sales tax it $" << itemSale.getTax()<< endl;
    cout << "The total of the sale is : $" << itemSale.getTotal() << endl;
    




} // ----- End main -----


/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN tRY AgAiN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 