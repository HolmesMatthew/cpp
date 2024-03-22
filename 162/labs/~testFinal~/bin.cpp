#include "bin.h"
#include <iostream>
using std:: cout;
using std::cin;
using std::endl;

void Bin::setMax(){
    maxBin =10;
    maxPart = 30;
}
void Bin::setPart(){
    string uPart;
    cout << "Enter the parts description:" << endl;
    getline(cin, uPart);
    part = uPart;

};
void Bin::setNumPart(){
    int uPart;
    cout << "Enter the  number of parts:" << endl;
    cin >> uPart;
    if (uPart < 30)
    {
        part = uPart;
    }else{
        cout << "bin only holds 30, re-enter" << endl;
        cin >> uPart;
    }
    

};

void Bin::getPart(Bin *bin, string gPart){
    for (int i = 0; i < bin->maxPart; i++)
    {

            cout << i;

        
        if (gPart == bin->part)
        {
            displayBin(bin);
        }
        bin++;
        
    }
};
int Bin::getPartNum(Bin *bin){
    int numP = bin->numPart;
    return numP;
    
};
void Bin::getBin(Bin *bin){

};
void Bin::displayBin(Bin *bin){
cout << "Description: "<< bin->part << " QTY: " << bin->numPart ; 
};