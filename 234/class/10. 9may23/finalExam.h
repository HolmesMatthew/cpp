#pragma once
#ifndef FINALEXAM_H
#define FINALEXAM_H
#include "gradedActivity.h"

using std::string;

class FinalExam : public GradedActivity // inheriting from graded activity
{
    private:
        int numQuestions; // number of questions
        double pointsEach; // points for each question
        int numMissed; // number of missed questions
    public:
        FinalExam(){
            numQuestions = 0;
            pointsEach = 0;
            numMissed = 0;
        }
        FinalExam(int q, int m){
            set(q,m);
        }

        void set(int questions, int missed){
            double numericScore;
            numQuestions = questions;
            numMissed = missed;

            pointsEach = 100 / numQuestions;

            numericScore = 100.0 - (missed * pointsEach);

            setScore(numericScore);

        }
        int getNumQuestion() const {
            return numQuestions;
        }
        double getPointsEach() const {
            return pointsEach;
        }
        int getNumMissed() const 
        {
            return numMissed;
        }
};

#endif