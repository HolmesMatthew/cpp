#include <iostream>
// #include "gradedActivity.h"
#include "finalExam.h"
// #include "init.cpp"
// #include <cstdlib>
// #include <fstream> // for file input/output
// #include <string> 
// #include <cctype> 
#include <iomanip> // for formating
using namespace std;
// 15.1 PG910

int main() 
{ // ----- Start main -----
    GradedActivity quiz1; // now using #include statement from "finalExam.h"

    double testScore;
    int questions;
    int missed;

    // --------------- CS 
    cout << "Enter the number of questions on the CS exam: ";
    cin >> questions;

    cout << "Enter the number of questions missed: ";
    cin >> missed;

    FinalExam CSFinal(questions, missed);

    // -------------- Math 
    cout << "\nEnter the number of questions on the Math exam: ";
    cin >> questions;

    cout << "Enter the number of questions missed: ";
    cin >> missed;

    FinalExam MathFinal(questions, missed);
    cout << "Enter the numeric quiz score; ";
    cin >> testScore;

    // ---------- quiz 
    quiz1.setScore(testScore);

    // ---------- Graded results

    // --- CS ---
    cout << setprecision(2);
    cout << "\n Each question on the CS final counts for " 
         << CSFinal.getPointsEach() << " points." <<  endl;;
    cout << "The exam score is " 
         << CSFinal.getScore() << endl;
    cout << "The exam grade is " << CSFinal.getLetterGrade() << endl;
    // --- math ---
    cout << setprecision(2);
    cout << "\n Each question on the Math final counts for " 
         << MathFinal.getPointsEach() << " points, " <<  endl;
    cout << "The exam score is " 
         << MathFinal.getScore() << endl;
    cout << "The exam grade is " << MathFinal.getLetterGrade() << endl;
    // --- quiz ---
    cout << "Test Score: "<< quiz1.getLetterGrade() << endl;

} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 