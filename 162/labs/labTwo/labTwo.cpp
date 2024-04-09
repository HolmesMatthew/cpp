#include <iostream>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;
/*
Lab 2
Mode Function

In statistics, the mode of a set of values is the value that occurs most often or with the greatest frequency. 
Write a function that accepts as arguments the following:

1.) An array of integers
2.) An integer that indicates the number of elements in the array.

The function should determine the mode of the array. 
That is, it should determine which value in the array occurs most often. 
The mode is the value the function should return. 
If the array has no move (none of the values occur more than once), the function should return -1. 
(Assume the array will always contain nonnegative values. 

Use pointer notation instead of array notation in this function.
*/

int RepeatingNums(int *numArr, int size);
int main() 
{ // ----- Start main -----

    // Initialize pointer
    int *numArr = nullptr;
    int size;

    cout << "Enter the number of numbers in your array: ";
    cin >> size;

    // make new dynamic array & fill
    numArr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number: " << i+1 << endl;
        cin >> numArr[i];
    }
    // get return from func
    int mode = RepeatingNums(numArr,size);

    // display mode ~ filter for -1
    if(mode > -1){cout << "\nThe mode of the array is " << mode << "." << endl;}
    else{cout << "There are no repeating numbers." << endl;}
    

} // ----- End main -----

int RepeatingNums(int *numArr, int size){
    int numInArr = 0;
    int tempInArr = 0;
    int temp1;
    int temp2;
    int numOfNums;

    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {numOfNums = *numArr;}
        else if(*numArr == numOfNums){
            numOfNums = *numArr;
            numInArr +=1;
        }
        else{temp1 = *numArr;}
        numArr++;
        if (temp1 == *numArr)
        {
            temp2 = temp1;
            tempInArr +=1;
        }
    }

    if (tempInArr > numInArr){numOfNums = temp2;}
    if (numOfNums && numInArr >0){return numOfNums;}
    else{return -1;}
    delete[] numArr;
    numArr = nullptr; 
}

/* ---------- notes ----------
~CoUlD nOT oPeN fIlE~
~CoUlD nOT oPeN~
cout << "~CoUlD nOT oPeN " << fileName << "tRY AgAiN~" << endl;
cout << "eRr0r nO FiLE";
-------- end notes -------- */ 

