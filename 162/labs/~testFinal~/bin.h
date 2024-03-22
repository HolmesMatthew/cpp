#pragma once
#ifndef BIN_H
#define BIN_H

#include <string>
using std::string;

class Bin {
    private:

    string part;
    int numPart;
    int maxPart;
    int maxBin;

    public:
    //setter
    void setPart();
    void setNumPart();
    void setMax();


    //getter
    void getPart(Bin *bin, string gPart);
    int getPartNum(Bin *bin);
    void getBin(Bin *bin);
    void displayBin(Bin *bin);





};

#endif