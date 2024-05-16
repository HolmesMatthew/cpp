#pragma once
#ifndef SEARCHABLEVECTOR_H
#define SEARCHABLEVECTOR_H

#include "simpleVect.h"
#include <iostream>
using namespace std;


template <class J>
class SearchableVector : public SimpleVector<J> {
    private:
        // 
    public:
        // Default CTOR
        SearchableVector():SimpleVector<J>(){

        }
        // CTOR
        SearchableVector(int size):SimpleVector<J>(size){

        }
        // Copy CTOR
        SearchableVector(const SearchableVector &obj) : SimpleVector<J>(obj.size()){
            for (int i = 0; i < this->size(); i++)
            {
                this->operator[](i) = obj[i];
            }
        }
        // Search function
        int findItem(const J item){
        
            for (int i = 0; i < this->size(); i++)
            {
                if (this->getElementAtPosition(i) == item)
                {
                    return i;
                }
            }
                    return -1;
        }
};

#endif