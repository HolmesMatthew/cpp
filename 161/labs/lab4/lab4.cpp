#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
/*

1. Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B
Pattern A
+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++
Pattern B
++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+


*/


// 1 --------------

/*

void counter(int);
void decreasing(int);
// ---
int main(){


counter(10);
cout << "---\n";
decreasing(10);

}
// ---
void counter(int x){
    for (int i = 1; i <= x; i++)
    {
        for (int y = 0; y < i; y++)
        {
            cout << "+";
        }
        cout << "\n";
    }
    
}

void decreasing(int x){
    for (int i = x; i > 0; i--)
    {

        for (int y = 0; y < i; y++)
        {
            cout << "+";
        }
        cout << "\n";
    }
    
}

*/

/*
2. Write a program that opens the file, 
reads all the numbers from the random.txt, and calculates the following:

a. The number of numbers in the file
b. The sum of all the numbers in the file (a running total)
c. The average of all the numbers in the file
*/

// 2 ------------------
int main(){

// using vectors

    ifstream random;
    vector<int> nums;
    int temp;
    int sum = 0;
    int average = 0;

    random.open("random.txt");
    while (random >> temp)
    {
        // build vector, putting temp at the end of the line
        nums.push_back(temp);
        sum += temp;
    }
    // get average
    average = sum/nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\nSum: " << sum << " Average: " << average;
    



/* -------- using array ---, I dont like that you have to assign a
            size to the array. What if you dont know the size?
            I feel as though most of the time you dont know and 
            what your getting is a jumbled mess.

    //get length of random.txt
    int size = 200;
    int average = 0;
    int sum = 0;
    int temp;
    int randomArray[size];

    // loop through nums
    while (true)
    {
        random.open("random.txt");

        for (int i = 0; i < size; i++)
        {   
            // assign num from .txt file to temp variable 
            random >> temp;
            // get sum
            sum += temp;
            // build array w/temp 
            randomArray[i] = temp;
        }
         break;
    } 
    // close file
    random.close();
    // get average
    average = sum/size;
    // print out display
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
         cout << randomArray[i] << " ";
    }
    
    cout << " sum: " << sum << " Average: " << average;
    */
   
}