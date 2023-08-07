#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int fixed;
        static const int num_bit = 8;
    public :
        Fixed();
        Fixed(const int f);
        Fixed(const float n);
        Fixed(const Fixed& a);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed& obj);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator<<(std::ostream &ret, const Fixed& a);

#endif