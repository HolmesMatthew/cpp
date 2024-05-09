#pragma once

#ifndef PASSFAIL_H
#define PASSFAIL_H
#include "gradedActivity.h"

#include <string>
using std::string;

class PassFail : public GradedActivity {
    protected:
        double minPassingScore;
    
    public:
        // Default CTOR
        PassFail() : GradedActivity()
        {
            minPassingScore =0.0;

        }
        PassFail(double mps) : GradedActivity()
        {
            minPassingScore = mps;
        }
        void setMinPassingScore(double mps)
        {
            minPassingScore = mps;
        }
        double getMinPassingScore() const 
        {
            return minPassingScore;
        }
        char getLetterGrade() const
        {
            char LetterGrade;
            if (score >= minPassingScore)
            {
                LetterGrade = 'P';
            }
            else
            {
                LetterGrade = 'F';
            }
            return LetterGrade;
        }
};  

#endif