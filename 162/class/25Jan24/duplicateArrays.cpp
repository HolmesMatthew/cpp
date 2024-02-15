#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for the time function
using namespace std;

/* ---------- notes ----------
- Create a program that works with arrays of integers and will duplicate the arrays.

- Create a function that will accept an array and its size and an argument, 
  create a new array that is a copy of the original, and return a pointer to the new array,

--- PSEUDOCODE ---

accept an array and its size arguments
dynamically allocate a new array that is the same size as the argument array
copy the elements of the argument array to the new array
return a pointer to the new array

-------- end notes -------- */ 
void display(int arr[], int size);
int getUserNum();
int* getRandomNumbers(int num);
int *arrCopier(int arr[], int size);
int main() 
// ----- Start main -----
{   
    int *originArr = nullptr;
    int *newArr = nullptr;

    int num = getUserNum();
    originArr = getRandomNumbers(num);
    // display(newArr, num);
    // delete[] originArr;
    // originArr = nullptr;
    // delete[] newArr;
    // newArr = nullptr;
// ----------------------------------------------------
    cout << "Origin array";
    for (int i = 0; i < num; i++)
    {
        cout << originArr[i] << " ";

    }
    cout <<"\n";

    newArr= arrCopier(originArr, num);
    cout << "New array";

    for (int i = 0; i < num; i++)
    {
        cout << newArr[i] << " ";

    }
// ----------------------------------------------------
    
} 
// ----- End main -----
void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";

    }
}
int *arrCopier(int arr[], int size){
    int *copy = nullptr;
    copy = new int[size];

    for (int i = 0; i < size; i++)
    {
        copy[i] = arr[i];

    }

    return copy;
    

}
int getUserNum()
{
    int num;
    cout << "Enter the amount of numbers you want to generate: ";
    cin >> num;
    while (num < 1)
    {
        cout << "Enter a number greater than one... ";
        cin >> num;
    }
    return num;
}

int* getRandomNumbers(int num)
{
    int *arr = nullptr; // holder for dynamic array
    if (num < 1 )     // error handling fail safe
    {
        return nullptr;
    }
    // dynamically allocate memory for the random numbers in the array
    arr = new int[num]; 
    // seed alt rand num gen // returns 2 digit num
    time_t now = time(0);
    tm *ltm = localtime(&now);
    for (int i = 0; i < num; i++)
    {
        int sec = ltm->tm_sec;
        arr[i] = (rand() % sec );
    }
    return arr;
}