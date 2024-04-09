#include <iostream>
#include <ctime>
using namespace std;

/*
rewrite the following loop so it uses pointer notation 
with indirection operator instead of subscript notation
--------------------------

for(int x= 0; x<100; x++){
    cout << arr[x] << endl;
}

*/
void getNumber(int*);
void doubleVal(int*);
int main(){
// time for random number

    // current date/time based on current system
     time_t now = time(0);
   // convert now to string form
    tm *ltm= localtime(&now);

    const int SIZE = 10;
    int userSize = 0;
    cout << "Enter the number of values you would like to fill the array with: ";
    cin >> userSize;

    int arr[SIZE] = {};

    // fill arr with random numbers
    for (int i = 0; i < userSize; i++){   
        int sec = ltm->tm_sec;
        arr[i] = (rand() % sec );
    }
    
    // int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    
    // initialize pointer using indirection operator

    int* arrPtr = arr; // set to first element
    int* ptrTwo = arr + 5; // set this to pointers address to the 5th element in the array
    
    int number = 0;
    int number2 = 3;
    // passing by &address
    int* numberPtr = &number2;
    getNumber(&number);
    doubleVal(&number); // &address --> passing by address
    cout << "the number doubled is: " << number << endl;
    // getNumber(numberPtr);
    doubleVal(numberPtr); // --> passing as reference 
    cout << "the numberPtr doubled is: " << *numberPtr << endl;


    for(int x= 0; x<userSize; x++){
    // display the first number in the array
    cout << *arrPtr << " ";
    // increment along the numbers in the array, displaying each.
    arrPtr++;


    cout << *(arrPtr + x) << " ptr 1" << endl;
    cout << *(ptrTwo+ x) << " ptr 2" << endl;

    if (*(arrPtr + x) > *(ptrTwo+ x))
    {
        cout << *(arrPtr + x) << " arrPtr is larger than ptrTwo: " << *(ptrTwo+ x);
    }
    
    }

    cout << "\n";

    for (int x = 0; x < userSize; x++)
    {
        arrPtr--;
        cout << *arrPtr << " ";
    }

    cout << "\n";

    // *arrPtr += 5; // adjust the dereferenced value at the address in the pinter
    // arrPtr += 5; // adjust the address saved in the pointer but dong do anything to the value in the cell
    
    // cout << "we are not at address: " << arrPtr
    //      << " where the value is: " << *arrPtr << endl;
    
    for (int x = 0; x < userSize; x++)
    {
        cout << *arrPtr << " ";
        arrPtr++;
    }
    

}

void getNumber(int* input){
    cout << "Enter an integer number";
    cin >> *input;

}

void doubleVal(int* val){
    *val *= 2;
}