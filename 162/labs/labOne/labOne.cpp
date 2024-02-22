#include <iostream>
// #include <fstream> // for file input/output
#include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;

/*
Write a program that allows users to enter the total rainfall for each of 12 months into an array of doubles. 
The program should calculate and display:
- the total rainfall for the year, 
- the average monthly rainfall, 
- the months with the highest and lowest amounts. 
It should then display a list of months sorted in order of rainfall from highest to lowest. 

input validation: do not accept negative numbers for monthly rainfall figures.
*/

void getRain(double *arr,int SIZE);
double getAvg(double *arr, int SIZE);
double getTot(double *arr, int SIZE);

void bubbleSort(int arr[], int size);
void displayData(double *arrPtr, int SIZE, double arr[]);
int main() 
// ----- Start main -----
{
    const int SIZE =12;
    double rainArr[SIZE];

    double *rainPtr = rainArr;
    double combData[SIZE][SIZE]= {
        {},
    }
    
    displayData(rainPtr,SIZE,rainArr);
 

} // ----- End main -----


void getRain(double *arr,int SIZE)
{
    string months[12] = {"January", "February", "March", "April", 
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December"};
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the rain for " << months[i] << ":" << endl;
        cin >> *arr;
        arr++;

    }
}

double getAvg(double *arr,int SIZE)
{
    double temp;
    double avg;
    for (int i = 0; i < SIZE; i++)
    {
        temp += *arr;
        arr++;
    }
    avg = (temp/SIZE);
    return avg;
}
double getTot(double *arr,int SIZE)
{
    double tot;

    for (int i = 0; i < SIZE; i++)
    {
        tot += *arr;
        arr++;
    }

    return tot;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(double arr[], int size){
    int maxElement;
    int index;
    // start at end->beginning of array
    for (maxElement = size -1; maxElement>0; maxElement--){
        // nested loop start at beginning->end of array
        for(index=0; index < maxElement; index++){
            if (arr[index] > arr[index+1])
            {
                swap(arr[index], arr[index+1]);
            }
        }
    }
}
void combineData(double *arrPtr, int SIZE, double combData[])
{
    string months[12] = {"January", "February", "March", "April", 
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December"};
    for (int i = 0; i < SIZE; i++)
    {
        combData[i] = *arrPtr;


    }
    

}
void displayData(double *arrPtr, int SIZE, double arr[])
{
    double total;
    double average;
    
    getRain(arrPtr,SIZE);
    average = getAvg(arrPtr, SIZE);
    total = getTot(arrPtr,SIZE);
    // bubbleSort(double arr[], int SIZE);

    cout << "Total rain fall: " << total << "inches" << endl;
    cout << "Average rain fall: " << average << "inches" << endl;
    // bubbleSort(arr, SIZE);
    // cout << "The most rain fall was " << arr[11] << endl;
    // cout << "The least rain fall was "<<  arr[0] << endl;

}
