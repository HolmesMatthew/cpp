#include <iostream>
using namespace std;

void showValue(int num);
int main(){

    const int SIZE = 8;
    int numbers[SIZE] ={6,54,6,45,2,6,7};


for (int i = 0; i < SIZE; i++)
{
    showValue(numbers[i]);
}

}

void showValue(int num){
    cout << num << " ";
}

void printArray(int nums[]){
    
}