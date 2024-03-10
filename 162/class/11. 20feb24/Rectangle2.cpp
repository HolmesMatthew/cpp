#include "Rectangle2.h"

// setters -- setWidth & setHeight method to assign width data member

// call class_name::followed_by_function
void Rectangle2::setWidth(double w)
{
    width = w;
}
void Rectangle2::setHeight(double h)
{
    height = h;
}

// getters -- getWidth, getHight, & getArea
double Rectangle2::getWidth() const
{
    return width;
}
double Rectangle2::getHeight() const
{
    return height;
}

// mutator -- getArea
double Rectangle2::getArea() const
{
    return height * width;
}

