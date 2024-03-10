#include <iostream>
using namespace std;

// 
// LinearSearch - search data from end to end
int linearSearch(const int arr[], int size, int value);
int main(){

    // array to search
    const int SIZE = 5; //CONST ARE ALL CAPS
    int tests[SIZE] = {87,75,98,100,82};

    int results;
    int userValue;
    cout << "Enter a value to search for: ";
    cin >> userValue;
    results = linearSearch(tests,SIZE, userValue);

    if (results == -1)
    {
        cout << "Number was not found";
    }
    else{
        cout << "Number was found at position: " << results + 1 << endl;
    }
    




}
// every element is considered as a potential match for the key and checked for the same
// if any element is found equal to the key, the search is successful and the index of that element is returned
// if no element is found equal to the key the seach yields "no match found"

// (array to search, size of array, value to find)
int linearSearch(const int arr[], int size, int value){
    int index = 0; // initialize the value for the subscript of array
    int pos = -1; // can use -1 as flag, does not exist in array.
    bool found = false; // indicates if value was found


    while (index < size && !found) // while index is less than size and found=false
    {
        
        if (arr[index] == value)
        { 
            found = true; // value is found, set bool value to true
            pos = index; // change pos from -1 to current index pos
        }
        index ++;
    }
                
    return pos; // if pos= -1 value was not found else value is at #pos
}