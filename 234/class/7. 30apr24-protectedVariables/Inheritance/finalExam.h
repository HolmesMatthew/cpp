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

            pointsEach = 100.0 / numQuestions; // ea: test w/5 q ea q = 20; test w/10q ea q = 10

            numericScore = 100 - (missed * pointsEach);

            setScore(numericScore);
            adjustScore();


        }
        
        void adjustScore(){
            // changing gradedActivity private -> protected allows access to score
            double fraction = score - static_cast<int>(score); // getting decimal place of score

            if(fraction >= 0.5){
                // adjust the score variable in parent class
                score += (1.0 - fraction);

            }


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
#endif // FINALEXAM.H