#include <iostream>
#include <cstdlib> // for rand and srand
#include <ctime> // for the time function
using namespace std;

// prototype functions
void display(int arr[], int size);
int getUserNum();
int* getRandomNumbers(int);

int main() 
// ----- Start main -----
{
    int *numbers = nullptr; // initialize pointer
    int num = getUserNum(); // get number from user
    numbers = getRandomNumbers(num); // generate array of random numbers
    display(numbers, num); // display array

    delete[] numbers; // delete dynamically allocated array
    numbers = nullptr; // direct pointer back to nullptr
} 
// ----- End main -----

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << *arr << " ";
        arr++;
    }
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
    arr = new int[num]; // array name = use 'new' kew word to initialize dynamic array followed by type and size --> new type[size]

// ----------------------------------------------
    // seed alt rand num gen // returns 2 digit num
    // time_t now = time(0);
    // tm *ltm = localtime(&now);

    // for (int i = 0; i < num; i++)
    // {
    //     int sec = ltm->tm_sec;
    //     arr[i] = (rand() % sec );
    // }
// ----------------------------------------------
    // seed random number generator // returns 9-10 digit num
    srand(time(0));

    // populate array
    for (int i = 0; i < num; i++)
    {
        arr[i] = rand();
    }
    
    // return a pointer to the array
    return arr;
}


/* ---------- notes ----------

-------- end notes -------- */ 