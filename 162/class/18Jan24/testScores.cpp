#include <iostream>
#include <iomanip>
using namespace std;

/* ---------- notes ----------
write a program that dynamic allocates an array large enough to hold a user~defined number of test scores.
Once all the scores are entered, the array should be passed to a function that sorts them in ascending order.
Another function should be called that calculates the average score.
User pointer notation rather than array notation whenever possible.

-------- end notes -------- */ 


void bubbleSort(double *arr, int size);
double scoreAvg(double *arr, int size);
// ----- Start main -----
int main(){

    double *scores = nullptr; // init pointer
    int numTests = 0;         // holds number of tests
    double average = 0.0;     // holder for avg

    
    cout << "How many tests do you have to enter?: ";
    cin >> numTests; // get number of tests

    scores = new double[numTests];    // create array using dynamic memory

    for (int i = 0; i < numTests; i++)
    {
        cout << "Test: " << i+1 << ": ";
        cin >> scores[i]; // get scores from user
    }
    bubbleSort(scores, numTests); // sort array 
    average = scoreAvg(scores, numTests); // get average
    
    // display results
    cout << fixed << showpoint << setprecision(2); // set formatting
    cout << "\nThe average test score for the " << numTests << " tests you entered is: " << average << endl;
    
    cout << "\nThe entered scores sorted in acceding order are: ";

    for (int i = 0; i < numTests; i++)
    {
        cout << scores[i] << " "; // using pointer notation here brakes the code? 

    }
    

    delete[] scores; // delete dynamically allocated memory
    scores = nullptr; // reset pointer

}// ----- End main -----

double scoreAvg(double *arr, int size){

    double total = 0.00;
    double average = 0.00;

    for (int i = 0; i < size; i++)
    {
        // add sum to arr pointer
        total += *arr;
        // move to the next value within array
        arr++;
    }
    average = total/size;
    return average;
}
// ----- sort function -----
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(double *arr, int size){
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
