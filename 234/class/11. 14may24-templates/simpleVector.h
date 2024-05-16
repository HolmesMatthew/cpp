#pragma once
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H

#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

template <class T>
class SimpleVector {
    private:
        T* aptr; // pointer to allocated array
        int arraySize;
        void memError()
        {
            cout << "ERROR: Cannot allocate memory.\n";
            exit(EXIT_FAILURE);

        }
        void subError()
        { 
            cout << "ERROR: Subscript out of range.\n";
            exit(EXIT_FAILURE);
            
        }
    public:
        SimpleVector()
        {
            aptr = 0; 
            arraySize = 0;
        }

        SimpleVector(int s)
        {
            arraySize = s;
            try{
                aptr = new T[s];
            }
            catch(bad_alloc)
            {
                memError();
            }
        }
        // CPY CTOR
        SimpleVector(const SimpleVector & obj)
        {
            arraySize = obj.arraySize;
            aptr = new T[arraySize];
            if (aptr == 0)
            {
                memError();
            }
            // copy elements
            for (int i = 0; i < arraySize; i++)
            {
                *(aptr+ i) = *(obj.aptr + i);
            }
        }

        // DTOR
        ~SimpleVector()
        {
            if (arraySize > 0)
            {
                delete[] aptr;
            }
        }
        int size() const
        {
            return arraySize;
        }
        T getElementAtPosition(int pos)
        {
            if (pos < 0 || pos >= arraySize)
            {
                subError();
            }
            return aptr[pos];
        }
        T &operator[](const int &pos)
        {
            if (pos < 0 || pos >= arraySize)
            {
                subError();
            }
            return aptr[pos];
        }

};

#endif