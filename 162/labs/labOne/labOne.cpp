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

void getRain(double *arr,string *months,int SIZE);
double getAvg(double *arr, int SIZE);
double getTot(double *arr, int SIZE);

void bubbleSort(int arr[], int size, string month[]);
void displayData(double *arrPtr, int SIZE, double arr[], string *monthPtr);
int main() 
// ----- Start main -----
{
    const int SIZE =12;
    double rainArr[SIZE];
    double *rainPtr = rainArr;
    string monthArr[SIZE];
    string *monthPtr = monthArr;

    double combData[SIZE][SIZE]= {
        {},
    };
    
    displayData(rainPtr,SIZE,rainArr,monthPtr);
 

} // ----- End main -----


void getRain(double *arr,string *monthPtr,int SIZE)
{   
    int temp;
    string months[12] = {"January", "February", "March", "April", 
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December"};
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the rain for " << months[i] << ":" << endl;
        cin >> temp;


        while (cin.fail()||temp<0)
        {
            cout << "Please enter a valid number: "<< endl;
            cin.clear(); cin.ignore();
            cin >> temp;
        }
        *arr =temp;
        *monthPtr = months[i]; //adding the monthPtr was extra work not that i think about it but im to commited to change it
        arr++; monthPtr++;

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
void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}

void bubbleSort(double arr[], int size, string month[]){
    int maxElement;
    int index;
    // start at end->beginning of array
    for (maxElement = size -1; maxElement>0; maxElement--){
        // nested loop start at beginning->end of array
        for(index=0; index < maxElement; index++){
            if (arr[index] > arr[index+1])
            {
                swap(arr[index], arr[index+1]);
                swap(month[index], month[index+1]);
            }
        }
    }
}

void displayData(double *arrPtr, int SIZE, double arr[], string *monthPtr)
{
    double total;
    double average;
    
    getRain(arrPtr, monthPtr, SIZE);
    average = getAvg(arrPtr, SIZE);
    total = getTot(arrPtr,SIZE);
    // bubbleSort(double arr[], int SIZE);
    cout << "\n******************************************\n";
    cout << "Total rain fall: " << total << "inches" << endl;
    cout << "Average rain fall: " << average << "inches" << endl;
    bubbleSort(arr, SIZE, monthPtr);
    cout << "The most rain fall was " <<monthPtr[11] <<" with "<< arr[11] << " inches."<< endl;
    cout << "The least rain fall was "<<monthPtr[0] <<" with "<< arr[0] << " inches."<< endl;

}
