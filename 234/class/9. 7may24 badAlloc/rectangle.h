#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using std::string;

class Rectangle {
    private:
    double width;
    double length;

    public:
    
    class NegativeWidth{
        private:
            double value;
        public:
            NegativeWidth(double val)
            {
                value = val;
            }
            double getValue() const 
            {
                return value;
            }
    };
    class NegativeLength{
        private:
            double value;
        public:
            NegativeLength(double val)
            {
                value = val;
            }
            double getValue() const 
            {
                return value;
            }
    };
    Rectangle(){
        width =0.0;
        length=0.0;
    }
    void setWidth(double);
    void setLength(double);
    double getWidth()const{
        return length;
    }
    double getArea()const{
        return width * length;
    }
};

#endif