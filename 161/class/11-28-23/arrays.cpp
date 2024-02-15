#include <iostream>
using namespace std;
// single array
// parallel array
// multi-dimensional array
int main(){

const int MONTHS =12;
char months[MONTHS] = {'J','F','M','A','M','J','J','A','S','O','N','D'};
int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31};


char monthNames[MONTHS][15]={
    {'J','A','N','U','A','R','Y'},
    {'F','E','B','R','U','R','Y'},
    {'M','A','R','C','H'}
    };
cout << monthNames[0];

}



// // int singleArray[size] 
// int numbers[7]= {1,2,4,8}; //has space for 7 integers but only is filled with 4

