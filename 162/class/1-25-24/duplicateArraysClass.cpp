#include <iostream>
using namespace std;

int* duplicateArray(const int*, int);
void displayArray(const int[], int);
int main() 
// ----- Start main -----
{

    const int SIZE = 7;
    int array[SIZE] = {10,20,30,40,50,60,70};
    int* dupOne;
    dupOne = duplicateArray(array, SIZE);
    cout << "original array ";
    displayArray(array,SIZE);
    cout << "\nduplicate array ";
    displayArray(dupOne,SIZE);
    delete[] dupOne;
    dupOne = nullptr;
} 
// ----- End main -----  

int* duplicateArray(const int* arr, int size)
{
    int* newArray = nullptr;

    if (size < 1)
    {
        return nullptr;
    }
    // dynamically allocate the new array
    newArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    return newArray;
}   

void displayArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

/* ---------- notes ----------

-------- end notes -------- */ 