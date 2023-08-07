#include "Point.hpp"

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(float x, float y)
{
    this->x = Fixed(x);
    this->y = Fixed(y);
}

Point::Point(const Point& a)
{
    this->x = a.x;
    this->y = a.y;
}

Point::~Point()
{
}

Point& Point::operator=(const Point& obj)
{
    this->x = obj.x;
    this->y = obj.y;
    return(*this);
}

Fixed Point::get_x() const
{
    return (x);
}

Fixed Point::get_y() const
{
    return (y);
}