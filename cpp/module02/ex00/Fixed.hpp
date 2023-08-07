#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private :
        int fixed;
        static const int num_bit = 8;
    public :
        Fixed();
        Fixed(int f);
        Fixed(const Fixed& a);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed& obj);
};

#endif