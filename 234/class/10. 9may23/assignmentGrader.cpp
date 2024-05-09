#include <iostream>
#include "gradedActivity.h"
#include "finalExam.h"
#include "curvedActivity.h"
#include "passFailExam.h"
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
//     cout << "\nEnter the number of questions on the CS exam: ";
//     cin >> questions;

//     cout << "Enter the number of questions missed: ";
//     cin >> missed;

//     FinalExam CSFinal(questions, missed);

    // -------------- Math 
//     cout << "\nEnter the number of questions on the Math exam: ";
//     cin >> questions;

//     cout << "Enter the number of questions missed: ";
//     cin >> missed;

//     FinalExam MathFinal(questions, missed);
//     cout << "Enter the numeric quiz score; ";
//     cin >> testScore;

    // ---------- quiz 
//     quiz1.setScore(testScore);

//     curved
     // double rawScore = 0.0;
     // double curve = 0.0;
     // CurvedActivity curvedExam;

     // cout << "\nEnter the raw score for curved Exam: ";
     // cin >> rawScore;

     // cout << "Enter the percent for the grading curve:  ";
     // cin >> curve;

     // curvedExam.setPercentage(curve);
     // curvedExam.setScore(rawScore);


     //  passFailExam
     int pfNumQuestions =  0;
     double pfMps = 0.0;
     int pfNumMissed = 0;

     cout << "\nEnter the num of questions on Pass Fail Exam: ";
     cin >> pfNumQuestions;
     cout << "Enter the num of questions missed: ";
     cin >> pfNumMissed;
     cout << "Enter the min passing score: ";
     cin >> pfMps;

     PassFailExam pfExam( pfNumQuestions, pfNumMissed, pfMps);
    // ---------- Graded results

    // --- CS ---
    cout << setprecision(2);
//     cout << "\n Each question on the CS final counts for " 
//          << CSFinal.getPointsEach() << " points." <<  endl;;
//     cout << "The exam score is " 
//          << CSFinal.getScore() << endl;
//     cout << "The exam grade is " << CSFinal.getLetterGrade() << endl;
//     // --- math ---
//     cout << setprecision(2);
//     cout << "\n Each question on the Math final counts for " 
//          << MathFinal.getPointsEach() << " points, " <<  endl;
//     cout << "The exam score is " 
//          << MathFinal.getScore() << endl;
//     cout << "The exam grade is " << MathFinal.getLetterGrade() << endl;
//     // --- quiz ---
//     cout << "\nTest Score: "<< quiz1.getLetterGrade() << endl;
//     //  --- Curved Exam ---
//     cout << "\nThe raw score for the curved exam is: " << curvedExam.getRawScore() << endl;
//     cout << "The curved score is " << curvedExam.getScore() << endl;
//     cout << "The curved grade is " << curvedExam.getLetterGrade() << endl;

//     // --- pass fail exam ---

     cout << "\nEach question for pass/fail exam counts for " << pfExam.getPointsEach() << " points." << endl;
     cout << "The min passing score is " << pfExam.getMinPassingScore() << endl;
     cout << "The student's pass fail exam score is:  " << pfExam.getScore() << endl;
     cout << "The student's letter grade is :  " << pfExam.getLetterGrade() << endl;



} // ----- End main -----


/* ---------- notes ----------

-------- end notes -------- */ 