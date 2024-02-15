#include <iostream>
#include <cstdlib> // for rand() + srand()
#include <ctime> // for time()
#include <cmath>
#include <iomanip>
#include <tuple>
using std::setw;

using namespace std;
// --- function header ---
void Calc();
void DisplayMenu();
void MenuChoice(int array[], int ARRAY_SIZE);
void SwitchFunc(int choice, int array[], int ARRAY_SIZE);
int RandNumGen(int i);
void FillArray(int nums[], int);
void DisplayArray(int array[], int size);
void ArrayMaxMin(int array[], int size);
void CalcAverage(int array[], int size);
void ReverseArray(int array[], int size);

int main(){

Calc();

} // end main


// --- functions ---

// main function
void Calc(){
    int ARRAY_SIZE;
    cout << "Enter the amount of numbers you would like to generate: ";
    cin >> ARRAY_SIZE;
    int nums[ARRAY_SIZE];

    FillArray(nums, ARRAY_SIZE);
    MenuChoice(nums,ARRAY_SIZE);
}

void DisplayMenu(){
    cout << "\n1. Display the Array"
        << "\n2. Find Maximum and Minimum Values"
        << "\n3. Calculate Average"
        << "\n4. Reverse the Array"
        << "\n0. Exit\n";
}
void MenuChoice(int array[], int ARRAY_SIZE){
    int choice;
    do
    {
        DisplayMenu();
        cin >> choice;
        if (choice >= 0 && choice <= 4)
        {
            SwitchFunc(choice, array, ARRAY_SIZE);

        }
    } while (choice != 0);
}

void SwitchFunc(int choice, int array[], int ARRAY_SIZE){

            switch (choice)
        {
        case 1:
            DisplayArray(array,ARRAY_SIZE);
            break;
        case 2:
            ArrayMaxMin(array,ARRAY_SIZE);
            break;
        case 3:
            CalcAverage(array,ARRAY_SIZE);
            break;
        case 4:
            ReverseArray(array,ARRAY_SIZE);
            break;

        
        default:
            cout << "INVALID";
        }            
}
int RandNumGen(int i){
    
    srand(time(NULL));
    // int randNum = rand(); // produces a 9 digit number | int randNumMod = rand() % 100; // produces a 1-2 digit number... maybe only 2 digit 01,02 ect... 

    int randNumMod = (rand() * i) % 100;
    if (randNumMod < 0)
    {
        randNumMod = abs(randNumMod);
    }else if (randNumMod == 0)
    {
        randNumMod = (rand() * i+rand()) % 100;
    }else if(randNumMod> 100){
        randNumMod = randNumMod % 100;
    }
    
    return randNumMod;
}

void FillArray(int nums[], int size){
    // cout << "Enter the amount of numbers you would like to enter: " << endl;
    // cin >> size;
    for (int i = 0; i < size; i++)
    {
        int randNum = RandNumGen(i);
        nums[i] = randNum;
    }
}

void DisplayArray(int array[], int size){
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void ArrayMaxMin(int array[], int size){
    int temp = 0;
    int min = array[0];
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        temp = array[i];
        if (temp>max)
        {
            max = temp;
        }else if (temp<min)
        {
            min = temp;
        }
    }
    cout << "\nMin" << setw(5) << min << "\n" << "Max" << setw(5) << max << endl;
}

void CalcAverage(int array[], int size){
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        temp += array[i];
    }
    cout << "\nThe average is: " << temp/size << endl;
    
}

void ReverseArray(int array[], int size){
    int tempArray[size];
    for (int i = 0; i <size; i++)
    {
        tempArray[i] = array[size-1-i];
    }
    cout << " \n";
    for (int i = 0; i < size; i++)
    {
        cout << tempArray[i] << " ";
    }
    cout << endl;
    
    
}

/*
Write a program that uses an array of numbers to complete calculations:

Declare and Initialize an Array: Declare an integer array of size ARRAY_SIZE and initialize it with random values. 
Then create a menu that allows the user to choose between the following functions:

1. Display the Array: Write a function to display the contents of the array.
2. Find Maximum and Minimum Values: Write functions to find and display the maximum and minimum values in the array.
3. Calculate Average: Write a function to calculate and display the average value of the array.
4. Reverse the Array: Write a function to reverse the elements of the array and display the reversed array.
*/