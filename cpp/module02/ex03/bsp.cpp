#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed tmp(((a.get_x() * (b.get_y() - c.get_y()) + b.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - b.get_y()))) / 2.0f);
    if (tmp < 0)
        tmp = tmp * -1;
    Fixed tmp1((a.get_x() * (point.get_y() - b.get_y()) + point.get_x() * (b.get_y() - a.get_y()) + b.get_x() * (a.get_y() - point.get_y())) / 2.0f);
    if(tmp1 < 0)
        tmp1 = tmp1 * -1;
    Fixed tmp2((a.get_x() * (point.get_y() - c.get_y()) + point.get_x() * (c.get_y() - a.get_y()) + c.get_x() * (a.get_y() - point.get_y())) / 2.0f);
    if(tmp2 < 0)
        tmp2 = tmp2 * -1;
    Fixed tmp3((b.get_x() * (point.get_y() - c.get_y()) + point.get_x() * (c.get_y() - b.get_y()) + c.get_x() * (b.get_y() - point.get_y())) / 2.0f);
    if(tmp3 < 0)
        tmp3 = tmp3 * -1;
    if (tmp.getRawBits() == tmp1.getRawBits() + tmp2.getRawBits() + tmp3.getRawBits())
        return (1);
    std::cout << tmp.getRawBits() << "\t\t" << tmp1.getRawBits() + tmp2.getRawBits() + tmp3.getRawBits() << std::endl;
    return(0);
}