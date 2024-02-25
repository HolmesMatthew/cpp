#include "Date.h"

void Date::setDay(int d)
{
    day = d;
}
void Date::setMonth(int m)
{
    month = m;
}
void Date::setYear(int y)
{
    year = y;
}

// getters -- getWidth, getHight, & getArea
int Date::getDay() const
{
    return day;
}
int Date::getMonth() const
{
    return month;
}
int Date::getYear() const
{
    return year;
}
