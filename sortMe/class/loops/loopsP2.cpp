#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    // int accum = 0;

    // accum = accum + 10;
    // accum += 10; // same as line above

int num = 0; // place holder to add all user nums

for (int i = 0; i < 7; i++)  // loop 7 times getting a new number each interation
{
    int userNum =0; // user number place holder

    cout << i+1 <<": Please enter a whole number: "; // get user num
    cin >> userNum;
    num += userNum; // add user number to num var

}
cout << "The sum of the numbers entered is " << num << endl; // display total sum of nums

   
}
