#include <iostream>
using namespace std;

//void swap(int &a, int &b);
void bubbleSort(int arr[], int size);
int main(){

    const int SIZE = 6;
    int value[SIZE] = {6,1,5,4,3,2};
    cout << "unsorted ";
    for(int i=0; i < SIZE; i++){
        cout << value[i] << " ";
    }
    bubbleSort(value, SIZE);
    cout << "\nsorted ";
    for(int i=0; i < SIZE; i++){
        cout << value[i] << " ";
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size){
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