#pragma once
#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

#include <string>
using std::string;

class GradedActivity {
    protected:
        double score; // holds numeric score
    
    public:
        // Default CTOR
        GradedActivity(){
            score = 0.0;
        }
        // CTOR
        GradedActivity(double s){
            score = s;
        }
        // Mutator Function (setter)
        void setScore(double s){
            score = s;
        }
        // Accessor functions (getter)
        double getScore() const {
            return score;
        }
        char getLetterGrade() const {
            char letterGrade;

            if (score > 89)
            {
                letterGrade = 'A';
            }else if(score > 79){
                letterGrade = 'B';
            }else if (score > 69)
            {
                letterGrade = 'C';
            }else if (score > 59)
            {
                letterGrade = 'F';
            }

            return letterGrade;
        }
};

#endif