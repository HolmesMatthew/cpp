#include <iostream>
#include "gradedActivity.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
// #include <iomanip> // for formating
using namespace std;
// 15.1 PG910

int main() 
{ // ----- Start main -----

    double testScore;

    GradedActivity quiz1;

    cout << "Enter your numeric quiz score; ";
    cin >> testScore;

    quiz1.setScore(testScore);
    cout <<"\n\tTest Score: "<< quiz1.getLetterGrade() << endl;


} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 