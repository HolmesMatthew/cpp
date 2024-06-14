#include "dynamicArray.h"
#include <iostream>
#include <stdexcept>
#include <string>
using std::cout;
using std::endl;


template <typename T>

DynamicArray<T>::DynamicArray() {
    m_elements = 0;
    m_capacity = 2;
    m_array = new T[m_capacity];  // Allocate memory for m_array
    
}


template <typename T>
DynamicArray<T>::~DynamicArray() {
    delete[] m_array; // Deallocate memory for m_array
}


template <typename T>
void DynamicArray<T>::addItem(const T& item) {
    if (m_elements >= m_capacity) {
        resizeArray(m_capacity * 2); // Resize the array when full
    }
    m_array[m_elements++] = item;
}

template <typename T>
void DynamicArray<T>::removeItem(int index) {
    if (index < 0 || index >= m_elements) {
        cout << "Index is out of bounds" << endl;
        return;
    }
    // If T is a pointer, delete the object pointed to by the array element
    delete m_array[index]; // Only do this if you're sure T is a pointer to dynamically allocated memory

    // Shift elements down
    for (int i = index; i < m_elements - 1; i++) {
        m_array[i] = m_array[i + 1];
    }
    m_elements--;
}

template <typename T>
T DynamicArray<T>::getItem(int index) const {
    if (index >= 0 && index < m_elements) {
        return m_array[index];
    } else {
        // Handle the error, for example by throwing an exception

        throw std::out_of_range("Index is out of bounds");
    }
}

template <typename T>
int DynamicArray<T>::getSize() {
    return m_elements;
}

template <typename T>
bool DynamicArray<T>::isEmpty() {
    return m_elements == 0;
}

template <typename T>
void DynamicArray<T>::resizeArray(int newSize) {
    m_capacity = newSize;
    T* newArray = new T[m_capacity];

    for (int i = 0; i < m_elements; i++) {
        newArray[i] = m_array[i];
    }

    delete[] m_array;
    m_array = newArray; // Update m_array to point to the new array
}           