#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point{
    private :
        Fixed x;
        Fixed y;
    public :
        Point();
        Point(float x, float y);
        Point(const Point& a);
        ~Point();
        Point& operator=(const Point&obj);
        Fixed get_x() const;
        Fixed get_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif