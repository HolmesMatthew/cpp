#pragma once
#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <iostream>
#include <string>
using std::string;

template <typename T>
class DynamicArray {
private:
    T* m_array;
    int m_elements;
    int m_capacity;


public:
    // Constructor
    DynamicArray();
    DynamicArray(int m_elements,int m_capacity,string m_type);

    // Destructor
    ~DynamicArray();

    // Add an item to the array
    void addItem(const T& item);

    // Remove an item from the array by index
    void removeItem(int index);


    // Get the item at a specific index
    T getItem(int index) const;

    // Get the total number of items in the array
    int getSize();

    // Check if the array is empty
    bool isEmpty();

    // Resize the array if needed
    void resizeArray(int newSize);
};

#endif