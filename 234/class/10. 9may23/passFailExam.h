#pragma once

#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include "passFail.h"

#include <string>
using std::string;

class PassFailExam : public PassFail {
    private:
        int numQuestions;
        double pointsEach;
        int numMissed;


    public:
        // Default CTOR
        PassFailExam() : PassFail()
        {
            numQuestions = 0;
            pointsEach = 0.0;
            numMissed = 0;

        }

        PassFailExam(int questions, int missed, double mps) : PassFail(mps)
        {
            set(questions,missed);


        }
        void set(int q, int m)
        {
            double numericScore;
            numQuestions = q;
            numMissed = m;
            
            pointsEach = 100/numQuestions;
            numericScore = 100 - (m * pointsEach);

            setScore(numericScore);
        }

        double getNumQuestions() const 
        {
            return numQuestions;
        }
        double getPointsEach() const
        {
            return pointsEach;
        }
        int getNumMissed() const
        {
            return numMissed;
        }

};  

#endif