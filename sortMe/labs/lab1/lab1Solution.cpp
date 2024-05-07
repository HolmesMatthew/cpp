#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

/* ----------- Part one
Problem: Construct an algorithm to find and print out the sum of the first five positive, non-zero integer numbers. 

SET x to 0 

SET n to 0 

WHILE n < 5 

ADD n to x 

Print out x 
*/

/* 
Is the solution proposed logically correct? If not, what is wrong and how would you correct it? 

    Not really, it will just continuously loop because n never changes

How might you be able to actually prove her solution works? 

By running the code but it doesnt

What suggestions do you have to actually prove her solution works? 

Using a counter is a good way to loop through variables or create lists of variables. The code is on the right track but inside the while loop the 
counter needs to be increased. The variable your looking for in this case is a series of variables so you need to store them inside a list. 
As its written right now you are just adding your counter to x. You are also not checking to see if x is even. You can use the modulus operator (%) 
to check if a number is even or odd. Even values return 0 and odd return 1.
*/


// /*
int main()
{
    int x = 0; // number to check
    int c = 0; // counter

    list<int> nums;  // list to store variables

    while (nums.size() < 5) // loop to gather variables, stops when list size is 5
    {
        // c = c + 1;
        c++;
        x = x + c;
        if (x % 2 == 0 and x != 0) // check to see if x is even or odd using modulus operator 
        {   
            nums.push_back(x); // add x to list if its even

        }
    }
    cout << "the first 5 even numbers are: "; // display the first 5 even numbers using a for loop
        for (const int num : nums) {
        cout << num << " ";
        // cout << endl;
    }
    nums.clear(); // clear the list for the next interation

}
// */


/* ---------- Part 2

1. We know that 15 miles is approximately 24.14 kilometers. Using this information how might you be able to actually prover her solution works? 
(i.e., is the solution proposed below logically correct?) If thereis a problem below, fix it! 

More so than the last problem, the numbers she is multiplying the miles by is incorrect and will skew the data

2. What suggestions do you have to improve the overall readability of her pseudocode? 

adding comments and correct data

Problem: Write the pseudocode to ask a person to enter a distance in miles and display the converted distance in kilometers. You are likely to
 need to refer to some of the background information presented above.  

-------------------

DISPLAY PROMPT 

"PLEASE ENTER IN THE MILES YOU WANT TO CONVERT:" 

READ MILES 

KILOMETERS = MILES * 1.3069                            DISPLAY MILE 

DISPLAY "MILES = " 

DISPLAY KILOMETER                                              DISPLAY "KILOMETERS" 

Please write your response to each of the specific questions above (1 and 2). In addition, rewrite the entire solution addressing all of 
your concerns and correcting any errors. Make it a point to keep readability in mind as you rewrite your solution. 
*/


// 1 mile = 1.6093 kilometer
/*
int main (){

const float k = 1.6093F; // conversion factor
int miles = 0; // space holder for miles (entered by user)
float kTom = 0.0F; // space holder for miles CONVERTED to kilometers

cout << "Enter the miles you would like to convert to kilometer (whole numbers only): "; 
cin >> miles; // get miles
cout << "you entered " << miles << " miles" << "\n"; // read out
kTom = miles * k; // convert miles
cout << kTom << " Kilometers is equal to " << miles << " miles"; // display convereted miles
}
*/
