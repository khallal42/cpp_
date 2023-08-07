#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        static const int num_bit = 8;
        int fixed;
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
        bool operator<(const Fixed& a);
        bool operator>(const Fixed& a);
        bool operator==(const Fixed& a);
        bool operator<=(const Fixed& a);
        bool operator>=(const Fixed& a);
        bool operator!=(const Fixed& a);
        Fixed operator+(const Fixed& a);
        Fixed operator-(const Fixed& a);
        Fixed operator*(const Fixed& a);
        Fixed operator/(const Fixed& a);
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);
        static Fixed max(Fixed a, Fixed b);
        static Fixed min(Fixed a, Fixed b);
        static Fixed max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream &ret, const Fixed& a);

#endif