#include "Point.hpp"

int main()
{
    Point const a((float)2, (float)2);
    Point const b((float)4, (float)6);
    Point const c((float)6, (float)-2);
    Point const point((float)2, (float)1.2);
    std::cout << bsp(a, b, c,point) << std::endl;
}