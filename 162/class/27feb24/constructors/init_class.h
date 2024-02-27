#pragma once
#ifndef INIT_H
#define INIT_H

#include <string>
using std::string;
class Rectangle
{
    private: 
        double width;
        double length;
    public:
        Rectangle(double,double); // constructor declaration
        
        // setters
        void setWidth(double);
        void setLength(double);

        // getters
        
        double getWidth() const{
            return width;
        }
        double getLength() const{
            return length;
        }
        double getArea() const{
            return width * length;
        }
};
#endif