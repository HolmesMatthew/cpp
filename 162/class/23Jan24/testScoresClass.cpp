#include <iostream>
#include <tuple>
#include <string>
using namespace std;

/* ---------- notes ----------
write a program that dynamically allocates an array large enough to hold a user-defined number
of test scores. once all the scores are enters. the array should be passed to a function that sorts them in 
ascending order. Another function should be called that calculates the average score.
Use pointer notation rather than array notation whenever possible

Adjust the program to include names of students (sort test scores correctly) then before averaging drop the lowest score
-------- end notes -------- */ 

void display(double arr[], string names[], int size, double average);
void getTestScores(double arr[], string names[], int size);
void bubbleSort(double arr[],string names[], int size);
double averageScore(double arr[], int size);
int dropScore(double *&array,string *&names, int size);

// ----- Start main -----
int main(){
    // init *scores ptr, average and numScores
    double *testScores = nullptr;
    string *names = nullptr;
    double average = 0.0;
    int numScores = 0;
    // 
    cout << "How many test scores would you like to enter? ";
    cin >> numScores;
    // 
    testScores = new double[numScores];
    names = new string[numScores];
    // testScores = array // names = array // numScores = int
    getTestScores(testScores, names, numScores);
    bubbleSort(testScores, names, numScores);
    display(testScores, names, numScores, average);
    dropScore(testScores,names ,numScores);
    average = averageScore(testScores, numScores);
    display(testScores, names, numScores, average);

    
    // 

    // for (int i = 0; i < numScores; i++)
    // {
    //     cout << *names;
    //     names++;
    // }
    
    delete[] testScores;
    delete[] names;
    testScores = nullptr;
    names = nullptr;

}
// ----- End main -----

void display(double arr[], string names[], int size, double average){
    cout << "*********** TEST SCORES ***********\n";
    for (int i = 0; i < size; i++) 
    {
        cout << *names << " " << *arr << endl; 
        arr ++;
        names ++;
    }
    cout << "*********** AVERAGE SCORES ***** ******\n" << average << endl;
}

void getTestScores(double arr[], string name[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> *arr;
        cout << "Enter the name for test " << i + 1 << ": ";
        cin >> *name;
        arr++;
        name++;
    }
}

double averageScore(double arr[], int size){
    // init total + average
    double total = 0.0;
    double average = 0.0;

    for (int i = 0; i < size; i++)
    {
        // add scores to total
        total += *arr;
        arr ++;
    }
    // cal average
    average = total /size;
    return average;
}


void swap(double& a, double& b){
    double temp = a;
    a = b;
    b = temp;
}

void swap(string& a, string& b){
    string temp= a;
    a = b;
    b = temp;
}

void bubbleSort(double arr[], string names[], int size){
    int maxElement;
    int index;

    for(maxElement = size -1; maxElement > 0; maxElement --){
        for (index = 0; index < maxElement; index++)
        {
            if (arr[index]>arr[index+1])
            {
                swap(arr[index], arr[index+1]);
                swap(names[index], names[index+1]);
            }
        }
    }
}

int dropScore(double *&array, string *&names, int size){
// Initialize pointers
    double* tempNums = nullptr;
    tempNums = new double[size-1];

    string* tempNames = nullptr;
    tempNames = new string[size-1];

    for (int i = 0; i < (size-1); i++)
    {
        // *tempNums += *array;
        // tempNums++;
        // array++;
        tempNums[i] = array[i+1];
        tempNames[i] = names[i+1];
        // names++;
        // tempNames++;
    }
    array = tempNums;
    // int newSize = size -1;
    // for (int i = 0; i < newSize; i++)
    // {
    //     cout << *tempNums << " " << endl;
    //     tempNums++;
    // }
    
    // array = tempNums;
    // names= tempNames;
    // size -= 1;
    return size - 1; // doesnt work on mine but works in class
    // return size -= 1; // works
    


}
/*
 ---------------------------
| var1 =14 (address 1000)   |
 ---------------------------

func1(int var1) --> Passing by value             

funct2 (int& var1) --> Passing by address = 1000   (address of ptr1 = 2000)
        [var 1 = 2]

funct3(int *ptr1) --> Pointer by value = 1000 (same as passing by &address)  
{
    new ptr2
    ptr1 = ptr2
}

funct4(int&* ptr1) --> 2000 (address of ptr1 but changes value of var1)
*/