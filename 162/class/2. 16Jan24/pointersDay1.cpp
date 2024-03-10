#include <iostream>
using namespace std;

int main(){

    const int SIZE = 7;

    int numArr[SIZE] = {5,10,15,20,30,35,40};
    
    // pointer
    int *numPtr = numArr;

    for (int count = 0; count < SIZE; count++)
    {
        cout << *numPtr << " " ;
        numPtr++;
    }

    cout << "\n\n" << numPtr << " <-- numPtr, Has a value of :" << *numPtr << endl; 

    
    cout << "\nbackwards: ";
        numPtr--; // must be set first to reset pointer
    
    for (int count = 0; count < SIZE; count++)
    {
        cout << *numPtr << " ";
        numPtr--;
    }

}