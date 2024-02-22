#pragma once // goes through once and loads into projects

#ifndef RECTANGLE2_H // test see if its defined if not it is defined below

#define RECTANGLE2_H
class Rectangle2
{
    private: // <-- can be changed with . class methods / hidden from main
        double width; 
        double height;
    public: // <-- can be seen by user and shared by main
        void setWidth(double);
        void setHeight(double);
        double getWidth() const; // <-- READ ONLY
        double getHeight() const; // <-- const so user cant change, value is what it is
        double getArea() const;


};

#endif