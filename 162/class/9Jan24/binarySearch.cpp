#include <iostream>
using namespace std;

int binarySearch(const int arr[],int size, int value);
int main(){

const int SIZE = 20;
int idNums[SIZE] = {101,142,147,189,199,
                    207,222,234,289,296,
                    310,319,388,394,417,
                    429,447,521,536,600 };

int results; // holder for return value from search
int empID; // value we are searching for

cout << "Enter empID: ";
cin >> empID;
results = binarySearch(idNums, SIZE, empID);
if (results == -1)
{
    cout << "No employ found";
}
else {
    cout << "Employ found at position " << results + 1 << endl;
}
}


// Binary search - sort: largest->Smallest, Smallest->largest, alphabetically 
// cut sorted list in half 
// search for value - is value larger or smaller than middle number 
// repeat process for selected half and continue until list is small enough to search value by value

int binarySearch(const int arr[],int size, int value){
    int first = 0; // first array element
    int last = size -1; // last array element
    int middle;
    int pos = -1; // pos if not found, else pos of found element
    bool found = false; // flag setting set to false

    while (!found && first <= last)
    {
        middle = (first+last)/2;

        if (arr[middle] == value)
        {
            found = true;
            pos = middle;
        }
        // if middle is less than the middle, last becomes middle - 1
        else if ( arr[middle] > value){
            last = middle -1;
        }
        // if middle is greater than middle, first becomes middle + 1
        else if (arr[middle] < value){
            first = middle + 1;
        }
    }
    return pos;
}