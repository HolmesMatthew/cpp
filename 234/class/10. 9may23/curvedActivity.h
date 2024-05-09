#pragma once
#ifndef curvedActivity_H
#define curvedActivity_H
#include "gradedActivity.h"


class CurvedActivity  : public GradedActivity
{

    protected:
        double rawScore; // unadjusted score
        double percentage; // curve percent

    public:
        CurvedActivity() : GradedActivity()
        {
            rawScore = 0.0;
            percentage = 0.0;
        }

        void setScore(double s){
            rawScore = s;
            GradedActivity::setScore(rawScore * percentage); 
        }
        void setPercentage(double p){
            percentage = p;
        }

        double GetPercentage() const {
            return percentage;
        }
        double getRawScore() const {
            return rawScore;
        }



};

#endif